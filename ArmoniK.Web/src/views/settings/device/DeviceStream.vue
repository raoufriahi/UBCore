<template>
    <div>
      <!-- Edit popup -->
        <el-dialog :title="eltitle" :visible.sync="editPopup">
          <el-form class="el_form" ref="form" label-position='left' label-width="100px" size="small " :model="editform">
              <el-form-item :label="label.Type">
                <el-input v-model="editform.Type"></el-input>
              </el-form-item>
              <el-form-item :label="label.Name">
                  <el-input v-model="editform.Name"></el-input>
              </el-form-item>
              <el-form-item :label="label.Token">
                  <el-input v-model="editform.Token"></el-input>
              </el-form-item>
              <el-form-item :label="label.username">
                  <el-input v-model="editform.Username"></el-input>
              </el-form-item>
              <el-form-item :label="label.password">
                  <el-input v-model="editform.Password"></el-input>
              </el-form-item>
              <el-form-item label="URL" v-if="editform.Type!='H5_ONVIF'">
                  <el-input v-model="editform.URL"></el-input>
              </el-form-item>
              <el-form-item label="Audio" v-if="editform.Type!='H5_FILE'">
                <el-switch
                  v-model="editform.Audio">
                </el-switch>
              </el-form-item>
               <el-form-item label="Secondary stream" v-if="form.Type!='H5_FILE'">
                    <el-switch
                    v-model="editform.enablesub">
                    </el-switch>
                </el-form-item>
                 <el-form-item v-if="editform.enablesub">
                    <span slot="label">{{$t("message.setting.Stremlang")}}</span>
                    <el-input v-model="editform.SUBURL"></el-input>
                </el-form-item>
          </el-form>
          <div slot="footer" class="dialog-footer button_table">
              <el-button class="form_butt1" @click="editPopup = false">{{$t("message.setting.Cancel")}}</el-button>
              <el-button class="form_butt" type="primary" @click="edityes">{{$t("message.setting.OK")}}</el-button>
          </div>
        </el-dialog>
        <!-- Added popup -->
        <el-dialog :title="eltitle" :visible.sync="dialogFormVisible">
            <el-form  class="el_form" ref="form" label-position='left' label-width="200px" size="small " :model="form">
            
                <el-form-item :label="label.Type">
                    <el-input v-model="form.Type"></el-input>
                </el-form-item>
                <el-form-item :label="label.Name">
                    <el-input v-model="form.Name"></el-input>
                </el-form-item>
                <el-form-item :label="label.Token">
                    <el-input v-model="form.Token"></el-input>
                </el-form-item>
                <el-form-item :label="label.username">
                    <el-input v-model="form.Username"></el-input>
                </el-form-item>
                <el-form-item :label="label.password">
                    <el-input v-model="form.Password"></el-input>
                </el-form-item>
                <el-form-item label="URL">
                    <el-input v-model="form.URL"></el-input>
                </el-form-item>
                <el-form-item label="Audio" v-if="form.Type!='H5_FILE'">
                    <el-switch
                        v-model="form.Audio">
                    </el-switch>
                </el-form-item>
                <el-form-item label='Secondary stream' v-if="form.Type!='H5_FILE'">
                    <el-switch
                    v-model="form.enablesub">
                    </el-switch>
                </el-form-item>
                 <el-form-item v-if="form.enablesub" label="SUBURL">
                    <span slot="label">{{$t("message.setting.Stremlang")}}</span>
                    <el-input v-model="form.SUBURL"></el-input>
                </el-form-item>
            </el-form>
            <div slot="footer" class="dialog-footer button_table">
                <el-button class="form_butt1" @click="dialogFormVisible = false">{{$t("message.setting.Cancel")}}</el-button>
                <el-button class="form_butt" type="primary" @click="platformyes">{{$t("message.setting.OK")}}</el-button>
            </div>
        </el-dialog>
        <!-- two tables -->
        <div class="button_edi">
            <CButton class="form_butt" @click="addto" type="submit">{{$t("message.setting.ADD")}}</CButton>
            <CButton class="form_butt1" @click="deleteselect" type="submit">{{$t("message.setting.DeleteAll")}}</CButton>
        </div>
            <!-- Sheet -->
        <el-table
            :data="tableData.filter(data => !search || data.Name.toLowerCase().includes(search.toLowerCase())).slice((currentPage-1)*pageSize,currentPage*pageSize)"
            @select='selectCall'
            @select-all='select_Call'
            stripe
            style="width: 100%" 
            v-loading="loading" 
            element-loading-text="Editing, please do not switch pages"
            element-loading-background="rgba(0, 0, 0, 0)">
            <el-table-column
                type="selection"
                width="55">
            </el-table-column>
            <el-table-column
                prop="index"
                :label="label.Index"
                width="100">
            </el-table-column>
            <el-table-column
            prop="Name"
            :label="label.Name">
            </el-table-column>
            <el-table-column
            prop="IP"
            :label="label.IP"
            min-width="140">
            </el-table-column>
            <el-table-column
            prop="Port"
            :label="label.Port">
            </el-table-column>
            <el-table-column
            prop="User"
            :label="label.User">
            </el-table-column>
            <el-table-column
            prop="Online"
            :label="label.Online">
            </el-table-column>
            <el-table-column
            prop="Type"
            :label="label.Type"
            min-width="140">
            </el-table-column>
            <el-table-column
            prop="Token"
            :label="label.Token">
            </el-table-column>
            <el-table-column
                fixed="right"
                min-width="140">
                <template slot="header" slot-scope="scope">
                    <el-input
                    v-model="search"
                    @change="handlechange(scope.$index,scope.row)"
                    size="mini"
                    placeholder="Enter keywords"/>
                </template>
                <template slot-scope="scope">
                    <!-- <el-button @click="handleClick(scope.$index,scope.row)" type="text" size="small">{{$t("message.setting.Detail")}}</el-button> -->
                    <el-button @click="handleEdit(scope.$index,scope.row)" type="text" size="small">{{$t("message.setting.edit")}}</el-button>
                    <el-button @click.native.prevent="deleteRow(scope.$index,scope.row, tableData)" type="text" size="small">{{$t("message.setting.DeleteAll")}}</el-button>
                </template>
            </el-table-column>
        </el-table>
        <!-- Pagination -->
        <el-pagination
            style="text-align: center;"
            layout=" prev, pager, next,total, jumper"
            @size-change="handleSizeChange1" 
            @current-change="handleCurrentChange1"
            :current-page="currentPage"
            :total="total">
        </el-pagination>
    </div>
</template>
<script>
import uuid from '../../../assets/js/uuid'

  export default {
    data() {
      return {
        eltitle:this.$t("message.setting.Configuration"),
        search: '',//search
        activeName: 'V1_STREAM',//Show tabs first
        inputedit:[],
        label:{
            label:"V1_STREAM",//Pick 1
            label1:"V1_ONVIF",//Pick 2
            label2:"V1_FILE",//Pick 3
            label3:this.$t("message.setting.all"),//Pick 4
            
            Index:this.$t("message.table.Index"),
            Name:this.$t("message.table.Name"),
            IP:this.$t("message.table.IP"),
            Port:this.$t("message.table.Port"),
            User:this.$t("message.table.User"),
            Online:this.$t("message.table.Online"),
            Type:this.$t("message.table.Type"),
            Token:this.$t("message.table.Token"),

            username:this.$t("message.setting.username"),
            password:this.$t("message.setting.password")
        },
        options: [{
                value: 'V1_STREAM',
                label: 'V1_STREAM'
            }, {
                value: 'V1_ONVIF',
                label: 'V1_ONVIF'
            }, {
                value: 'V1_FILE',
                label: 'V1_FILE'
            }
        ],
        //pagination
        pageSize: 10,//Number of pages
        dialogFormVisible: false,//Add popup
        editPopup:false,//Edit popup
        form: {
            Type:"V1_STREAM",
            Name:"Cam1",
            Token:"",
            Username:"admin",
            Password:"12345",
            URL:"rtsp://192.168.1.1/stream",
            SUBURL:'rtsp://192.168.1.1/stream2',
            Audio:"false",
            enablesub:"false",
            IP:"192.168.1.1",
            Port:"80"
        },
        editform: {
            Audio:"false",
            enablesub:"false",
            Name:"",
            Token:"",
            Username:"",
            Password:"",
            URL:"",
            SUBURL:'',
            Audio:"",
            IP:"",
            Port:""
        },
        loading: false,
        edittoken:"",//The token to delete when editing
        editindex:"",//index when editing
        tableData: [],//1
        total: 0, // Total number 1
        currentPage: 1, // Current page 1
        
        selectop:[]//Choose those
      };
    },
    mounted(){
      this.loadstream();
    },
    methods:{
        
        //The data of the first table
        loadstream(){
            //url
            var url = this.$store.state.IPPORT + "/api/v1/GetSrc?type=H5_STREAM&session="+ this.$store.state.token;
            //console.log(url)
            this.$http.get(url).then(result=>{
              //console.log("a",result);
              if(result.status == 200){
                  var itme=result.data.src;
                  console.log(itme)
                  this.tableData=[];
                  for(var i=0;i<itme.length;i++){
                      var tabledata={
                          index:i+1,
                          Type:itme[i].nType,
                          Name:itme[i].strName,
                          Token:itme[i].strToken,
                          User:itme[i].strUser,
                          Password:itme[i].strPasswd,
                          IP:itme[i].strSrcIpAddress,
                          Port:itme[i].strSrcPort,
                          Audio :itme[i].bEnableAudio,
                          Online:itme[i].bOnline+"",
                          enablesub:itme[i].bEnableUrlSub,
                          strUrl:itme[i].strUrl,
                          strUrlSub:itme[i].strUrlSub,
                          bPasswdEncrypt:itme[i].bPasswdEncrypt
                      };
                      this.tableData.push(tabledata);
                      
                  }
                  this.total=this.tableData.length;
              }
            })
        },
        
        //  Edit Add OK button
        Success(){
            this.editPopup = false;
            var root = this.$store.state.IPPORT;
            //url
            var form=this.editform;
            console.log(form)
            var urlone=form.URL
            var suburl=form.SUBURL
            console.log(suburl)
            var urloneyu=urlone.split('')
            var suburlyu=suburl.split('')
            if(suburl!==undefined){
                 // Secondary stream
                 var containSpecial =new RegExp(/[(\ )(\~)(\!)(\@)(\#)(\$)(\%)(\^)(\&)(\*)(\()(\))(\-)(\_)(\+)(\=)(\[)(\])(\{)(\})(\|)(\\)(\;)(\:)(\')(\")(\,)(\.)(\/) (\<)(\>)(\?)(\)]+/);
                if(containSpecial.test(suburlyu)){
                    for(var i=0;i<suburlyu.length;i++){
                        if(suburlyu[i]=='%'){
                            suburlyu[i]=encodeURIComponent('%25')
                        }
                        if(suburlyu[i]=='&'){
                            suburlyu[i]=encodeURIComponent('%26')
                        }
                    }   
                }
                console.log(suburlyu)
                var addsuburl= suburlyu.join('')
                console.log(addsuburl)
            }
            if(urlone!==undefined){
                var containSpecial =new RegExp(/[(\ )(\~)(\!)(\@)(\#)(\$)(\%)(\^)(\&)(\*)(\()(\))(\-)(\_)(\+)(\=)(\[)(\])(\{)(\})(\|)(\\)(\;)(\:)(\')(\")(\,)(\.)(\/) (\<)(\>)(\?)(\)]+/);
                if(containSpecial.test(urloneyu)){
                    for(var i=0;i<urloneyu.length;i++){
                        if(urloneyu[i]=='%'){
                            urloneyu[i]=encodeURIComponent('%25')
                        }
                        if(urloneyu[i]=='&'){
                            urloneyu[i]=encodeURIComponent('%26')
                        }
                    }   
                }
                var urlfirst= urloneyu.join('')
                console.log(urlfirst)
            }
            var url = root + "/api/v1/AddSrcRTSP?name="+encodeURIComponent(form.Name)+
                "&token="+encodeURIComponent(form.Token)+
                "&user="+encodeURIComponent(form.Username)+
                "&password="+encodeURIComponent(form.Password)+
                "&audio="+form.Audio+
                // "&url="+urlfirst+
                "&url="+encodeURIComponent(urlone)+
                "&session="+ this.$store.state.token;
                console.log("++++++++++++++++",url);
            if(form.enablesub){
                var url=url+'&enablesub='+form.enablesub+'&suburl='+encodeURIComponent(suburl)
            }else{
                console.log(url)
            }
            console.log(url)
            this.$http.get(url).then(result=>{
                //console.log(result);
                if(result.status==200){
                if(result.data.bStatus==true){
                        this.loading = false;
                        this.tableData=[];
                        this.loadstream();
                        //this.reload();
                    }else{
                        this.loading = false;
                        this.$message({
                            message: 'Edit failed',
                            type: 'warning'
                        });
                        return false;
                    }
                
                }
            })
        },
        edityes(){
            this.loading = true;
            console.log(this.editindex);
            //return false;
            this.editPopup = false;
            //url
            var form=this.editform;
            var list = {
                index:form.index,
                Type:form.Type,
                Name:form.Name,
                Token:form.Token,
                User:form.Username,
                Password:form.Password,
                IP:form.IP,
                Port:form.Port,
                Audio :form.Audio,
                Online:form.Online+"",
                bPasswdEncrypt:form.bPasswdEncrypt
            }
            console.log("form",form);
           
            //return false;
            var url1 = this.$store.state.IPPORT + "/api/v1/DelSrc?token="+this.edittoken+"&edit=true&session="+ this.$store.state.token;
            this.$http.get(url1).then(result=>{
                console.log("1",result,url1);
                if(result.status==200){
                    if(result.data.bStatus==true){
                        // console.log("*************************",result.data.bStatus)
                        // this.tableData.splice(this.editindex, 1,list)
                        this.Success();
                        
                    }else{
                        this.loading = false;
                        this.$message({
                            message: "Edit failed",
                            type: 'warning'
                        });
                        return false;
                    }
                }else{
                    console.log()
                }
            })
            
            
        },
        platformyes(){
           this.dialogFormVisible=false;
            //console.log(this.form)
            //return false;
            var form=this.form;
            
            var root = this.$store.state.IPPORT;
            console.log(form.enablesub)
            var urlone=form.URL
            var suburl=form.SUBURL
            
            var urloneyu=urlone.split('')
            var suburlyu=suburl.split('')
            var containSpecial =new RegExp(/[(\ )(\~)(\!)(\@)(\#)(\$)(\%)(\^)(\&)(\*)(\()(\))(\-)(\_)(\+)(\=)(\[)(\])(\{)(\})(\|)(\\)(\;)(\:)(\')(\")(\,)(\.)(\/) (\<)(\>)(\?)(\)]+/);
            if(containSpecial.test(urloneyu)){
                for(var i=0;i<urloneyu.length;i++){
                    if(urloneyu[i]=='%'){
                         urloneyu[i]=encodeURIComponent('%25')
                    }
                    if(urloneyu[i]=='&'){
                         urloneyu[i]=encodeURIComponent('%26')
                    }
                }   
            }
            var urlfirst= urloneyu.join('')
            console.log(urlfirst)
            // 辅码流
             if(containSpecial.test(suburlyu)){
                for(var i=0;i<suburlyu.length;i++){
                    if(suburlyu[i]=='%'){
                         suburlyu[i]=encodeURIComponent('%25')
                    }
                    if(suburlyu[i]=='&'){
                         suburlyu[i]=encodeURIComponent('%26')
                    }
                }   
            }
            
            var urlsub= suburlyu.join('')
            console.log(urlsub)
            console.log("stream",form.Audio);
            var url = root + "/api/v1/AddSrcRTSP?&name="+encodeURIComponent(form.Name)+
            "&token="+encodeURIComponent(form.Token)+
            "&user="+encodeURIComponent(form.Username)+
            "&password="+encodeURIComponent(form.Password)+
            "&audio="+form.Audio+
            // "&url="+urlfirst+
            "&url="+encodeURIComponent(urlone)+
            "&session="+ this.$store.state.token
           
            if(form.enablesub){
                var url=url+"&enablesub="+'true'+"&suburl="+encodeURIComponent(suburl)    
            }
            console.log("-",url);
            this.$http.get(url).then(result=>{
            //console.log(result);
            if(result.status==200){
                if(result.data.bStatus==true){
                    //this.reload();
                    this.tableData=[];
                    this.loadstream();
                }else{
                    this.$message({
                        message: 'Add failed',
                        type: 'warning'
                    });
                    return false;
                }
              }
           })
        },
        //Edit
        
        handleEdit(index,row){
            console.log(index,row);
            console.log(row.Audio,row.strUrl,row.strUrlSub);
            var index_xlh="";
            //return false;
                index_xlh=((this.currentPage-1)*10)+index;
            console.log("Serial number 1",index_xlh);
            // console.log(this.tableData[index]);
            //return false;
            this.editPopup = true;
            this.edittoken=row.Token;
            this.editindex=index_xlh;
            this.editform["Type"]=row.Type;
            this.editform["index"]=row.index;
            this.editform["Name"]=row.Name;
            this.editform["Token"]=row.Token;
            this.editform["Username"]=row.User;
            this.editform["Password"]=row.Password;
            this.editform["IP"]=row.IP;
            this.editform["Port"]=row.Port;
            this.editform["URL"]=row.strUrl;
            this.editform["SUBURL"]=row.strUrlSub;
            this.editform["Audio"]=row.Audio;
            this.editform["enablesub"]=row.enablesub;
            this.editform["Online"]=row.Online;
            this.editform["bPasswdEncrypt"]=row.bPasswdEncrypt;
            console.log(this.editform)
            // console.log(this.tableData[index])
        },
        //Randomly get token data when you click Add
        addto(){
            this.dialogFormVisible=true;
            this.form["Token"] = uuid(4, 16).toLowerCase();
            // this.form.SUBURL=this.$store.state.RTMPROOT+'/'+encodeURIComponent(this.form.Token)+'$$sub'
        },
        //Click to delete
        deleteRow(index, row,rows) {
          //var form=this.form;
            console.log(rows,this.form.Type,index);
            var index_xlh="";
            //return false;
            console.log("Serial number V1_STREAM",this.currentPage,((this.currentPage-1)*10)+index);
            index_xlh=((this.currentPage-1)*10)+index;
            
            console.log("Serial number 1",index_xlh);
            
            //url
            var url = this.$store.state.IPPORT + "/api/v1/DelSrc?token="+encodeURIComponent(row.Token)+"&session="+ this.$store.state.token;
            this.$http.get(url).then(result=>{
                console.log(result);
                console.log(this.tableData);
                if(result.status==200){
                    if(result.data.bStatus==true){
                        rows.splice(index_xlh, 1);
                        this.total=this.tableData.length
                    }else{
                        this.$message({
                            message: 'Failed to delete',
                            type: 'warning'
                        });
                        return false;
                    }
                }
            })
        },
        //Select all delete
        deleteselect(){
            var selectop=this.selectop;
            console.log(selectop)
            
            // return false
            //url
            for(var i=selectop.length-1;i>=0;i--){
                if(selectop[i].type=='duo'){
                    this.tableData.splice(selectop[i].index, 1);
                    console.log(selectop[i],i,selectop[i].index,this.currentPage)
                }
                console.log(selectop[i],i,selectop[i].index)
                var url = this.$store.state.IPPORT + "/api/v1/DelSrc?token="+encodeURIComponent(selectop[i].token)+"&session="+ this.$store.state.token;
                this.$http.get(url).then(result=>{
                    if(result.status==200){
                        if(result.data.bStatus==true){
                            if(selectop[0].type=='dan'){
                                this.tableData=[];
                                this.loadstream();
                            }
                            this.$message({
                                message: this.$t("message.camera.Delete_successful"),
                                type: 'warning'
                            });
                        }else{
                            this.$message({
                                message:this.$t("message.camera.Delete_failed"),
                                type: 'warning'
                            });
                            return false;
                        }
                    }
                })
            }
            
        },
        selectCall(row,index){
            console.log("INDEX",row,index);
            this.selectop=[];
            for(var i=0;i<row.length;i++){
                var selectop={
                    token:row[i].Token,
                    index:row[i].index-1,
                    type:"dan",
                };
                
                this.selectop.push(selectop);
            }
            
        },
        select_Call(row){
            this.selectop=[];
            for(var i=0;i<row.length;i++){
                var selectop={
                    token:row[i].Token,
                    index:((this.currentPage-1)*10)+i,
                    type:'duo',
                    Name:row[i].Name
                };
                this.selectop.push(selectop);
            }
        },
        //Search
        handlechange(){},
        //Pagination
        handleSizeChange1(val) {
            console.log(`per page ${val} strip`);
            this.currentPage = 1;
            this.pageSize = val;
        },
        handleCurrentChange1(val) {
            console.log(`Current page: ${val}`);
            this.currentPage = val;
        },
    },
  };
</script>
<style lang="scss" scoped>

</style>