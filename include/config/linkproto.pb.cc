/*
 * Copyright (c) 2017-2018 Heimdall
 *
 * The computer program contained herein contains proprietary
 * information which is the property of Heimdall.
 * The program may be used and/or copied only with the written
 * permission of Heimdall or in accordance with the
 * terms and conditions stipulated in the agreement/contract under
 * which the programs have been supplied.
 */
#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "linkproto.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Link {
class LinkCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCmd> {
  public:
  const ::LinkLoginReq* loginreq_;
  const ::LinkLoginResp* loginresp_;
  const ::LinkKeepaliveReq* keepalivereq_;
  const ::LinkKeepaliveResp* keepaliveresp_;
  const ::LinkRegNotifyReq* regnotifyreq_;
  const ::LinkRegNotifyResp* regnotifyresp_;
  const ::LinkListCamReq* camlistreq_;
  const ::LinkListCamResp* camlistresp_;
  const ::LinkCamReq* camreq_;
  const ::LinkCamResp* camresp_;
  const ::LinkAddCamReq* addcamreq_;
  const ::LinkAddCamResp* addcamresp_;
  const ::LinkDelCamReq* delcamreq_;
  const ::LinkDelCamResp* delcamresp_;
  const ::LinkSetCamSchedReq* setcamschedreq_;
  const ::LinkSetCamSchedResp* setcamschedresp_;
  const ::LinkGetStreamListReq* getstreamlistreq_;
  const ::LinkGetStreamListResp* getstreamlistresp_;
  const ::LinkVidDiskListReq* disklistreq_;
  const ::LinkVidDiskListResp* disklistresp_;
  const ::LinkSysVidDiskListReq* sysdisklistreq_;
  const ::LinkSysVidDiskListResp* sysdisklistresp_;
  const ::LinkAddDiskReq* adddiskreq_;
  const ::LinkAddDiskResp* adddiskresp_;
  const ::LinkDelDiskReq* deldiskreq_;
  const ::LinkDelDiskResp* deldiskresp_;
  const ::LinkUpdateDiskLimitReq* disklimitreq_;
  const ::LinkUpdateDiskLimitResp* disklimitresp_;
  const ::LinkGetLicReq* licreq_;
  const ::LinkGetLicResp* licresp_;
  const ::LinkGetVerReq* verreq_;
  const ::LinkGetVerResp* verresp_;
  const ::LinkConfLicReq* conflicreq_;
  const ::LinkConfLicResp* conflicresp_;
  const ::LinkAddUserReq* adduserreq_;
  const ::LinkAddUserResp* adduserresp_;
  const ::LinkHasRecordReq* hasrecreq_;
  const ::LinkHasRecordResp* hasrecresp_;
  const ::LinkSearchRecordReq* searchrecreq_;
  const ::LinkSearchRecordResp* searchrecresp_;
  const ::LinkStartLiveCmd* startlivecmd_;
  const ::LinkStopLiveCmd* stoplivecmd_;
  const ::LinkPlayBackCmd* playbackcmd_;
  const ::LinkPlayPauseCmd* playpausecmd_;
  const ::LinkPlayResumeCmd* playresumecmd_;
  const ::LinkPlaySeekCmd* playseekcmd_;
  const ::LinkPlayStopCmd* playstopcmd_;
  const ::LinkPtzCmd* ptzcmd_;
  const ::LinkCamSearchStartReq* camsearchstartreq_;
  const ::LinkCamSearchStartResp* camsearchstartresp_;
  const ::LinkCamSearchStopReq* camsearchstopreq_;
  const ::LinkCamSearchStopResp* camsearchstopresp_;
  const ::LinkRegEventReq* regeventreq_;
  const ::LinkRegEventResp* regeventresp_;
  const ::LinkUnRegEventReq* unregeventreq_;
  const ::LinkUnRegEventResp* unregeventresp_;
  const ::LinkEventSearchReq* eventsearchreq_;
  const ::LinkEventSearchResp* eventsearchresp_;
  const ::LinkHandleEventReq* handleeventreq_;
  const ::LinkHandleEventResp* handleeventresp_;
  const ::LinkCamAddNotify* camaddnotify_;
  const ::LinkCamIdNotify* camidnotify_;
  const ::LinkCamSearchedNotify* camsearchednotify_;
  const ::LinkEventNotify* evnetnotify_;
} _LinkCmd_default_instance_;

namespace protobuf_linkproto_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCmd, _oneof_case_[0]),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCmd, type_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), loginreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), loginresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), keepalivereq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), keepaliveresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), regnotifyreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), regnotifyresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camlistreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camlistresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), addcamreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), addcamresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), delcamreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), delcamresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), setcamschedreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), setcamschedresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), getstreamlistreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), getstreamlistresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), disklistreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), disklistresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), sysdisklistreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), sysdisklistresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), adddiskreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), adddiskresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), deldiskreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), deldiskresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), disklimitreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), disklimitresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), licreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), licresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), verreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), verresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), conflicreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), conflicresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), adduserreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), adduserresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), hasrecreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), hasrecresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), searchrecreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), searchrecresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), startlivecmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), stoplivecmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), playbackcmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), playpausecmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), playresumecmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), playseekcmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), playstopcmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), ptzcmd_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camsearchstartreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camsearchstartresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camsearchstopreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camsearchstopresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), regeventreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), regeventresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), unregeventreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), unregeventresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), eventsearchreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), eventsearchresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), handleeventreq_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), handleeventresp_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camaddnotify_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camidnotify_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), camsearchednotify_),
  PROTO2_GENERATED_DEFAULT_ONEOF_FIELD_OFFSET((&_LinkCmd_default_instance_), evnetnotify_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCmd, cmd_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(LinkCmd)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCmd_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "linkproto.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _LinkCmd_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_linksystem_2eproto::InitDefaults();
  _LinkCmd_default_instance_.DefaultConstruct();
  _LinkCmd_default_instance_.loginreq_ = const_cast< ::LinkLoginReq*>(
      ::LinkLoginReq::internal_default_instance());
  _LinkCmd_default_instance_.loginresp_ = const_cast< ::LinkLoginResp*>(
      ::LinkLoginResp::internal_default_instance());
  _LinkCmd_default_instance_.keepalivereq_ = const_cast< ::LinkKeepaliveReq*>(
      ::LinkKeepaliveReq::internal_default_instance());
  _LinkCmd_default_instance_.keepaliveresp_ = const_cast< ::LinkKeepaliveResp*>(
      ::LinkKeepaliveResp::internal_default_instance());
  _LinkCmd_default_instance_.regnotifyreq_ = const_cast< ::LinkRegNotifyReq*>(
      ::LinkRegNotifyReq::internal_default_instance());
  _LinkCmd_default_instance_.regnotifyresp_ = const_cast< ::LinkRegNotifyResp*>(
      ::LinkRegNotifyResp::internal_default_instance());
  _LinkCmd_default_instance_.camlistreq_ = const_cast< ::LinkListCamReq*>(
      ::LinkListCamReq::internal_default_instance());
  _LinkCmd_default_instance_.camlistresp_ = const_cast< ::LinkListCamResp*>(
      ::LinkListCamResp::internal_default_instance());
  _LinkCmd_default_instance_.camreq_ = const_cast< ::LinkCamReq*>(
      ::LinkCamReq::internal_default_instance());
  _LinkCmd_default_instance_.camresp_ = const_cast< ::LinkCamResp*>(
      ::LinkCamResp::internal_default_instance());
  _LinkCmd_default_instance_.addcamreq_ = const_cast< ::LinkAddCamReq*>(
      ::LinkAddCamReq::internal_default_instance());
  _LinkCmd_default_instance_.addcamresp_ = const_cast< ::LinkAddCamResp*>(
      ::LinkAddCamResp::internal_default_instance());
  _LinkCmd_default_instance_.delcamreq_ = const_cast< ::LinkDelCamReq*>(
      ::LinkDelCamReq::internal_default_instance());
  _LinkCmd_default_instance_.delcamresp_ = const_cast< ::LinkDelCamResp*>(
      ::LinkDelCamResp::internal_default_instance());
  _LinkCmd_default_instance_.setcamschedreq_ = const_cast< ::LinkSetCamSchedReq*>(
      ::LinkSetCamSchedReq::internal_default_instance());
  _LinkCmd_default_instance_.setcamschedresp_ = const_cast< ::LinkSetCamSchedResp*>(
      ::LinkSetCamSchedResp::internal_default_instance());
  _LinkCmd_default_instance_.getstreamlistreq_ = const_cast< ::LinkGetStreamListReq*>(
      ::LinkGetStreamListReq::internal_default_instance());
  _LinkCmd_default_instance_.getstreamlistresp_ = const_cast< ::LinkGetStreamListResp*>(
      ::LinkGetStreamListResp::internal_default_instance());
  _LinkCmd_default_instance_.disklistreq_ = const_cast< ::LinkVidDiskListReq*>(
      ::LinkVidDiskListReq::internal_default_instance());
  _LinkCmd_default_instance_.disklistresp_ = const_cast< ::LinkVidDiskListResp*>(
      ::LinkVidDiskListResp::internal_default_instance());
  _LinkCmd_default_instance_.sysdisklistreq_ = const_cast< ::LinkSysVidDiskListReq*>(
      ::LinkSysVidDiskListReq::internal_default_instance());
  _LinkCmd_default_instance_.sysdisklistresp_ = const_cast< ::LinkSysVidDiskListResp*>(
      ::LinkSysVidDiskListResp::internal_default_instance());
  _LinkCmd_default_instance_.adddiskreq_ = const_cast< ::LinkAddDiskReq*>(
      ::LinkAddDiskReq::internal_default_instance());
  _LinkCmd_default_instance_.adddiskresp_ = const_cast< ::LinkAddDiskResp*>(
      ::LinkAddDiskResp::internal_default_instance());
  _LinkCmd_default_instance_.deldiskreq_ = const_cast< ::LinkDelDiskReq*>(
      ::LinkDelDiskReq::internal_default_instance());
  _LinkCmd_default_instance_.deldiskresp_ = const_cast< ::LinkDelDiskResp*>(
      ::LinkDelDiskResp::internal_default_instance());
  _LinkCmd_default_instance_.disklimitreq_ = const_cast< ::LinkUpdateDiskLimitReq*>(
      ::LinkUpdateDiskLimitReq::internal_default_instance());
  _LinkCmd_default_instance_.disklimitresp_ = const_cast< ::LinkUpdateDiskLimitResp*>(
      ::LinkUpdateDiskLimitResp::internal_default_instance());
  _LinkCmd_default_instance_.licreq_ = const_cast< ::LinkGetLicReq*>(
      ::LinkGetLicReq::internal_default_instance());
  _LinkCmd_default_instance_.licresp_ = const_cast< ::LinkGetLicResp*>(
      ::LinkGetLicResp::internal_default_instance());
  _LinkCmd_default_instance_.verreq_ = const_cast< ::LinkGetVerReq*>(
      ::LinkGetVerReq::internal_default_instance());
  _LinkCmd_default_instance_.verresp_ = const_cast< ::LinkGetVerResp*>(
      ::LinkGetVerResp::internal_default_instance());
  _LinkCmd_default_instance_.conflicreq_ = const_cast< ::LinkConfLicReq*>(
      ::LinkConfLicReq::internal_default_instance());
  _LinkCmd_default_instance_.conflicresp_ = const_cast< ::LinkConfLicResp*>(
      ::LinkConfLicResp::internal_default_instance());
  _LinkCmd_default_instance_.adduserreq_ = const_cast< ::LinkAddUserReq*>(
      ::LinkAddUserReq::internal_default_instance());
  _LinkCmd_default_instance_.adduserresp_ = const_cast< ::LinkAddUserResp*>(
      ::LinkAddUserResp::internal_default_instance());
  _LinkCmd_default_instance_.hasrecreq_ = const_cast< ::LinkHasRecordReq*>(
      ::LinkHasRecordReq::internal_default_instance());
  _LinkCmd_default_instance_.hasrecresp_ = const_cast< ::LinkHasRecordResp*>(
      ::LinkHasRecordResp::internal_default_instance());
  _LinkCmd_default_instance_.searchrecreq_ = const_cast< ::LinkSearchRecordReq*>(
      ::LinkSearchRecordReq::internal_default_instance());
  _LinkCmd_default_instance_.searchrecresp_ = const_cast< ::LinkSearchRecordResp*>(
      ::LinkSearchRecordResp::internal_default_instance());
  _LinkCmd_default_instance_.startlivecmd_ = const_cast< ::LinkStartLiveCmd*>(
      ::LinkStartLiveCmd::internal_default_instance());
  _LinkCmd_default_instance_.stoplivecmd_ = const_cast< ::LinkStopLiveCmd*>(
      ::LinkStopLiveCmd::internal_default_instance());
  _LinkCmd_default_instance_.playbackcmd_ = const_cast< ::LinkPlayBackCmd*>(
      ::LinkPlayBackCmd::internal_default_instance());
  _LinkCmd_default_instance_.playpausecmd_ = const_cast< ::LinkPlayPauseCmd*>(
      ::LinkPlayPauseCmd::internal_default_instance());
  _LinkCmd_default_instance_.playresumecmd_ = const_cast< ::LinkPlayResumeCmd*>(
      ::LinkPlayResumeCmd::internal_default_instance());
  _LinkCmd_default_instance_.playseekcmd_ = const_cast< ::LinkPlaySeekCmd*>(
      ::LinkPlaySeekCmd::internal_default_instance());
  _LinkCmd_default_instance_.playstopcmd_ = const_cast< ::LinkPlayStopCmd*>(
      ::LinkPlayStopCmd::internal_default_instance());
  _LinkCmd_default_instance_.ptzcmd_ = const_cast< ::LinkPtzCmd*>(
      ::LinkPtzCmd::internal_default_instance());
  _LinkCmd_default_instance_.camsearchstartreq_ = const_cast< ::LinkCamSearchStartReq*>(
      ::LinkCamSearchStartReq::internal_default_instance());
  _LinkCmd_default_instance_.camsearchstartresp_ = const_cast< ::LinkCamSearchStartResp*>(
      ::LinkCamSearchStartResp::internal_default_instance());
  _LinkCmd_default_instance_.camsearchstopreq_ = const_cast< ::LinkCamSearchStopReq*>(
      ::LinkCamSearchStopReq::internal_default_instance());
  _LinkCmd_default_instance_.camsearchstopresp_ = const_cast< ::LinkCamSearchStopResp*>(
      ::LinkCamSearchStopResp::internal_default_instance());
  _LinkCmd_default_instance_.regeventreq_ = const_cast< ::LinkRegEventReq*>(
      ::LinkRegEventReq::internal_default_instance());
  _LinkCmd_default_instance_.regeventresp_ = const_cast< ::LinkRegEventResp*>(
      ::LinkRegEventResp::internal_default_instance());
  _LinkCmd_default_instance_.unregeventreq_ = const_cast< ::LinkUnRegEventReq*>(
      ::LinkUnRegEventReq::internal_default_instance());
  _LinkCmd_default_instance_.unregeventresp_ = const_cast< ::LinkUnRegEventResp*>(
      ::LinkUnRegEventResp::internal_default_instance());
  _LinkCmd_default_instance_.eventsearchreq_ = const_cast< ::LinkEventSearchReq*>(
      ::LinkEventSearchReq::internal_default_instance());
  _LinkCmd_default_instance_.eventsearchresp_ = const_cast< ::LinkEventSearchResp*>(
      ::LinkEventSearchResp::internal_default_instance());
  _LinkCmd_default_instance_.handleeventreq_ = const_cast< ::LinkHandleEventReq*>(
      ::LinkHandleEventReq::internal_default_instance());
  _LinkCmd_default_instance_.handleeventresp_ = const_cast< ::LinkHandleEventResp*>(
      ::LinkHandleEventResp::internal_default_instance());
  _LinkCmd_default_instance_.camaddnotify_ = const_cast< ::LinkCamAddNotify*>(
      ::LinkCamAddNotify::internal_default_instance());
  _LinkCmd_default_instance_.camidnotify_ = const_cast< ::LinkCamIdNotify*>(
      ::LinkCamIdNotify::internal_default_instance());
  _LinkCmd_default_instance_.camsearchednotify_ = const_cast< ::LinkCamSearchedNotify*>(
      ::LinkCamSearchedNotify::internal_default_instance());
  _LinkCmd_default_instance_.evnetnotify_ = const_cast< ::LinkEventNotify*>(
      ::LinkEventNotify::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\017linkproto.proto\022\004Link\032\020linksystem.prot"
      "o\"\257\026\n\007LinkCmd\022\037\n\004type\030\001 \001(\0162\021.Link.LinkC"
      "mdType\022!\n\010loginReq\030f \001(\0132\r.LinkLoginReqH"
      "\000\022#\n\tloginResp\030g \001(\0132\016.LinkLoginRespH\000\022)"
      "\n\014keepaliveReq\030h \001(\0132\021.LinkKeepaliveReqH"
      "\000\022+\n\rkeepaliveResp\030i \001(\0132\022.LinkKeepalive"
      "RespH\000\022)\n\014regNotifyReq\030j \001(\0132\021.LinkRegNo"
      "tifyReqH\000\022+\n\rregNotifyResp\030k \001(\0132\022.LinkR"
      "egNotifyRespH\000\022&\n\ncamListReq\030\311\001 \001(\0132\017.Li"
      "nkListCamReqH\000\022(\n\013camListResp\030\312\001 \001(\0132\020.L"
      "inkListCamRespH\000\022\036\n\006camReq\030\313\001 \001(\0132\013.Link"
      "CamReqH\000\022 \n\007camResp\030\314\001 \001(\0132\014.LinkCamResp"
      "H\000\022$\n\taddCamReq\030\315\001 \001(\0132\016.LinkAddCamReqH\000"
      "\022&\n\naddCamResp\030\316\001 \001(\0132\017.LinkAddCamRespH\000"
      "\022$\n\tdelCamReq\030\317\001 \001(\0132\016.LinkDelCamReqH\000\022&"
      "\n\ndelCamResp\030\320\001 \001(\0132\017.LinkDelCamRespH\000\022."
      "\n\016setCamSchedReq\030\321\001 \001(\0132\023.LinkSetCamSche"
      "dReqH\000\0220\n\017setCamSchedResp\030\322\001 \001(\0132\024.LinkS"
      "etCamSchedRespH\000\0222\n\020getStreamListReq\030\323\001 "
      "\001(\0132\025.LinkGetStreamListReqH\000\0224\n\021getStrea"
      "mListResp\030\324\001 \001(\0132\026.LinkGetStreamListResp"
      "H\000\022+\n\013diskListReq\030\255\002 \001(\0132\023.LinkVidDiskLi"
      "stReqH\000\022-\n\014diskListResp\030\256\002 \001(\0132\024.LinkVid"
      "DiskListRespH\000\0221\n\016sysDiskListReq\030\257\002 \001(\0132"
      "\026.LinkSysVidDiskListReqH\000\0223\n\017sysDiskList"
      "Resp\030\260\002 \001(\0132\027.LinkSysVidDiskListRespH\000\022&"
      "\n\naddDiskReq\030\261\002 \001(\0132\017.LinkAddDiskReqH\000\022("
      "\n\013addDiskResp\030\262\002 \001(\0132\020.LinkAddDiskRespH\000"
      "\022&\n\ndelDiskReq\030\263\002 \001(\0132\017.LinkDelDiskReqH\000"
      "\022(\n\013delDiskResp\030\264\002 \001(\0132\020.LinkDelDiskResp"
      "H\000\0220\n\014diskLimitReq\030\265\002 \001(\0132\027.LinkUpdateDi"
      "skLimitReqH\000\0222\n\rdiskLimitResp\030\266\002 \001(\0132\030.L"
      "inkUpdateDiskLimitRespH\000\022!\n\006licReq\030\221\003 \001("
      "\0132\016.LinkGetLicReqH\000\022#\n\007licResp\030\222\003 \001(\0132\017."
      "LinkGetLicRespH\000\022!\n\006verReq\030\223\003 \001(\0132\016.Link"
      "GetVerReqH\000\022#\n\007verResp\030\224\003 \001(\0132\017.LinkGetV"
      "erRespH\000\022&\n\nconfLicReq\030\225\003 \001(\0132\017.LinkConf"
      "LicReqH\000\022(\n\013confLicResp\030\226\003 \001(\0132\020.LinkCon"
      "fLicRespH\000\022&\n\naddUserReq\030\365\003 \001(\0132\017.LinkAd"
      "dUserReqH\000\022(\n\013addUserResp\030\366\003 \001(\0132\020.LinkA"
      "ddUserRespH\000\022\'\n\thasRecReq\030\331\004 \001(\0132\021.LinkH"
      "asRecordReqH\000\022)\n\nhasRecResp\030\332\004 \001(\0132\022.Lin"
      "kHasRecordRespH\000\022-\n\014searchRecReq\030\333\004 \001(\0132"
      "\024.LinkSearchRecordReqH\000\022/\n\rsearchRecResp"
      "\030\334\004 \001(\0132\025.LinkSearchRecordRespH\000\022*\n\014star"
      "tLiveCmd\030\275\005 \001(\0132\021.LinkStartLiveCmdH\000\022(\n\013"
      "stopLiveCmd\030\276\005 \001(\0132\020.LinkStopLiveCmdH\000\022("
      "\n\013playBackCmd\030\277\005 \001(\0132\020.LinkPlayBackCmdH\000"
      "\022*\n\014playPauseCmd\030\300\005 \001(\0132\021.LinkPlayPauseC"
      "mdH\000\022,\n\rplayResumeCmd\030\301\005 \001(\0132\022.LinkPlayR"
      "esumeCmdH\000\022(\n\013playSeekCmd\030\302\005 \001(\0132\020.LinkP"
      "laySeekCmdH\000\022(\n\013playStopCmd\030\303\005 \001(\0132\020.Lin"
      "kPlayStopCmdH\000\022\036\n\006ptzCmd\030\241\006 \001(\0132\013.LinkPt"
      "zCmdH\000\0224\n\021camSearchStartReq\030\205\007 \001(\0132\026.Lin"
      "kCamSearchStartReqH\000\0226\n\022camSearchStartRe"
      "sp\030\206\007 \001(\0132\027.LinkCamSearchStartRespH\000\0222\n\020"
      "camSearchStopReq\030\207\007 \001(\0132\025.LinkCamSearchS"
      "topReqH\000\0224\n\021camSearchStopResp\030\210\007 \001(\0132\026.L"
      "inkCamSearchStopRespH\000\022(\n\013regEventReq\030\211\007"
      " \001(\0132\020.LinkRegEventReqH\000\022*\n\014regEventResp"
      "\030\212\007 \001(\0132\021.LinkRegEventRespH\000\022,\n\runRegEve"
      "ntReq\030\213\007 \001(\0132\022.LinkUnRegEventReqH\000\022.\n\016un"
      "RegEventResp\030\214\007 \001(\0132\023.LinkUnRegEventResp"
      "H\000\022.\n\016eventSearchReq\030\215\007 \001(\0132\023.LinkEventS"
      "earchReqH\000\0220\n\017eventSearchResp\030\216\007 \001(\0132\024.L"
      "inkEventSearchRespH\000\022.\n\016handleEventReq\030\217"
      "\007 \001(\0132\023.LinkHandleEventReqH\000\0220\n\017handleEv"
      "entResp\030\220\007 \001(\0132\024.LinkHandleEventRespH\000\022*"
      "\n\014camAddNotify\030\221N \001(\0132\021.LinkCamAddNotify"
      "H\000\022(\n\013camIdNotify\030\222N \001(\0132\020.LinkCamIdNoti"
      "fyH\000\0224\n\021camSearchedNotify\030\223N \001(\0132\026.LinkC"
      "amSearchedNotifyH\000\022(\n\013evnetNotify\030\224N \001(\013"
      "2\020.LinkEventNotifyH\000B\005\n\003cmd*\263\020\n\013LinkCmdT"
      "ype\022\021\n\rLINK_CMD_ZERO\020\000\022\026\n\022LINK_CMD_LOGIN"
      "_REQ\020e\022\027\n\023LINK_CMD_LOGIN_RESP\020f\022\032\n\026LINK_"
      "CMD_KEEPALIVE_REQ\020g\022\033\n\027LINK_CMD_KEEPALIV"
      "E_RESP\020h\022\033\n\027LINK_CMD_REG_NOTIFY_REQ\020i\022\034\n"
      "\030LINK_CMD_REG_NOTIFY_RESP\020j\022\032\n\025LINK_CMD_"
      "CAM_LIST_REQ\020\311\001\022\033\n\026LINK_CMD_CAM_LIST_RES"
      "P\020\312\001\022\025\n\020LINK_CMD_CAM_REQ\020\313\001\022\026\n\021LINK_CMD_"
      "CAM_RESP\020\314\001\022\031\n\024LINK_CMD_ADD_CAM_REQ\020\315\001\022\032"
      "\n\025LINK_CMD_ADD_CAM_RESP\020\316\001\022\031\n\024LINK_CMD_D"
      "EL_CAM_REQ\020\317\001\022\032\n\025LINK_CMD_DEL_CAM_RESP\020\320"
      "\001\022\037\n\032LINK_CMD_SET_CAM_SCHED_REQ\020\321\001\022 \n\033LI"
      "NK_CMD_SET_CAM_SCHED_RESP\020\322\001\022!\n\034LINK_CMD"
      "_GET_STREAM_LIST_REQ\020\323\001\022\"\n\035LINK_CMD_GET_"
      "STREAM_LIST_RESP\020\324\001\022\033\n\026LINK_CMD_DISK_LIS"
      "T_REQ\020\255\002\022\034\n\027LINK_CMD_DISK_LIST_RESP\020\256\002\022\037"
      "\n\032LINK_CMD_SYS_DISK_LIST_REQ\020\257\002\022 \n\033LINK_"
      "CMD_SYS_DISK_LIST_RESP\020\260\002\022\032\n\025LINK_CMD_AD"
      "D_DISK_REQ\020\261\002\022\033\n\026LINK_CMD_ADD_DISK_RESP\020"
      "\262\002\022\032\n\025LINK_CMD_DEL_DISK_REQ\020\263\002\022\033\n\026LINK_C"
      "MD_DEL_DISK_RESP\020\264\002\022#\n\036LINK_CMD_UPDATE_D"
      "ISK_LIMIT_REQ\020\265\002\022$\n\037LINK_CMD_UPDATE_DISK"
      "_LIMIT_RESP\020\266\002\022\031\n\024LINK_CMD_GET_LIC_REQ\020\221"
      "\003\022\032\n\025LINK_CMD_GET_LIC_RESP\020\222\003\022\031\n\024LINK_CM"
      "D_GET_VER_REQ\020\223\003\022\032\n\025LINK_CMD_GET_VER_RES"
      "P\020\224\003\022\032\n\025LINK_CMD_CONF_LIC_REQ\020\225\003\022\033\n\026LINK"
      "_CMD_CONF_LIC_RESP\020\226\003\022\032\n\025LINK_CMD_ADD_US"
      "ER_REQ\020\365\003\022\033\n\026LINK_CMD_ADD_USER_RESP\020\366\003\022\034"
      "\n\027LINK_CMD_HAS_RECORD_REQ\020\331\004\022\035\n\030LINK_CMD"
      "_HAS_RECORD_RESP\020\332\004\022\037\n\032LINK_CMD_SEARCH_R"
      "ECORD_REQ\020\333\004\022 \n\033LINK_CMD_SEARCH_RECORD_R"
      "ESP\020\334\004\022\034\n\027LINK_CMD_START_LIVE_CMD\020\275\005\022\033\n\026"
      "LINK_CMD_STOP_LIVE_CMD\020\276\005\022\033\n\026LINK_CMD_PL"
      "AY_BACK_CMD\020\277\005\022\034\n\027LINK_CMD_PLAY_PAUSE_CM"
      "D\020\300\005\022\035\n\030LINK_CMD_PLAY_RESUME_CMD\020\301\005\022\033\n\026L"
      "INK_CMD_PLAY_SEEK_CMD\020\302\005\022\033\n\026LINK_CMD_PLA"
      "Y_STOP_CMD\020\303\005\022\025\n\020LINK_CMD_PTZ_CMD\020\241\006\022\"\n\035"
      "LINK_CMD_CAM_SEARCH_START_REQ\020\205\007\022#\n\036LINK"
      "_CMD_CAM_SEARCH_START_RESP\020\206\007\022!\n\034LINK_CM"
      "D_CAM_SEARCH_STOP_REQ\020\207\007\022\"\n\035LINK_CMD_CAM"
      "_SEARCH_STOP_RESP\020\210\007\022\033\n\026LINK_CMD_REG_EVE"
      "NT_REQ\020\211\007\022\034\n\027LINK_CMD_REG_EVENT_RESP\020\212\007\022"
      "\035\n\030LINK_CMD_UNREG_EVENT_REQ\020\213\007\022\036\n\031LINK_C"
      "MD_UNREG_EVENT_RESP\020\214\007\022\036\n\031LINK_CMD_EVENT"
      "_SEARCH_REQ\020\215\007\022\037\n\032LINK_CMD_EVENT_SEARCH_"
      "RESP\020\216\007\022\036\n\031LINK_CMD_HANDLE_EVENT_REQ\020\217\007\022"
      "\037\n\032LINK_CMD_HANDLE_EVENT_RESP\020\220\007\022\034\n\027LINK"
      "_CMD_CAM_ADD_NOTIFY\020\221N\022\034\n\027LINK_CMD_CAM_D"
      "EL_NOTIFY\020\222N\022\037\n\032LINK_CMD_CAM_ONLINE_NOTI"
      "FY\020\223N\022 \n\033LINK_CMD_CAM_OFFLINE_NOTIFY\020\224N\022"
      "\037\n\032LINK_CMD_CAM_REC_ON_NOTIFY\020\225N\022 \n\033LINK"
      "_CMD_CAM_REC_OFF_NOTIFY\020\226N\022!\n\034LINK_CMD_C"
      "AM_SEARCHED_NOTIFY\020\227N\022\032\n\025LINK_CMD_EVENT_"
      "NOTIFY\020\230Nb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 5017);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "linkproto.proto", &protobuf_RegisterTypes);
  ::protobuf_linksystem_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_linkproto_2eproto

const ::google::protobuf::EnumDescriptor* LinkCmdType_descriptor() {
  protobuf_linkproto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linkproto_2eproto::file_level_enum_descriptors[0];
}
bool LinkCmdType_IsValid(int value) {
  switch (value) {
    case 0:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 201:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 212:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 501:
    case 502:
    case 601:
    case 602:
    case 603:
    case 604:
    case 701:
    case 702:
    case 703:
    case 704:
    case 705:
    case 706:
    case 707:
    case 801:
    case 901:
    case 902:
    case 903:
    case 904:
    case 905:
    case 906:
    case 907:
    case 908:
    case 909:
    case 910:
    case 911:
    case 912:
    case 10001:
    case 10002:
    case 10003:
    case 10004:
    case 10005:
    case 10006:
    case 10007:
    case 10008:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCmd::kTypeFieldNumber;
const int LinkCmd::kLoginReqFieldNumber;
const int LinkCmd::kLoginRespFieldNumber;
const int LinkCmd::kKeepaliveReqFieldNumber;
const int LinkCmd::kKeepaliveRespFieldNumber;
const int LinkCmd::kRegNotifyReqFieldNumber;
const int LinkCmd::kRegNotifyRespFieldNumber;
const int LinkCmd::kCamListReqFieldNumber;
const int LinkCmd::kCamListRespFieldNumber;
const int LinkCmd::kCamReqFieldNumber;
const int LinkCmd::kCamRespFieldNumber;
const int LinkCmd::kAddCamReqFieldNumber;
const int LinkCmd::kAddCamRespFieldNumber;
const int LinkCmd::kDelCamReqFieldNumber;
const int LinkCmd::kDelCamRespFieldNumber;
const int LinkCmd::kSetCamSchedReqFieldNumber;
const int LinkCmd::kSetCamSchedRespFieldNumber;
const int LinkCmd::kGetStreamListReqFieldNumber;
const int LinkCmd::kGetStreamListRespFieldNumber;
const int LinkCmd::kDiskListReqFieldNumber;
const int LinkCmd::kDiskListRespFieldNumber;
const int LinkCmd::kSysDiskListReqFieldNumber;
const int LinkCmd::kSysDiskListRespFieldNumber;
const int LinkCmd::kAddDiskReqFieldNumber;
const int LinkCmd::kAddDiskRespFieldNumber;
const int LinkCmd::kDelDiskReqFieldNumber;
const int LinkCmd::kDelDiskRespFieldNumber;
const int LinkCmd::kDiskLimitReqFieldNumber;
const int LinkCmd::kDiskLimitRespFieldNumber;
const int LinkCmd::kLicReqFieldNumber;
const int LinkCmd::kLicRespFieldNumber;
const int LinkCmd::kVerReqFieldNumber;
const int LinkCmd::kVerRespFieldNumber;
const int LinkCmd::kConfLicReqFieldNumber;
const int LinkCmd::kConfLicRespFieldNumber;
const int LinkCmd::kAddUserReqFieldNumber;
const int LinkCmd::kAddUserRespFieldNumber;
const int LinkCmd::kHasRecReqFieldNumber;
const int LinkCmd::kHasRecRespFieldNumber;
const int LinkCmd::kSearchRecReqFieldNumber;
const int LinkCmd::kSearchRecRespFieldNumber;
const int LinkCmd::kStartLiveCmdFieldNumber;
const int LinkCmd::kStopLiveCmdFieldNumber;
const int LinkCmd::kPlayBackCmdFieldNumber;
const int LinkCmd::kPlayPauseCmdFieldNumber;
const int LinkCmd::kPlayResumeCmdFieldNumber;
const int LinkCmd::kPlaySeekCmdFieldNumber;
const int LinkCmd::kPlayStopCmdFieldNumber;
const int LinkCmd::kPtzCmdFieldNumber;
const int LinkCmd::kCamSearchStartReqFieldNumber;
const int LinkCmd::kCamSearchStartRespFieldNumber;
const int LinkCmd::kCamSearchStopReqFieldNumber;
const int LinkCmd::kCamSearchStopRespFieldNumber;
const int LinkCmd::kRegEventReqFieldNumber;
const int LinkCmd::kRegEventRespFieldNumber;
const int LinkCmd::kUnRegEventReqFieldNumber;
const int LinkCmd::kUnRegEventRespFieldNumber;
const int LinkCmd::kEventSearchReqFieldNumber;
const int LinkCmd::kEventSearchRespFieldNumber;
const int LinkCmd::kHandleEventReqFieldNumber;
const int LinkCmd::kHandleEventRespFieldNumber;
const int LinkCmd::kCamAddNotifyFieldNumber;
const int LinkCmd::kCamIdNotifyFieldNumber;
const int LinkCmd::kCamSearchedNotifyFieldNumber;
const int LinkCmd::kEvnetNotifyFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCmd::LinkCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linkproto_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:Link.LinkCmd)
}
LinkCmd::LinkCmd(const LinkCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  type_ = from.type_;
  clear_has_cmd();
  switch (from.cmd_case()) {
    case kLoginReq: {
      mutable_loginreq()->::LinkLoginReq::MergeFrom(from.loginreq());
      break;
    }
    case kLoginResp: {
      mutable_loginresp()->::LinkLoginResp::MergeFrom(from.loginresp());
      break;
    }
    case kKeepaliveReq: {
      mutable_keepalivereq()->::LinkKeepaliveReq::MergeFrom(from.keepalivereq());
      break;
    }
    case kKeepaliveResp: {
      mutable_keepaliveresp()->::LinkKeepaliveResp::MergeFrom(from.keepaliveresp());
      break;
    }
    case kRegNotifyReq: {
      mutable_regnotifyreq()->::LinkRegNotifyReq::MergeFrom(from.regnotifyreq());
      break;
    }
    case kRegNotifyResp: {
      mutable_regnotifyresp()->::LinkRegNotifyResp::MergeFrom(from.regnotifyresp());
      break;
    }
    case kCamListReq: {
      mutable_camlistreq()->::LinkListCamReq::MergeFrom(from.camlistreq());
      break;
    }
    case kCamListResp: {
      mutable_camlistresp()->::LinkListCamResp::MergeFrom(from.camlistresp());
      break;
    }
    case kCamReq: {
      mutable_camreq()->::LinkCamReq::MergeFrom(from.camreq());
      break;
    }
    case kCamResp: {
      mutable_camresp()->::LinkCamResp::MergeFrom(from.camresp());
      break;
    }
    case kAddCamReq: {
      mutable_addcamreq()->::LinkAddCamReq::MergeFrom(from.addcamreq());
      break;
    }
    case kAddCamResp: {
      mutable_addcamresp()->::LinkAddCamResp::MergeFrom(from.addcamresp());
      break;
    }
    case kDelCamReq: {
      mutable_delcamreq()->::LinkDelCamReq::MergeFrom(from.delcamreq());
      break;
    }
    case kDelCamResp: {
      mutable_delcamresp()->::LinkDelCamResp::MergeFrom(from.delcamresp());
      break;
    }
    case kSetCamSchedReq: {
      mutable_setcamschedreq()->::LinkSetCamSchedReq::MergeFrom(from.setcamschedreq());
      break;
    }
    case kSetCamSchedResp: {
      mutable_setcamschedresp()->::LinkSetCamSchedResp::MergeFrom(from.setcamschedresp());
      break;
    }
    case kGetStreamListReq: {
      mutable_getstreamlistreq()->::LinkGetStreamListReq::MergeFrom(from.getstreamlistreq());
      break;
    }
    case kGetStreamListResp: {
      mutable_getstreamlistresp()->::LinkGetStreamListResp::MergeFrom(from.getstreamlistresp());
      break;
    }
    case kDiskListReq: {
      mutable_disklistreq()->::LinkVidDiskListReq::MergeFrom(from.disklistreq());
      break;
    }
    case kDiskListResp: {
      mutable_disklistresp()->::LinkVidDiskListResp::MergeFrom(from.disklistresp());
      break;
    }
    case kSysDiskListReq: {
      mutable_sysdisklistreq()->::LinkSysVidDiskListReq::MergeFrom(from.sysdisklistreq());
      break;
    }
    case kSysDiskListResp: {
      mutable_sysdisklistresp()->::LinkSysVidDiskListResp::MergeFrom(from.sysdisklistresp());
      break;
    }
    case kAddDiskReq: {
      mutable_adddiskreq()->::LinkAddDiskReq::MergeFrom(from.adddiskreq());
      break;
    }
    case kAddDiskResp: {
      mutable_adddiskresp()->::LinkAddDiskResp::MergeFrom(from.adddiskresp());
      break;
    }
    case kDelDiskReq: {
      mutable_deldiskreq()->::LinkDelDiskReq::MergeFrom(from.deldiskreq());
      break;
    }
    case kDelDiskResp: {
      mutable_deldiskresp()->::LinkDelDiskResp::MergeFrom(from.deldiskresp());
      break;
    }
    case kDiskLimitReq: {
      mutable_disklimitreq()->::LinkUpdateDiskLimitReq::MergeFrom(from.disklimitreq());
      break;
    }
    case kDiskLimitResp: {
      mutable_disklimitresp()->::LinkUpdateDiskLimitResp::MergeFrom(from.disklimitresp());
      break;
    }
    case kLicReq: {
      mutable_licreq()->::LinkGetLicReq::MergeFrom(from.licreq());
      break;
    }
    case kLicResp: {
      mutable_licresp()->::LinkGetLicResp::MergeFrom(from.licresp());
      break;
    }
    case kVerReq: {
      mutable_verreq()->::LinkGetVerReq::MergeFrom(from.verreq());
      break;
    }
    case kVerResp: {
      mutable_verresp()->::LinkGetVerResp::MergeFrom(from.verresp());
      break;
    }
    case kConfLicReq: {
      mutable_conflicreq()->::LinkConfLicReq::MergeFrom(from.conflicreq());
      break;
    }
    case kConfLicResp: {
      mutable_conflicresp()->::LinkConfLicResp::MergeFrom(from.conflicresp());
      break;
    }
    case kAddUserReq: {
      mutable_adduserreq()->::LinkAddUserReq::MergeFrom(from.adduserreq());
      break;
    }
    case kAddUserResp: {
      mutable_adduserresp()->::LinkAddUserResp::MergeFrom(from.adduserresp());
      break;
    }
    case kHasRecReq: {
      mutable_hasrecreq()->::LinkHasRecordReq::MergeFrom(from.hasrecreq());
      break;
    }
    case kHasRecResp: {
      mutable_hasrecresp()->::LinkHasRecordResp::MergeFrom(from.hasrecresp());
      break;
    }
    case kSearchRecReq: {
      mutable_searchrecreq()->::LinkSearchRecordReq::MergeFrom(from.searchrecreq());
      break;
    }
    case kSearchRecResp: {
      mutable_searchrecresp()->::LinkSearchRecordResp::MergeFrom(from.searchrecresp());
      break;
    }
    case kStartLiveCmd: {
      mutable_startlivecmd()->::LinkStartLiveCmd::MergeFrom(from.startlivecmd());
      break;
    }
    case kStopLiveCmd: {
      mutable_stoplivecmd()->::LinkStopLiveCmd::MergeFrom(from.stoplivecmd());
      break;
    }
    case kPlayBackCmd: {
      mutable_playbackcmd()->::LinkPlayBackCmd::MergeFrom(from.playbackcmd());
      break;
    }
    case kPlayPauseCmd: {
      mutable_playpausecmd()->::LinkPlayPauseCmd::MergeFrom(from.playpausecmd());
      break;
    }
    case kPlayResumeCmd: {
      mutable_playresumecmd()->::LinkPlayResumeCmd::MergeFrom(from.playresumecmd());
      break;
    }
    case kPlaySeekCmd: {
      mutable_playseekcmd()->::LinkPlaySeekCmd::MergeFrom(from.playseekcmd());
      break;
    }
    case kPlayStopCmd: {
      mutable_playstopcmd()->::LinkPlayStopCmd::MergeFrom(from.playstopcmd());
      break;
    }
    case kPtzCmd: {
      mutable_ptzcmd()->::LinkPtzCmd::MergeFrom(from.ptzcmd());
      break;
    }
    case kCamSearchStartReq: {
      mutable_camsearchstartreq()->::LinkCamSearchStartReq::MergeFrom(from.camsearchstartreq());
      break;
    }
    case kCamSearchStartResp: {
      mutable_camsearchstartresp()->::LinkCamSearchStartResp::MergeFrom(from.camsearchstartresp());
      break;
    }
    case kCamSearchStopReq: {
      mutable_camsearchstopreq()->::LinkCamSearchStopReq::MergeFrom(from.camsearchstopreq());
      break;
    }
    case kCamSearchStopResp: {
      mutable_camsearchstopresp()->::LinkCamSearchStopResp::MergeFrom(from.camsearchstopresp());
      break;
    }
    case kRegEventReq: {
      mutable_regeventreq()->::LinkRegEventReq::MergeFrom(from.regeventreq());
      break;
    }
    case kRegEventResp: {
      mutable_regeventresp()->::LinkRegEventResp::MergeFrom(from.regeventresp());
      break;
    }
    case kUnRegEventReq: {
      mutable_unregeventreq()->::LinkUnRegEventReq::MergeFrom(from.unregeventreq());
      break;
    }
    case kUnRegEventResp: {
      mutable_unregeventresp()->::LinkUnRegEventResp::MergeFrom(from.unregeventresp());
      break;
    }
    case kEventSearchReq: {
      mutable_eventsearchreq()->::LinkEventSearchReq::MergeFrom(from.eventsearchreq());
      break;
    }
    case kEventSearchResp: {
      mutable_eventsearchresp()->::LinkEventSearchResp::MergeFrom(from.eventsearchresp());
      break;
    }
    case kHandleEventReq: {
      mutable_handleeventreq()->::LinkHandleEventReq::MergeFrom(from.handleeventreq());
      break;
    }
    case kHandleEventResp: {
      mutable_handleeventresp()->::LinkHandleEventResp::MergeFrom(from.handleeventresp());
      break;
    }
    case kCamAddNotify: {
      mutable_camaddnotify()->::LinkCamAddNotify::MergeFrom(from.camaddnotify());
      break;
    }
    case kCamIdNotify: {
      mutable_camidnotify()->::LinkCamIdNotify::MergeFrom(from.camidnotify());
      break;
    }
    case kCamSearchedNotify: {
      mutable_camsearchednotify()->::LinkCamSearchedNotify::MergeFrom(from.camsearchednotify());
      break;
    }
    case kEvnetNotify: {
      mutable_evnetnotify()->::LinkEventNotify::MergeFrom(from.evnetnotify());
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:Link.LinkCmd)
}

void LinkCmd::SharedCtor() {
  type_ = 0;
  clear_has_cmd();
  _cached_size_ = 0;
}

LinkCmd::~LinkCmd() {
  // @@protoc_insertion_point(destructor:Link.LinkCmd)
  SharedDtor();
}

void LinkCmd::SharedDtor() {
  if (has_cmd()) {
    clear_cmd();
  }
}

void LinkCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCmd::descriptor() {
  protobuf_linkproto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linkproto_2eproto::file_level_metadata[0].descriptor;
}

const LinkCmd& LinkCmd::default_instance() {
  protobuf_linkproto_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCmd* LinkCmd::New(::google::protobuf::Arena* arena) const {
  LinkCmd* n = new LinkCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCmd::clear_cmd() {
// @@protoc_insertion_point(one_of_clear_start:Link.LinkCmd)
  switch (cmd_case()) {
    case kLoginReq: {
      delete cmd_.loginreq_;
      break;
    }
    case kLoginResp: {
      delete cmd_.loginresp_;
      break;
    }
    case kKeepaliveReq: {
      delete cmd_.keepalivereq_;
      break;
    }
    case kKeepaliveResp: {
      delete cmd_.keepaliveresp_;
      break;
    }
    case kRegNotifyReq: {
      delete cmd_.regnotifyreq_;
      break;
    }
    case kRegNotifyResp: {
      delete cmd_.regnotifyresp_;
      break;
    }
    case kCamListReq: {
      delete cmd_.camlistreq_;
      break;
    }
    case kCamListResp: {
      delete cmd_.camlistresp_;
      break;
    }
    case kCamReq: {
      delete cmd_.camreq_;
      break;
    }
    case kCamResp: {
      delete cmd_.camresp_;
      break;
    }
    case kAddCamReq: {
      delete cmd_.addcamreq_;
      break;
    }
    case kAddCamResp: {
      delete cmd_.addcamresp_;
      break;
    }
    case kDelCamReq: {
      delete cmd_.delcamreq_;
      break;
    }
    case kDelCamResp: {
      delete cmd_.delcamresp_;
      break;
    }
    case kSetCamSchedReq: {
      delete cmd_.setcamschedreq_;
      break;
    }
    case kSetCamSchedResp: {
      delete cmd_.setcamschedresp_;
      break;
    }
    case kGetStreamListReq: {
      delete cmd_.getstreamlistreq_;
      break;
    }
    case kGetStreamListResp: {
      delete cmd_.getstreamlistresp_;
      break;
    }
    case kDiskListReq: {
      delete cmd_.disklistreq_;
      break;
    }
    case kDiskListResp: {
      delete cmd_.disklistresp_;
      break;
    }
    case kSysDiskListReq: {
      delete cmd_.sysdisklistreq_;
      break;
    }
    case kSysDiskListResp: {
      delete cmd_.sysdisklistresp_;
      break;
    }
    case kAddDiskReq: {
      delete cmd_.adddiskreq_;
      break;
    }
    case kAddDiskResp: {
      delete cmd_.adddiskresp_;
      break;
    }
    case kDelDiskReq: {
      delete cmd_.deldiskreq_;
      break;
    }
    case kDelDiskResp: {
      delete cmd_.deldiskresp_;
      break;
    }
    case kDiskLimitReq: {
      delete cmd_.disklimitreq_;
      break;
    }
    case kDiskLimitResp: {
      delete cmd_.disklimitresp_;
      break;
    }
    case kLicReq: {
      delete cmd_.licreq_;
      break;
    }
    case kLicResp: {
      delete cmd_.licresp_;
      break;
    }
    case kVerReq: {
      delete cmd_.verreq_;
      break;
    }
    case kVerResp: {
      delete cmd_.verresp_;
      break;
    }
    case kConfLicReq: {
      delete cmd_.conflicreq_;
      break;
    }
    case kConfLicResp: {
      delete cmd_.conflicresp_;
      break;
    }
    case kAddUserReq: {
      delete cmd_.adduserreq_;
      break;
    }
    case kAddUserResp: {
      delete cmd_.adduserresp_;
      break;
    }
    case kHasRecReq: {
      delete cmd_.hasrecreq_;
      break;
    }
    case kHasRecResp: {
      delete cmd_.hasrecresp_;
      break;
    }
    case kSearchRecReq: {
      delete cmd_.searchrecreq_;
      break;
    }
    case kSearchRecResp: {
      delete cmd_.searchrecresp_;
      break;
    }
    case kStartLiveCmd: {
      delete cmd_.startlivecmd_;
      break;
    }
    case kStopLiveCmd: {
      delete cmd_.stoplivecmd_;
      break;
    }
    case kPlayBackCmd: {
      delete cmd_.playbackcmd_;
      break;
    }
    case kPlayPauseCmd: {
      delete cmd_.playpausecmd_;
      break;
    }
    case kPlayResumeCmd: {
      delete cmd_.playresumecmd_;
      break;
    }
    case kPlaySeekCmd: {
      delete cmd_.playseekcmd_;
      break;
    }
    case kPlayStopCmd: {
      delete cmd_.playstopcmd_;
      break;
    }
    case kPtzCmd: {
      delete cmd_.ptzcmd_;
      break;
    }
    case kCamSearchStartReq: {
      delete cmd_.camsearchstartreq_;
      break;
    }
    case kCamSearchStartResp: {
      delete cmd_.camsearchstartresp_;
      break;
    }
    case kCamSearchStopReq: {
      delete cmd_.camsearchstopreq_;
      break;
    }
    case kCamSearchStopResp: {
      delete cmd_.camsearchstopresp_;
      break;
    }
    case kRegEventReq: {
      delete cmd_.regeventreq_;
      break;
    }
    case kRegEventResp: {
      delete cmd_.regeventresp_;
      break;
    }
    case kUnRegEventReq: {
      delete cmd_.unregeventreq_;
      break;
    }
    case kUnRegEventResp: {
      delete cmd_.unregeventresp_;
      break;
    }
    case kEventSearchReq: {
      delete cmd_.eventsearchreq_;
      break;
    }
    case kEventSearchResp: {
      delete cmd_.eventsearchresp_;
      break;
    }
    case kHandleEventReq: {
      delete cmd_.handleeventreq_;
      break;
    }
    case kHandleEventResp: {
      delete cmd_.handleeventresp_;
      break;
    }
    case kCamAddNotify: {
      delete cmd_.camaddnotify_;
      break;
    }
    case kCamIdNotify: {
      delete cmd_.camidnotify_;
      break;
    }
    case kCamSearchedNotify: {
      delete cmd_.camsearchednotify_;
      break;
    }
    case kEvnetNotify: {
      delete cmd_.evnetnotify_;
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  _oneof_case_[0] = CMD_NOT_SET;
}


void LinkCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:Link.LinkCmd)
  type_ = 0;
  clear_cmd();
}

bool LinkCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Link.LinkCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(80034u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .Link.LinkCmdType type = 1;
      case 1: {
        if (tag == 8u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::Link::LinkCmdType >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkLoginReq loginReq = 102;
      case 102: {
        if (tag == 818u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loginreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkLoginResp loginResp = 103;
      case 103: {
        if (tag == 826u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_loginresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkKeepaliveReq keepaliveReq = 104;
      case 104: {
        if (tag == 834u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_keepalivereq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkKeepaliveResp keepaliveResp = 105;
      case 105: {
        if (tag == 842u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_keepaliveresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkRegNotifyReq regNotifyReq = 106;
      case 106: {
        if (tag == 850u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_regnotifyreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkRegNotifyResp regNotifyResp = 107;
      case 107: {
        if (tag == 858u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_regnotifyresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkListCamReq camListReq = 201;
      case 201: {
        if (tag == 1610u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camlistreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkListCamResp camListResp = 202;
      case 202: {
        if (tag == 1618u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camlistresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamReq camReq = 203;
      case 203: {
        if (tag == 1626u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamResp camResp = 204;
      case 204: {
        if (tag == 1634u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkAddCamReq addCamReq = 205;
      case 205: {
        if (tag == 1642u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_addcamreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkAddCamResp addCamResp = 206;
      case 206: {
        if (tag == 1650u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_addcamresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkDelCamReq delCamReq = 207;
      case 207: {
        if (tag == 1658u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_delcamreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkDelCamResp delCamResp = 208;
      case 208: {
        if (tag == 1666u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_delcamresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkSetCamSchedReq setCamSchedReq = 209;
      case 209: {
        if (tag == 1674u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_setcamschedreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkSetCamSchedResp setCamSchedResp = 210;
      case 210: {
        if (tag == 1682u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_setcamschedresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkGetStreamListReq getStreamListReq = 211;
      case 211: {
        if (tag == 1690u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_getstreamlistreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkGetStreamListResp getStreamListResp = 212;
      case 212: {
        if (tag == 1698u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_getstreamlistresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkVidDiskListReq diskListReq = 301;
      case 301: {
        if (tag == 2410u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_disklistreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkVidDiskListResp diskListResp = 302;
      case 302: {
        if (tag == 2418u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_disklistresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkSysVidDiskListReq sysDiskListReq = 303;
      case 303: {
        if (tag == 2426u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sysdisklistreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkSysVidDiskListResp sysDiskListResp = 304;
      case 304: {
        if (tag == 2434u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sysdisklistresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkAddDiskReq addDiskReq = 305;
      case 305: {
        if (tag == 2442u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_adddiskreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkAddDiskResp addDiskResp = 306;
      case 306: {
        if (tag == 2450u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_adddiskresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkDelDiskReq delDiskReq = 307;
      case 307: {
        if (tag == 2458u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_deldiskreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkDelDiskResp delDiskResp = 308;
      case 308: {
        if (tag == 2466u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_deldiskresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkUpdateDiskLimitReq diskLimitReq = 309;
      case 309: {
        if (tag == 2474u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_disklimitreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkUpdateDiskLimitResp diskLimitResp = 310;
      case 310: {
        if (tag == 2482u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_disklimitresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkGetLicReq licReq = 401;
      case 401: {
        if (tag == 3210u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_licreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkGetLicResp licResp = 402;
      case 402: {
        if (tag == 3218u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_licresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkGetVerReq verReq = 403;
      case 403: {
        if (tag == 3226u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_verreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkGetVerResp verResp = 404;
      case 404: {
        if (tag == 3234u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_verresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkConfLicReq confLicReq = 405;
      case 405: {
        if (tag == 3242u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_conflicreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkConfLicResp confLicResp = 406;
      case 406: {
        if (tag == 3250u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_conflicresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkAddUserReq addUserReq = 501;
      case 501: {
        if (tag == 4010u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_adduserreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkAddUserResp addUserResp = 502;
      case 502: {
        if (tag == 4018u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_adduserresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkHasRecordReq hasRecReq = 601;
      case 601: {
        if (tag == 4810u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hasrecreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkHasRecordResp hasRecResp = 602;
      case 602: {
        if (tag == 4818u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_hasrecresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkSearchRecordReq searchRecReq = 603;
      case 603: {
        if (tag == 4826u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_searchrecreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkSearchRecordResp searchRecResp = 604;
      case 604: {
        if (tag == 4834u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_searchrecresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkStartLiveCmd startLiveCmd = 701;
      case 701: {
        if (tag == 5610u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_startlivecmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkStopLiveCmd stopLiveCmd = 702;
      case 702: {
        if (tag == 5618u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_stoplivecmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkPlayBackCmd playBackCmd = 703;
      case 703: {
        if (tag == 5626u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_playbackcmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkPlayPauseCmd playPauseCmd = 704;
      case 704: {
        if (tag == 5634u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_playpausecmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkPlayResumeCmd playResumeCmd = 705;
      case 705: {
        if (tag == 5642u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_playresumecmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkPlaySeekCmd playSeekCmd = 706;
      case 706: {
        if (tag == 5650u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_playseekcmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkPlayStopCmd playStopCmd = 707;
      case 707: {
        if (tag == 5658u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_playstopcmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkPtzCmd ptzCmd = 801;
      case 801: {
        if (tag == 6410u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ptzcmd()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamSearchStartReq camSearchStartReq = 901;
      case 901: {
        if (tag == 7210u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camsearchstartreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamSearchStartResp camSearchStartResp = 902;
      case 902: {
        if (tag == 7218u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camsearchstartresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamSearchStopReq camSearchStopReq = 903;
      case 903: {
        if (tag == 7226u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camsearchstopreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamSearchStopResp camSearchStopResp = 904;
      case 904: {
        if (tag == 7234u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camsearchstopresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkRegEventReq regEventReq = 905;
      case 905: {
        if (tag == 7242u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_regeventreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkRegEventResp regEventResp = 906;
      case 906: {
        if (tag == 7250u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_regeventresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkUnRegEventReq unRegEventReq = 907;
      case 907: {
        if (tag == 7258u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_unregeventreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkUnRegEventResp unRegEventResp = 908;
      case 908: {
        if (tag == 7266u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_unregeventresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkEventSearchReq eventSearchReq = 909;
      case 909: {
        if (tag == 7274u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_eventsearchreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkEventSearchResp eventSearchResp = 910;
      case 910: {
        if (tag == 7282u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_eventsearchresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkHandleEventReq handleEventReq = 911;
      case 911: {
        if (tag == 7290u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_handleeventreq()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkHandleEventResp handleEventResp = 912;
      case 912: {
        if (tag == 7298u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_handleeventresp()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamAddNotify camAddNotify = 10001;
      case 10001: {
        if (tag == 80010u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camaddnotify()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamIdNotify camIdNotify = 10002;
      case 10002: {
        if (tag == 80018u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camidnotify()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkCamSearchedNotify camSearchedNotify = 10003;
      case 10003: {
        if (tag == 80026u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_camsearchednotify()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkEventNotify evnetNotify = 10004;
      case 10004: {
        if (tag == 80034u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_evnetnotify()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Link.LinkCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Link.LinkCmd)
  return false;
#undef DO_
}

void LinkCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Link.LinkCmd)
  // .Link.LinkCmdType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // .LinkLoginReq loginReq = 102;
  if (has_loginreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      102, *cmd_.loginreq_, output);
  }

  // .LinkLoginResp loginResp = 103;
  if (has_loginresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      103, *cmd_.loginresp_, output);
  }

  // .LinkKeepaliveReq keepaliveReq = 104;
  if (has_keepalivereq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      104, *cmd_.keepalivereq_, output);
  }

  // .LinkKeepaliveResp keepaliveResp = 105;
  if (has_keepaliveresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      105, *cmd_.keepaliveresp_, output);
  }

  // .LinkRegNotifyReq regNotifyReq = 106;
  if (has_regnotifyreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      106, *cmd_.regnotifyreq_, output);
  }

  // .LinkRegNotifyResp regNotifyResp = 107;
  if (has_regnotifyresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      107, *cmd_.regnotifyresp_, output);
  }

  // .LinkListCamReq camListReq = 201;
  if (has_camlistreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      201, *cmd_.camlistreq_, output);
  }

  // .LinkListCamResp camListResp = 202;
  if (has_camlistresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      202, *cmd_.camlistresp_, output);
  }

  // .LinkCamReq camReq = 203;
  if (has_camreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      203, *cmd_.camreq_, output);
  }

  // .LinkCamResp camResp = 204;
  if (has_camresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      204, *cmd_.camresp_, output);
  }

  // .LinkAddCamReq addCamReq = 205;
  if (has_addcamreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      205, *cmd_.addcamreq_, output);
  }

  // .LinkAddCamResp addCamResp = 206;
  if (has_addcamresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      206, *cmd_.addcamresp_, output);
  }

  // .LinkDelCamReq delCamReq = 207;
  if (has_delcamreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      207, *cmd_.delcamreq_, output);
  }

  // .LinkDelCamResp delCamResp = 208;
  if (has_delcamresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      208, *cmd_.delcamresp_, output);
  }

  // .LinkSetCamSchedReq setCamSchedReq = 209;
  if (has_setcamschedreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      209, *cmd_.setcamschedreq_, output);
  }

  // .LinkSetCamSchedResp setCamSchedResp = 210;
  if (has_setcamschedresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      210, *cmd_.setcamschedresp_, output);
  }

  // .LinkGetStreamListReq getStreamListReq = 211;
  if (has_getstreamlistreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      211, *cmd_.getstreamlistreq_, output);
  }

  // .LinkGetStreamListResp getStreamListResp = 212;
  if (has_getstreamlistresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      212, *cmd_.getstreamlistresp_, output);
  }

  // .LinkVidDiskListReq diskListReq = 301;
  if (has_disklistreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      301, *cmd_.disklistreq_, output);
  }

  // .LinkVidDiskListResp diskListResp = 302;
  if (has_disklistresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      302, *cmd_.disklistresp_, output);
  }

  // .LinkSysVidDiskListReq sysDiskListReq = 303;
  if (has_sysdisklistreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      303, *cmd_.sysdisklistreq_, output);
  }

  // .LinkSysVidDiskListResp sysDiskListResp = 304;
  if (has_sysdisklistresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      304, *cmd_.sysdisklistresp_, output);
  }

  // .LinkAddDiskReq addDiskReq = 305;
  if (has_adddiskreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      305, *cmd_.adddiskreq_, output);
  }

  // .LinkAddDiskResp addDiskResp = 306;
  if (has_adddiskresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      306, *cmd_.adddiskresp_, output);
  }

  // .LinkDelDiskReq delDiskReq = 307;
  if (has_deldiskreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      307, *cmd_.deldiskreq_, output);
  }

  // .LinkDelDiskResp delDiskResp = 308;
  if (has_deldiskresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      308, *cmd_.deldiskresp_, output);
  }

  // .LinkUpdateDiskLimitReq diskLimitReq = 309;
  if (has_disklimitreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      309, *cmd_.disklimitreq_, output);
  }

  // .LinkUpdateDiskLimitResp diskLimitResp = 310;
  if (has_disklimitresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      310, *cmd_.disklimitresp_, output);
  }

  // .LinkGetLicReq licReq = 401;
  if (has_licreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      401, *cmd_.licreq_, output);
  }

  // .LinkGetLicResp licResp = 402;
  if (has_licresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      402, *cmd_.licresp_, output);
  }

  // .LinkGetVerReq verReq = 403;
  if (has_verreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      403, *cmd_.verreq_, output);
  }

  // .LinkGetVerResp verResp = 404;
  if (has_verresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      404, *cmd_.verresp_, output);
  }

  // .LinkConfLicReq confLicReq = 405;
  if (has_conflicreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      405, *cmd_.conflicreq_, output);
  }

  // .LinkConfLicResp confLicResp = 406;
  if (has_conflicresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      406, *cmd_.conflicresp_, output);
  }

  // .LinkAddUserReq addUserReq = 501;
  if (has_adduserreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      501, *cmd_.adduserreq_, output);
  }

  // .LinkAddUserResp addUserResp = 502;
  if (has_adduserresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      502, *cmd_.adduserresp_, output);
  }

  // .LinkHasRecordReq hasRecReq = 601;
  if (has_hasrecreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      601, *cmd_.hasrecreq_, output);
  }

  // .LinkHasRecordResp hasRecResp = 602;
  if (has_hasrecresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      602, *cmd_.hasrecresp_, output);
  }

  // .LinkSearchRecordReq searchRecReq = 603;
  if (has_searchrecreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      603, *cmd_.searchrecreq_, output);
  }

  // .LinkSearchRecordResp searchRecResp = 604;
  if (has_searchrecresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      604, *cmd_.searchrecresp_, output);
  }

  // .LinkStartLiveCmd startLiveCmd = 701;
  if (has_startlivecmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      701, *cmd_.startlivecmd_, output);
  }

  // .LinkStopLiveCmd stopLiveCmd = 702;
  if (has_stoplivecmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      702, *cmd_.stoplivecmd_, output);
  }

  // .LinkPlayBackCmd playBackCmd = 703;
  if (has_playbackcmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      703, *cmd_.playbackcmd_, output);
  }

  // .LinkPlayPauseCmd playPauseCmd = 704;
  if (has_playpausecmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      704, *cmd_.playpausecmd_, output);
  }

  // .LinkPlayResumeCmd playResumeCmd = 705;
  if (has_playresumecmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      705, *cmd_.playresumecmd_, output);
  }

  // .LinkPlaySeekCmd playSeekCmd = 706;
  if (has_playseekcmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      706, *cmd_.playseekcmd_, output);
  }

  // .LinkPlayStopCmd playStopCmd = 707;
  if (has_playstopcmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      707, *cmd_.playstopcmd_, output);
  }

  // .LinkPtzCmd ptzCmd = 801;
  if (has_ptzcmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      801, *cmd_.ptzcmd_, output);
  }

  // .LinkCamSearchStartReq camSearchStartReq = 901;
  if (has_camsearchstartreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      901, *cmd_.camsearchstartreq_, output);
  }

  // .LinkCamSearchStartResp camSearchStartResp = 902;
  if (has_camsearchstartresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      902, *cmd_.camsearchstartresp_, output);
  }

  // .LinkCamSearchStopReq camSearchStopReq = 903;
  if (has_camsearchstopreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      903, *cmd_.camsearchstopreq_, output);
  }

  // .LinkCamSearchStopResp camSearchStopResp = 904;
  if (has_camsearchstopresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      904, *cmd_.camsearchstopresp_, output);
  }

  // .LinkRegEventReq regEventReq = 905;
  if (has_regeventreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      905, *cmd_.regeventreq_, output);
  }

  // .LinkRegEventResp regEventResp = 906;
  if (has_regeventresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      906, *cmd_.regeventresp_, output);
  }

  // .LinkUnRegEventReq unRegEventReq = 907;
  if (has_unregeventreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      907, *cmd_.unregeventreq_, output);
  }

  // .LinkUnRegEventResp unRegEventResp = 908;
  if (has_unregeventresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      908, *cmd_.unregeventresp_, output);
  }

  // .LinkEventSearchReq eventSearchReq = 909;
  if (has_eventsearchreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      909, *cmd_.eventsearchreq_, output);
  }

  // .LinkEventSearchResp eventSearchResp = 910;
  if (has_eventsearchresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      910, *cmd_.eventsearchresp_, output);
  }

  // .LinkHandleEventReq handleEventReq = 911;
  if (has_handleeventreq()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      911, *cmd_.handleeventreq_, output);
  }

  // .LinkHandleEventResp handleEventResp = 912;
  if (has_handleeventresp()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      912, *cmd_.handleeventresp_, output);
  }

  // .LinkCamAddNotify camAddNotify = 10001;
  if (has_camaddnotify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10001, *cmd_.camaddnotify_, output);
  }

  // .LinkCamIdNotify camIdNotify = 10002;
  if (has_camidnotify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10002, *cmd_.camidnotify_, output);
  }

  // .LinkCamSearchedNotify camSearchedNotify = 10003;
  if (has_camsearchednotify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10003, *cmd_.camsearchednotify_, output);
  }

  // .LinkEventNotify evnetNotify = 10004;
  if (has_evnetnotify()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10004, *cmd_.evnetnotify_, output);
  }

  // @@protoc_insertion_point(serialize_end:Link.LinkCmd)
}

::google::protobuf::uint8* LinkCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Link.LinkCmd)
  // .Link.LinkCmdType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // .LinkLoginReq loginReq = 102;
  if (has_loginreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        102, *cmd_.loginreq_, false, target);
  }

  // .LinkLoginResp loginResp = 103;
  if (has_loginresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        103, *cmd_.loginresp_, false, target);
  }

  // .LinkKeepaliveReq keepaliveReq = 104;
  if (has_keepalivereq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        104, *cmd_.keepalivereq_, false, target);
  }

  // .LinkKeepaliveResp keepaliveResp = 105;
  if (has_keepaliveresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        105, *cmd_.keepaliveresp_, false, target);
  }

  // .LinkRegNotifyReq regNotifyReq = 106;
  if (has_regnotifyreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        106, *cmd_.regnotifyreq_, false, target);
  }

  // .LinkRegNotifyResp regNotifyResp = 107;
  if (has_regnotifyresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        107, *cmd_.regnotifyresp_, false, target);
  }

  // .LinkListCamReq camListReq = 201;
  if (has_camlistreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        201, *cmd_.camlistreq_, false, target);
  }

  // .LinkListCamResp camListResp = 202;
  if (has_camlistresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        202, *cmd_.camlistresp_, false, target);
  }

  // .LinkCamReq camReq = 203;
  if (has_camreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        203, *cmd_.camreq_, false, target);
  }

  // .LinkCamResp camResp = 204;
  if (has_camresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        204, *cmd_.camresp_, false, target);
  }

  // .LinkAddCamReq addCamReq = 205;
  if (has_addcamreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        205, *cmd_.addcamreq_, false, target);
  }

  // .LinkAddCamResp addCamResp = 206;
  if (has_addcamresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        206, *cmd_.addcamresp_, false, target);
  }

  // .LinkDelCamReq delCamReq = 207;
  if (has_delcamreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        207, *cmd_.delcamreq_, false, target);
  }

  // .LinkDelCamResp delCamResp = 208;
  if (has_delcamresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        208, *cmd_.delcamresp_, false, target);
  }

  // .LinkSetCamSchedReq setCamSchedReq = 209;
  if (has_setcamschedreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        209, *cmd_.setcamschedreq_, false, target);
  }

  // .LinkSetCamSchedResp setCamSchedResp = 210;
  if (has_setcamschedresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        210, *cmd_.setcamschedresp_, false, target);
  }

  // .LinkGetStreamListReq getStreamListReq = 211;
  if (has_getstreamlistreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        211, *cmd_.getstreamlistreq_, false, target);
  }

  // .LinkGetStreamListResp getStreamListResp = 212;
  if (has_getstreamlistresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        212, *cmd_.getstreamlistresp_, false, target);
  }

  // .LinkVidDiskListReq diskListReq = 301;
  if (has_disklistreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        301, *cmd_.disklistreq_, false, target);
  }

  // .LinkVidDiskListResp diskListResp = 302;
  if (has_disklistresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        302, *cmd_.disklistresp_, false, target);
  }

  // .LinkSysVidDiskListReq sysDiskListReq = 303;
  if (has_sysdisklistreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        303, *cmd_.sysdisklistreq_, false, target);
  }

  // .LinkSysVidDiskListResp sysDiskListResp = 304;
  if (has_sysdisklistresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        304, *cmd_.sysdisklistresp_, false, target);
  }

  // .LinkAddDiskReq addDiskReq = 305;
  if (has_adddiskreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        305, *cmd_.adddiskreq_, false, target);
  }

  // .LinkAddDiskResp addDiskResp = 306;
  if (has_adddiskresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        306, *cmd_.adddiskresp_, false, target);
  }

  // .LinkDelDiskReq delDiskReq = 307;
  if (has_deldiskreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        307, *cmd_.deldiskreq_, false, target);
  }

  // .LinkDelDiskResp delDiskResp = 308;
  if (has_deldiskresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        308, *cmd_.deldiskresp_, false, target);
  }

  // .LinkUpdateDiskLimitReq diskLimitReq = 309;
  if (has_disklimitreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        309, *cmd_.disklimitreq_, false, target);
  }

  // .LinkUpdateDiskLimitResp diskLimitResp = 310;
  if (has_disklimitresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        310, *cmd_.disklimitresp_, false, target);
  }

  // .LinkGetLicReq licReq = 401;
  if (has_licreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        401, *cmd_.licreq_, false, target);
  }

  // .LinkGetLicResp licResp = 402;
  if (has_licresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        402, *cmd_.licresp_, false, target);
  }

  // .LinkGetVerReq verReq = 403;
  if (has_verreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        403, *cmd_.verreq_, false, target);
  }

  // .LinkGetVerResp verResp = 404;
  if (has_verresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        404, *cmd_.verresp_, false, target);
  }

  // .LinkConfLicReq confLicReq = 405;
  if (has_conflicreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        405, *cmd_.conflicreq_, false, target);
  }

  // .LinkConfLicResp confLicResp = 406;
  if (has_conflicresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        406, *cmd_.conflicresp_, false, target);
  }

  // .LinkAddUserReq addUserReq = 501;
  if (has_adduserreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        501, *cmd_.adduserreq_, false, target);
  }

  // .LinkAddUserResp addUserResp = 502;
  if (has_adduserresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        502, *cmd_.adduserresp_, false, target);
  }

  // .LinkHasRecordReq hasRecReq = 601;
  if (has_hasrecreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        601, *cmd_.hasrecreq_, false, target);
  }

  // .LinkHasRecordResp hasRecResp = 602;
  if (has_hasrecresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        602, *cmd_.hasrecresp_, false, target);
  }

  // .LinkSearchRecordReq searchRecReq = 603;
  if (has_searchrecreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        603, *cmd_.searchrecreq_, false, target);
  }

  // .LinkSearchRecordResp searchRecResp = 604;
  if (has_searchrecresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        604, *cmd_.searchrecresp_, false, target);
  }

  // .LinkStartLiveCmd startLiveCmd = 701;
  if (has_startlivecmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        701, *cmd_.startlivecmd_, false, target);
  }

  // .LinkStopLiveCmd stopLiveCmd = 702;
  if (has_stoplivecmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        702, *cmd_.stoplivecmd_, false, target);
  }

  // .LinkPlayBackCmd playBackCmd = 703;
  if (has_playbackcmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        703, *cmd_.playbackcmd_, false, target);
  }

  // .LinkPlayPauseCmd playPauseCmd = 704;
  if (has_playpausecmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        704, *cmd_.playpausecmd_, false, target);
  }

  // .LinkPlayResumeCmd playResumeCmd = 705;
  if (has_playresumecmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        705, *cmd_.playresumecmd_, false, target);
  }

  // .LinkPlaySeekCmd playSeekCmd = 706;
  if (has_playseekcmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        706, *cmd_.playseekcmd_, false, target);
  }

  // .LinkPlayStopCmd playStopCmd = 707;
  if (has_playstopcmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        707, *cmd_.playstopcmd_, false, target);
  }

  // .LinkPtzCmd ptzCmd = 801;
  if (has_ptzcmd()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        801, *cmd_.ptzcmd_, false, target);
  }

  // .LinkCamSearchStartReq camSearchStartReq = 901;
  if (has_camsearchstartreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        901, *cmd_.camsearchstartreq_, false, target);
  }

  // .LinkCamSearchStartResp camSearchStartResp = 902;
  if (has_camsearchstartresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        902, *cmd_.camsearchstartresp_, false, target);
  }

  // .LinkCamSearchStopReq camSearchStopReq = 903;
  if (has_camsearchstopreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        903, *cmd_.camsearchstopreq_, false, target);
  }

  // .LinkCamSearchStopResp camSearchStopResp = 904;
  if (has_camsearchstopresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        904, *cmd_.camsearchstopresp_, false, target);
  }

  // .LinkRegEventReq regEventReq = 905;
  if (has_regeventreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        905, *cmd_.regeventreq_, false, target);
  }

  // .LinkRegEventResp regEventResp = 906;
  if (has_regeventresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        906, *cmd_.regeventresp_, false, target);
  }

  // .LinkUnRegEventReq unRegEventReq = 907;
  if (has_unregeventreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        907, *cmd_.unregeventreq_, false, target);
  }

  // .LinkUnRegEventResp unRegEventResp = 908;
  if (has_unregeventresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        908, *cmd_.unregeventresp_, false, target);
  }

  // .LinkEventSearchReq eventSearchReq = 909;
  if (has_eventsearchreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        909, *cmd_.eventsearchreq_, false, target);
  }

  // .LinkEventSearchResp eventSearchResp = 910;
  if (has_eventsearchresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        910, *cmd_.eventsearchresp_, false, target);
  }

  // .LinkHandleEventReq handleEventReq = 911;
  if (has_handleeventreq()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        911, *cmd_.handleeventreq_, false, target);
  }

  // .LinkHandleEventResp handleEventResp = 912;
  if (has_handleeventresp()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        912, *cmd_.handleeventresp_, false, target);
  }

  // .LinkCamAddNotify camAddNotify = 10001;
  if (has_camaddnotify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10001, *cmd_.camaddnotify_, false, target);
  }

  // .LinkCamIdNotify camIdNotify = 10002;
  if (has_camidnotify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10002, *cmd_.camidnotify_, false, target);
  }

  // .LinkCamSearchedNotify camSearchedNotify = 10003;
  if (has_camsearchednotify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10003, *cmd_.camsearchednotify_, false, target);
  }

  // .LinkEventNotify evnetNotify = 10004;
  if (has_evnetnotify()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        10004, *cmd_.evnetnotify_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Link.LinkCmd)
  return target;
}

size_t LinkCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Link.LinkCmd)
  size_t total_size = 0;

  // .Link.LinkCmdType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  switch (cmd_case()) {
    // .LinkLoginReq loginReq = 102;
    case kLoginReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.loginreq_);
      break;
    }
    // .LinkLoginResp loginResp = 103;
    case kLoginResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.loginresp_);
      break;
    }
    // .LinkKeepaliveReq keepaliveReq = 104;
    case kKeepaliveReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.keepalivereq_);
      break;
    }
    // .LinkKeepaliveResp keepaliveResp = 105;
    case kKeepaliveResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.keepaliveresp_);
      break;
    }
    // .LinkRegNotifyReq regNotifyReq = 106;
    case kRegNotifyReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.regnotifyreq_);
      break;
    }
    // .LinkRegNotifyResp regNotifyResp = 107;
    case kRegNotifyResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.regnotifyresp_);
      break;
    }
    // .LinkListCamReq camListReq = 201;
    case kCamListReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camlistreq_);
      break;
    }
    // .LinkListCamResp camListResp = 202;
    case kCamListResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camlistresp_);
      break;
    }
    // .LinkCamReq camReq = 203;
    case kCamReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camreq_);
      break;
    }
    // .LinkCamResp camResp = 204;
    case kCamResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camresp_);
      break;
    }
    // .LinkAddCamReq addCamReq = 205;
    case kAddCamReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.addcamreq_);
      break;
    }
    // .LinkAddCamResp addCamResp = 206;
    case kAddCamResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.addcamresp_);
      break;
    }
    // .LinkDelCamReq delCamReq = 207;
    case kDelCamReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.delcamreq_);
      break;
    }
    // .LinkDelCamResp delCamResp = 208;
    case kDelCamResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.delcamresp_);
      break;
    }
    // .LinkSetCamSchedReq setCamSchedReq = 209;
    case kSetCamSchedReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.setcamschedreq_);
      break;
    }
    // .LinkSetCamSchedResp setCamSchedResp = 210;
    case kSetCamSchedResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.setcamschedresp_);
      break;
    }
    // .LinkGetStreamListReq getStreamListReq = 211;
    case kGetStreamListReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.getstreamlistreq_);
      break;
    }
    // .LinkGetStreamListResp getStreamListResp = 212;
    case kGetStreamListResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.getstreamlistresp_);
      break;
    }
    // .LinkVidDiskListReq diskListReq = 301;
    case kDiskListReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.disklistreq_);
      break;
    }
    // .LinkVidDiskListResp diskListResp = 302;
    case kDiskListResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.disklistresp_);
      break;
    }
    // .LinkSysVidDiskListReq sysDiskListReq = 303;
    case kSysDiskListReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.sysdisklistreq_);
      break;
    }
    // .LinkSysVidDiskListResp sysDiskListResp = 304;
    case kSysDiskListResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.sysdisklistresp_);
      break;
    }
    // .LinkAddDiskReq addDiskReq = 305;
    case kAddDiskReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.adddiskreq_);
      break;
    }
    // .LinkAddDiskResp addDiskResp = 306;
    case kAddDiskResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.adddiskresp_);
      break;
    }
    // .LinkDelDiskReq delDiskReq = 307;
    case kDelDiskReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.deldiskreq_);
      break;
    }
    // .LinkDelDiskResp delDiskResp = 308;
    case kDelDiskResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.deldiskresp_);
      break;
    }
    // .LinkUpdateDiskLimitReq diskLimitReq = 309;
    case kDiskLimitReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.disklimitreq_);
      break;
    }
    // .LinkUpdateDiskLimitResp diskLimitResp = 310;
    case kDiskLimitResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.disklimitresp_);
      break;
    }
    // .LinkGetLicReq licReq = 401;
    case kLicReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.licreq_);
      break;
    }
    // .LinkGetLicResp licResp = 402;
    case kLicResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.licresp_);
      break;
    }
    // .LinkGetVerReq verReq = 403;
    case kVerReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.verreq_);
      break;
    }
    // .LinkGetVerResp verResp = 404;
    case kVerResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.verresp_);
      break;
    }
    // .LinkConfLicReq confLicReq = 405;
    case kConfLicReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.conflicreq_);
      break;
    }
    // .LinkConfLicResp confLicResp = 406;
    case kConfLicResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.conflicresp_);
      break;
    }
    // .LinkAddUserReq addUserReq = 501;
    case kAddUserReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.adduserreq_);
      break;
    }
    // .LinkAddUserResp addUserResp = 502;
    case kAddUserResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.adduserresp_);
      break;
    }
    // .LinkHasRecordReq hasRecReq = 601;
    case kHasRecReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.hasrecreq_);
      break;
    }
    // .LinkHasRecordResp hasRecResp = 602;
    case kHasRecResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.hasrecresp_);
      break;
    }
    // .LinkSearchRecordReq searchRecReq = 603;
    case kSearchRecReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.searchrecreq_);
      break;
    }
    // .LinkSearchRecordResp searchRecResp = 604;
    case kSearchRecResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.searchrecresp_);
      break;
    }
    // .LinkStartLiveCmd startLiveCmd = 701;
    case kStartLiveCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.startlivecmd_);
      break;
    }
    // .LinkStopLiveCmd stopLiveCmd = 702;
    case kStopLiveCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.stoplivecmd_);
      break;
    }
    // .LinkPlayBackCmd playBackCmd = 703;
    case kPlayBackCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.playbackcmd_);
      break;
    }
    // .LinkPlayPauseCmd playPauseCmd = 704;
    case kPlayPauseCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.playpausecmd_);
      break;
    }
    // .LinkPlayResumeCmd playResumeCmd = 705;
    case kPlayResumeCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.playresumecmd_);
      break;
    }
    // .LinkPlaySeekCmd playSeekCmd = 706;
    case kPlaySeekCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.playseekcmd_);
      break;
    }
    // .LinkPlayStopCmd playStopCmd = 707;
    case kPlayStopCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.playstopcmd_);
      break;
    }
    // .LinkPtzCmd ptzCmd = 801;
    case kPtzCmd: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.ptzcmd_);
      break;
    }
    // .LinkCamSearchStartReq camSearchStartReq = 901;
    case kCamSearchStartReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camsearchstartreq_);
      break;
    }
    // .LinkCamSearchStartResp camSearchStartResp = 902;
    case kCamSearchStartResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camsearchstartresp_);
      break;
    }
    // .LinkCamSearchStopReq camSearchStopReq = 903;
    case kCamSearchStopReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camsearchstopreq_);
      break;
    }
    // .LinkCamSearchStopResp camSearchStopResp = 904;
    case kCamSearchStopResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camsearchstopresp_);
      break;
    }
    // .LinkRegEventReq regEventReq = 905;
    case kRegEventReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.regeventreq_);
      break;
    }
    // .LinkRegEventResp regEventResp = 906;
    case kRegEventResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.regeventresp_);
      break;
    }
    // .LinkUnRegEventReq unRegEventReq = 907;
    case kUnRegEventReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.unregeventreq_);
      break;
    }
    // .LinkUnRegEventResp unRegEventResp = 908;
    case kUnRegEventResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.unregeventresp_);
      break;
    }
    // .LinkEventSearchReq eventSearchReq = 909;
    case kEventSearchReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.eventsearchreq_);
      break;
    }
    // .LinkEventSearchResp eventSearchResp = 910;
    case kEventSearchResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.eventsearchresp_);
      break;
    }
    // .LinkHandleEventReq handleEventReq = 911;
    case kHandleEventReq: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.handleeventreq_);
      break;
    }
    // .LinkHandleEventResp handleEventResp = 912;
    case kHandleEventResp: {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.handleeventresp_);
      break;
    }
    // .LinkCamAddNotify camAddNotify = 10001;
    case kCamAddNotify: {
      total_size += 3 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camaddnotify_);
      break;
    }
    // .LinkCamIdNotify camIdNotify = 10002;
    case kCamIdNotify: {
      total_size += 3 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camidnotify_);
      break;
    }
    // .LinkCamSearchedNotify camSearchedNotify = 10003;
    case kCamSearchedNotify: {
      total_size += 3 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.camsearchednotify_);
      break;
    }
    // .LinkEventNotify evnetNotify = 10004;
    case kEvnetNotify: {
      total_size += 3 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *cmd_.evnetnotify_);
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Link.LinkCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Link.LinkCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Link.LinkCmd)
    MergeFrom(*source);
  }
}

void LinkCmd::MergeFrom(const LinkCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Link.LinkCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  switch (from.cmd_case()) {
    case kLoginReq: {
      mutable_loginreq()->::LinkLoginReq::MergeFrom(from.loginreq());
      break;
    }
    case kLoginResp: {
      mutable_loginresp()->::LinkLoginResp::MergeFrom(from.loginresp());
      break;
    }
    case kKeepaliveReq: {
      mutable_keepalivereq()->::LinkKeepaliveReq::MergeFrom(from.keepalivereq());
      break;
    }
    case kKeepaliveResp: {
      mutable_keepaliveresp()->::LinkKeepaliveResp::MergeFrom(from.keepaliveresp());
      break;
    }
    case kRegNotifyReq: {
      mutable_regnotifyreq()->::LinkRegNotifyReq::MergeFrom(from.regnotifyreq());
      break;
    }
    case kRegNotifyResp: {
      mutable_regnotifyresp()->::LinkRegNotifyResp::MergeFrom(from.regnotifyresp());
      break;
    }
    case kCamListReq: {
      mutable_camlistreq()->::LinkListCamReq::MergeFrom(from.camlistreq());
      break;
    }
    case kCamListResp: {
      mutable_camlistresp()->::LinkListCamResp::MergeFrom(from.camlistresp());
      break;
    }
    case kCamReq: {
      mutable_camreq()->::LinkCamReq::MergeFrom(from.camreq());
      break;
    }
    case kCamResp: {
      mutable_camresp()->::LinkCamResp::MergeFrom(from.camresp());
      break;
    }
    case kAddCamReq: {
      mutable_addcamreq()->::LinkAddCamReq::MergeFrom(from.addcamreq());
      break;
    }
    case kAddCamResp: {
      mutable_addcamresp()->::LinkAddCamResp::MergeFrom(from.addcamresp());
      break;
    }
    case kDelCamReq: {
      mutable_delcamreq()->::LinkDelCamReq::MergeFrom(from.delcamreq());
      break;
    }
    case kDelCamResp: {
      mutable_delcamresp()->::LinkDelCamResp::MergeFrom(from.delcamresp());
      break;
    }
    case kSetCamSchedReq: {
      mutable_setcamschedreq()->::LinkSetCamSchedReq::MergeFrom(from.setcamschedreq());
      break;
    }
    case kSetCamSchedResp: {
      mutable_setcamschedresp()->::LinkSetCamSchedResp::MergeFrom(from.setcamschedresp());
      break;
    }
    case kGetStreamListReq: {
      mutable_getstreamlistreq()->::LinkGetStreamListReq::MergeFrom(from.getstreamlistreq());
      break;
    }
    case kGetStreamListResp: {
      mutable_getstreamlistresp()->::LinkGetStreamListResp::MergeFrom(from.getstreamlistresp());
      break;
    }
    case kDiskListReq: {
      mutable_disklistreq()->::LinkVidDiskListReq::MergeFrom(from.disklistreq());
      break;
    }
    case kDiskListResp: {
      mutable_disklistresp()->::LinkVidDiskListResp::MergeFrom(from.disklistresp());
      break;
    }
    case kSysDiskListReq: {
      mutable_sysdisklistreq()->::LinkSysVidDiskListReq::MergeFrom(from.sysdisklistreq());
      break;
    }
    case kSysDiskListResp: {
      mutable_sysdisklistresp()->::LinkSysVidDiskListResp::MergeFrom(from.sysdisklistresp());
      break;
    }
    case kAddDiskReq: {
      mutable_adddiskreq()->::LinkAddDiskReq::MergeFrom(from.adddiskreq());
      break;
    }
    case kAddDiskResp: {
      mutable_adddiskresp()->::LinkAddDiskResp::MergeFrom(from.adddiskresp());
      break;
    }
    case kDelDiskReq: {
      mutable_deldiskreq()->::LinkDelDiskReq::MergeFrom(from.deldiskreq());
      break;
    }
    case kDelDiskResp: {
      mutable_deldiskresp()->::LinkDelDiskResp::MergeFrom(from.deldiskresp());
      break;
    }
    case kDiskLimitReq: {
      mutable_disklimitreq()->::LinkUpdateDiskLimitReq::MergeFrom(from.disklimitreq());
      break;
    }
    case kDiskLimitResp: {
      mutable_disklimitresp()->::LinkUpdateDiskLimitResp::MergeFrom(from.disklimitresp());
      break;
    }
    case kLicReq: {
      mutable_licreq()->::LinkGetLicReq::MergeFrom(from.licreq());
      break;
    }
    case kLicResp: {
      mutable_licresp()->::LinkGetLicResp::MergeFrom(from.licresp());
      break;
    }
    case kVerReq: {
      mutable_verreq()->::LinkGetVerReq::MergeFrom(from.verreq());
      break;
    }
    case kVerResp: {
      mutable_verresp()->::LinkGetVerResp::MergeFrom(from.verresp());
      break;
    }
    case kConfLicReq: {
      mutable_conflicreq()->::LinkConfLicReq::MergeFrom(from.conflicreq());
      break;
    }
    case kConfLicResp: {
      mutable_conflicresp()->::LinkConfLicResp::MergeFrom(from.conflicresp());
      break;
    }
    case kAddUserReq: {
      mutable_adduserreq()->::LinkAddUserReq::MergeFrom(from.adduserreq());
      break;
    }
    case kAddUserResp: {
      mutable_adduserresp()->::LinkAddUserResp::MergeFrom(from.adduserresp());
      break;
    }
    case kHasRecReq: {
      mutable_hasrecreq()->::LinkHasRecordReq::MergeFrom(from.hasrecreq());
      break;
    }
    case kHasRecResp: {
      mutable_hasrecresp()->::LinkHasRecordResp::MergeFrom(from.hasrecresp());
      break;
    }
    case kSearchRecReq: {
      mutable_searchrecreq()->::LinkSearchRecordReq::MergeFrom(from.searchrecreq());
      break;
    }
    case kSearchRecResp: {
      mutable_searchrecresp()->::LinkSearchRecordResp::MergeFrom(from.searchrecresp());
      break;
    }
    case kStartLiveCmd: {
      mutable_startlivecmd()->::LinkStartLiveCmd::MergeFrom(from.startlivecmd());
      break;
    }
    case kStopLiveCmd: {
      mutable_stoplivecmd()->::LinkStopLiveCmd::MergeFrom(from.stoplivecmd());
      break;
    }
    case kPlayBackCmd: {
      mutable_playbackcmd()->::LinkPlayBackCmd::MergeFrom(from.playbackcmd());
      break;
    }
    case kPlayPauseCmd: {
      mutable_playpausecmd()->::LinkPlayPauseCmd::MergeFrom(from.playpausecmd());
      break;
    }
    case kPlayResumeCmd: {
      mutable_playresumecmd()->::LinkPlayResumeCmd::MergeFrom(from.playresumecmd());
      break;
    }
    case kPlaySeekCmd: {
      mutable_playseekcmd()->::LinkPlaySeekCmd::MergeFrom(from.playseekcmd());
      break;
    }
    case kPlayStopCmd: {
      mutable_playstopcmd()->::LinkPlayStopCmd::MergeFrom(from.playstopcmd());
      break;
    }
    case kPtzCmd: {
      mutable_ptzcmd()->::LinkPtzCmd::MergeFrom(from.ptzcmd());
      break;
    }
    case kCamSearchStartReq: {
      mutable_camsearchstartreq()->::LinkCamSearchStartReq::MergeFrom(from.camsearchstartreq());
      break;
    }
    case kCamSearchStartResp: {
      mutable_camsearchstartresp()->::LinkCamSearchStartResp::MergeFrom(from.camsearchstartresp());
      break;
    }
    case kCamSearchStopReq: {
      mutable_camsearchstopreq()->::LinkCamSearchStopReq::MergeFrom(from.camsearchstopreq());
      break;
    }
    case kCamSearchStopResp: {
      mutable_camsearchstopresp()->::LinkCamSearchStopResp::MergeFrom(from.camsearchstopresp());
      break;
    }
    case kRegEventReq: {
      mutable_regeventreq()->::LinkRegEventReq::MergeFrom(from.regeventreq());
      break;
    }
    case kRegEventResp: {
      mutable_regeventresp()->::LinkRegEventResp::MergeFrom(from.regeventresp());
      break;
    }
    case kUnRegEventReq: {
      mutable_unregeventreq()->::LinkUnRegEventReq::MergeFrom(from.unregeventreq());
      break;
    }
    case kUnRegEventResp: {
      mutable_unregeventresp()->::LinkUnRegEventResp::MergeFrom(from.unregeventresp());
      break;
    }
    case kEventSearchReq: {
      mutable_eventsearchreq()->::LinkEventSearchReq::MergeFrom(from.eventsearchreq());
      break;
    }
    case kEventSearchResp: {
      mutable_eventsearchresp()->::LinkEventSearchResp::MergeFrom(from.eventsearchresp());
      break;
    }
    case kHandleEventReq: {
      mutable_handleeventreq()->::LinkHandleEventReq::MergeFrom(from.handleeventreq());
      break;
    }
    case kHandleEventResp: {
      mutable_handleeventresp()->::LinkHandleEventResp::MergeFrom(from.handleeventresp());
      break;
    }
    case kCamAddNotify: {
      mutable_camaddnotify()->::LinkCamAddNotify::MergeFrom(from.camaddnotify());
      break;
    }
    case kCamIdNotify: {
      mutable_camidnotify()->::LinkCamIdNotify::MergeFrom(from.camidnotify());
      break;
    }
    case kCamSearchedNotify: {
      mutable_camsearchednotify()->::LinkCamSearchedNotify::MergeFrom(from.camsearchednotify());
      break;
    }
    case kEvnetNotify: {
      mutable_evnetnotify()->::LinkEventNotify::MergeFrom(from.evnetnotify());
      break;
    }
    case CMD_NOT_SET: {
      break;
    }
  }
}

void LinkCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Link.LinkCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCmd::CopyFrom(const LinkCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Link.LinkCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCmd::IsInitialized() const {
  return true;
}

void LinkCmd::Swap(LinkCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCmd::InternalSwap(LinkCmd* other) {
  std::swap(type_, other->type_);
  std::swap(cmd_, other->cmd_);
  std::swap(_oneof_case_[0], other->_oneof_case_[0]);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCmd::GetMetadata() const {
  protobuf_linkproto_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linkproto_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCmd

// .Link.LinkCmdType type = 1;
void LinkCmd::clear_type() {
  type_ = 0;
}
::Link::LinkCmdType LinkCmd::type() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.type)
  return static_cast< ::Link::LinkCmdType >(type_);
}
void LinkCmd::set_type(::Link::LinkCmdType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:Link.LinkCmd.type)
}

// .LinkLoginReq loginReq = 102;
bool LinkCmd::has_loginreq() const {
  return cmd_case() == kLoginReq;
}
void LinkCmd::set_has_loginreq() {
  _oneof_case_[0] = kLoginReq;
}
void LinkCmd::clear_loginreq() {
  if (has_loginreq()) {
    delete cmd_.loginreq_;
    clear_has_cmd();
  }
}
 const ::LinkLoginReq& LinkCmd::loginreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.loginReq)
  return has_loginreq()
      ? *cmd_.loginreq_
      : ::LinkLoginReq::default_instance();
}
::LinkLoginReq* LinkCmd::mutable_loginreq() {
  if (!has_loginreq()) {
    clear_cmd();
    set_has_loginreq();
    cmd_.loginreq_ = new ::LinkLoginReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.loginReq)
  return cmd_.loginreq_;
}
::LinkLoginReq* LinkCmd::release_loginreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.loginReq)
  if (has_loginreq()) {
    clear_has_cmd();
    ::LinkLoginReq* temp = cmd_.loginreq_;
    cmd_.loginreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_loginreq(::LinkLoginReq* loginreq) {
  clear_cmd();
  if (loginreq) {
    set_has_loginreq();
    cmd_.loginreq_ = loginreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.loginReq)
}

// .LinkLoginResp loginResp = 103;
bool LinkCmd::has_loginresp() const {
  return cmd_case() == kLoginResp;
}
void LinkCmd::set_has_loginresp() {
  _oneof_case_[0] = kLoginResp;
}
void LinkCmd::clear_loginresp() {
  if (has_loginresp()) {
    delete cmd_.loginresp_;
    clear_has_cmd();
  }
}
 const ::LinkLoginResp& LinkCmd::loginresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.loginResp)
  return has_loginresp()
      ? *cmd_.loginresp_
      : ::LinkLoginResp::default_instance();
}
::LinkLoginResp* LinkCmd::mutable_loginresp() {
  if (!has_loginresp()) {
    clear_cmd();
    set_has_loginresp();
    cmd_.loginresp_ = new ::LinkLoginResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.loginResp)
  return cmd_.loginresp_;
}
::LinkLoginResp* LinkCmd::release_loginresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.loginResp)
  if (has_loginresp()) {
    clear_has_cmd();
    ::LinkLoginResp* temp = cmd_.loginresp_;
    cmd_.loginresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_loginresp(::LinkLoginResp* loginresp) {
  clear_cmd();
  if (loginresp) {
    set_has_loginresp();
    cmd_.loginresp_ = loginresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.loginResp)
}

// .LinkKeepaliveReq keepaliveReq = 104;
bool LinkCmd::has_keepalivereq() const {
  return cmd_case() == kKeepaliveReq;
}
void LinkCmd::set_has_keepalivereq() {
  _oneof_case_[0] = kKeepaliveReq;
}
void LinkCmd::clear_keepalivereq() {
  if (has_keepalivereq()) {
    delete cmd_.keepalivereq_;
    clear_has_cmd();
  }
}
 const ::LinkKeepaliveReq& LinkCmd::keepalivereq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.keepaliveReq)
  return has_keepalivereq()
      ? *cmd_.keepalivereq_
      : ::LinkKeepaliveReq::default_instance();
}
::LinkKeepaliveReq* LinkCmd::mutable_keepalivereq() {
  if (!has_keepalivereq()) {
    clear_cmd();
    set_has_keepalivereq();
    cmd_.keepalivereq_ = new ::LinkKeepaliveReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.keepaliveReq)
  return cmd_.keepalivereq_;
}
::LinkKeepaliveReq* LinkCmd::release_keepalivereq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.keepaliveReq)
  if (has_keepalivereq()) {
    clear_has_cmd();
    ::LinkKeepaliveReq* temp = cmd_.keepalivereq_;
    cmd_.keepalivereq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_keepalivereq(::LinkKeepaliveReq* keepalivereq) {
  clear_cmd();
  if (keepalivereq) {
    set_has_keepalivereq();
    cmd_.keepalivereq_ = keepalivereq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.keepaliveReq)
}

// .LinkKeepaliveResp keepaliveResp = 105;
bool LinkCmd::has_keepaliveresp() const {
  return cmd_case() == kKeepaliveResp;
}
void LinkCmd::set_has_keepaliveresp() {
  _oneof_case_[0] = kKeepaliveResp;
}
void LinkCmd::clear_keepaliveresp() {
  if (has_keepaliveresp()) {
    delete cmd_.keepaliveresp_;
    clear_has_cmd();
  }
}
 const ::LinkKeepaliveResp& LinkCmd::keepaliveresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.keepaliveResp)
  return has_keepaliveresp()
      ? *cmd_.keepaliveresp_
      : ::LinkKeepaliveResp::default_instance();
}
::LinkKeepaliveResp* LinkCmd::mutable_keepaliveresp() {
  if (!has_keepaliveresp()) {
    clear_cmd();
    set_has_keepaliveresp();
    cmd_.keepaliveresp_ = new ::LinkKeepaliveResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.keepaliveResp)
  return cmd_.keepaliveresp_;
}
::LinkKeepaliveResp* LinkCmd::release_keepaliveresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.keepaliveResp)
  if (has_keepaliveresp()) {
    clear_has_cmd();
    ::LinkKeepaliveResp* temp = cmd_.keepaliveresp_;
    cmd_.keepaliveresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_keepaliveresp(::LinkKeepaliveResp* keepaliveresp) {
  clear_cmd();
  if (keepaliveresp) {
    set_has_keepaliveresp();
    cmd_.keepaliveresp_ = keepaliveresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.keepaliveResp)
}

// .LinkRegNotifyReq regNotifyReq = 106;
bool LinkCmd::has_regnotifyreq() const {
  return cmd_case() == kRegNotifyReq;
}
void LinkCmd::set_has_regnotifyreq() {
  _oneof_case_[0] = kRegNotifyReq;
}
void LinkCmd::clear_regnotifyreq() {
  if (has_regnotifyreq()) {
    delete cmd_.regnotifyreq_;
    clear_has_cmd();
  }
}
 const ::LinkRegNotifyReq& LinkCmd::regnotifyreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.regNotifyReq)
  return has_regnotifyreq()
      ? *cmd_.regnotifyreq_
      : ::LinkRegNotifyReq::default_instance();
}
::LinkRegNotifyReq* LinkCmd::mutable_regnotifyreq() {
  if (!has_regnotifyreq()) {
    clear_cmd();
    set_has_regnotifyreq();
    cmd_.regnotifyreq_ = new ::LinkRegNotifyReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.regNotifyReq)
  return cmd_.regnotifyreq_;
}
::LinkRegNotifyReq* LinkCmd::release_regnotifyreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.regNotifyReq)
  if (has_regnotifyreq()) {
    clear_has_cmd();
    ::LinkRegNotifyReq* temp = cmd_.regnotifyreq_;
    cmd_.regnotifyreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_regnotifyreq(::LinkRegNotifyReq* regnotifyreq) {
  clear_cmd();
  if (regnotifyreq) {
    set_has_regnotifyreq();
    cmd_.regnotifyreq_ = regnotifyreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.regNotifyReq)
}

// .LinkRegNotifyResp regNotifyResp = 107;
bool LinkCmd::has_regnotifyresp() const {
  return cmd_case() == kRegNotifyResp;
}
void LinkCmd::set_has_regnotifyresp() {
  _oneof_case_[0] = kRegNotifyResp;
}
void LinkCmd::clear_regnotifyresp() {
  if (has_regnotifyresp()) {
    delete cmd_.regnotifyresp_;
    clear_has_cmd();
  }
}
 const ::LinkRegNotifyResp& LinkCmd::regnotifyresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.regNotifyResp)
  return has_regnotifyresp()
      ? *cmd_.regnotifyresp_
      : ::LinkRegNotifyResp::default_instance();
}
::LinkRegNotifyResp* LinkCmd::mutable_regnotifyresp() {
  if (!has_regnotifyresp()) {
    clear_cmd();
    set_has_regnotifyresp();
    cmd_.regnotifyresp_ = new ::LinkRegNotifyResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.regNotifyResp)
  return cmd_.regnotifyresp_;
}
::LinkRegNotifyResp* LinkCmd::release_regnotifyresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.regNotifyResp)
  if (has_regnotifyresp()) {
    clear_has_cmd();
    ::LinkRegNotifyResp* temp = cmd_.regnotifyresp_;
    cmd_.regnotifyresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_regnotifyresp(::LinkRegNotifyResp* regnotifyresp) {
  clear_cmd();
  if (regnotifyresp) {
    set_has_regnotifyresp();
    cmd_.regnotifyresp_ = regnotifyresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.regNotifyResp)
}

// .LinkListCamReq camListReq = 201;
bool LinkCmd::has_camlistreq() const {
  return cmd_case() == kCamListReq;
}
void LinkCmd::set_has_camlistreq() {
  _oneof_case_[0] = kCamListReq;
}
void LinkCmd::clear_camlistreq() {
  if (has_camlistreq()) {
    delete cmd_.camlistreq_;
    clear_has_cmd();
  }
}
 const ::LinkListCamReq& LinkCmd::camlistreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camListReq)
  return has_camlistreq()
      ? *cmd_.camlistreq_
      : ::LinkListCamReq::default_instance();
}
::LinkListCamReq* LinkCmd::mutable_camlistreq() {
  if (!has_camlistreq()) {
    clear_cmd();
    set_has_camlistreq();
    cmd_.camlistreq_ = new ::LinkListCamReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camListReq)
  return cmd_.camlistreq_;
}
::LinkListCamReq* LinkCmd::release_camlistreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camListReq)
  if (has_camlistreq()) {
    clear_has_cmd();
    ::LinkListCamReq* temp = cmd_.camlistreq_;
    cmd_.camlistreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camlistreq(::LinkListCamReq* camlistreq) {
  clear_cmd();
  if (camlistreq) {
    set_has_camlistreq();
    cmd_.camlistreq_ = camlistreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camListReq)
}

// .LinkListCamResp camListResp = 202;
bool LinkCmd::has_camlistresp() const {
  return cmd_case() == kCamListResp;
}
void LinkCmd::set_has_camlistresp() {
  _oneof_case_[0] = kCamListResp;
}
void LinkCmd::clear_camlistresp() {
  if (has_camlistresp()) {
    delete cmd_.camlistresp_;
    clear_has_cmd();
  }
}
 const ::LinkListCamResp& LinkCmd::camlistresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camListResp)
  return has_camlistresp()
      ? *cmd_.camlistresp_
      : ::LinkListCamResp::default_instance();
}
::LinkListCamResp* LinkCmd::mutable_camlistresp() {
  if (!has_camlistresp()) {
    clear_cmd();
    set_has_camlistresp();
    cmd_.camlistresp_ = new ::LinkListCamResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camListResp)
  return cmd_.camlistresp_;
}
::LinkListCamResp* LinkCmd::release_camlistresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camListResp)
  if (has_camlistresp()) {
    clear_has_cmd();
    ::LinkListCamResp* temp = cmd_.camlistresp_;
    cmd_.camlistresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camlistresp(::LinkListCamResp* camlistresp) {
  clear_cmd();
  if (camlistresp) {
    set_has_camlistresp();
    cmd_.camlistresp_ = camlistresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camListResp)
}

// .LinkCamReq camReq = 203;
bool LinkCmd::has_camreq() const {
  return cmd_case() == kCamReq;
}
void LinkCmd::set_has_camreq() {
  _oneof_case_[0] = kCamReq;
}
void LinkCmd::clear_camreq() {
  if (has_camreq()) {
    delete cmd_.camreq_;
    clear_has_cmd();
  }
}
 const ::LinkCamReq& LinkCmd::camreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camReq)
  return has_camreq()
      ? *cmd_.camreq_
      : ::LinkCamReq::default_instance();
}
::LinkCamReq* LinkCmd::mutable_camreq() {
  if (!has_camreq()) {
    clear_cmd();
    set_has_camreq();
    cmd_.camreq_ = new ::LinkCamReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camReq)
  return cmd_.camreq_;
}
::LinkCamReq* LinkCmd::release_camreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camReq)
  if (has_camreq()) {
    clear_has_cmd();
    ::LinkCamReq* temp = cmd_.camreq_;
    cmd_.camreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camreq(::LinkCamReq* camreq) {
  clear_cmd();
  if (camreq) {
    set_has_camreq();
    cmd_.camreq_ = camreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camReq)
}

// .LinkCamResp camResp = 204;
bool LinkCmd::has_camresp() const {
  return cmd_case() == kCamResp;
}
void LinkCmd::set_has_camresp() {
  _oneof_case_[0] = kCamResp;
}
void LinkCmd::clear_camresp() {
  if (has_camresp()) {
    delete cmd_.camresp_;
    clear_has_cmd();
  }
}
 const ::LinkCamResp& LinkCmd::camresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camResp)
  return has_camresp()
      ? *cmd_.camresp_
      : ::LinkCamResp::default_instance();
}
::LinkCamResp* LinkCmd::mutable_camresp() {
  if (!has_camresp()) {
    clear_cmd();
    set_has_camresp();
    cmd_.camresp_ = new ::LinkCamResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camResp)
  return cmd_.camresp_;
}
::LinkCamResp* LinkCmd::release_camresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camResp)
  if (has_camresp()) {
    clear_has_cmd();
    ::LinkCamResp* temp = cmd_.camresp_;
    cmd_.camresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camresp(::LinkCamResp* camresp) {
  clear_cmd();
  if (camresp) {
    set_has_camresp();
    cmd_.camresp_ = camresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camResp)
}

// .LinkAddCamReq addCamReq = 205;
bool LinkCmd::has_addcamreq() const {
  return cmd_case() == kAddCamReq;
}
void LinkCmd::set_has_addcamreq() {
  _oneof_case_[0] = kAddCamReq;
}
void LinkCmd::clear_addcamreq() {
  if (has_addcamreq()) {
    delete cmd_.addcamreq_;
    clear_has_cmd();
  }
}
 const ::LinkAddCamReq& LinkCmd::addcamreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.addCamReq)
  return has_addcamreq()
      ? *cmd_.addcamreq_
      : ::LinkAddCamReq::default_instance();
}
::LinkAddCamReq* LinkCmd::mutable_addcamreq() {
  if (!has_addcamreq()) {
    clear_cmd();
    set_has_addcamreq();
    cmd_.addcamreq_ = new ::LinkAddCamReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.addCamReq)
  return cmd_.addcamreq_;
}
::LinkAddCamReq* LinkCmd::release_addcamreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.addCamReq)
  if (has_addcamreq()) {
    clear_has_cmd();
    ::LinkAddCamReq* temp = cmd_.addcamreq_;
    cmd_.addcamreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_addcamreq(::LinkAddCamReq* addcamreq) {
  clear_cmd();
  if (addcamreq) {
    set_has_addcamreq();
    cmd_.addcamreq_ = addcamreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.addCamReq)
}

// .LinkAddCamResp addCamResp = 206;
bool LinkCmd::has_addcamresp() const {
  return cmd_case() == kAddCamResp;
}
void LinkCmd::set_has_addcamresp() {
  _oneof_case_[0] = kAddCamResp;
}
void LinkCmd::clear_addcamresp() {
  if (has_addcamresp()) {
    delete cmd_.addcamresp_;
    clear_has_cmd();
  }
}
 const ::LinkAddCamResp& LinkCmd::addcamresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.addCamResp)
  return has_addcamresp()
      ? *cmd_.addcamresp_
      : ::LinkAddCamResp::default_instance();
}
::LinkAddCamResp* LinkCmd::mutable_addcamresp() {
  if (!has_addcamresp()) {
    clear_cmd();
    set_has_addcamresp();
    cmd_.addcamresp_ = new ::LinkAddCamResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.addCamResp)
  return cmd_.addcamresp_;
}
::LinkAddCamResp* LinkCmd::release_addcamresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.addCamResp)
  if (has_addcamresp()) {
    clear_has_cmd();
    ::LinkAddCamResp* temp = cmd_.addcamresp_;
    cmd_.addcamresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_addcamresp(::LinkAddCamResp* addcamresp) {
  clear_cmd();
  if (addcamresp) {
    set_has_addcamresp();
    cmd_.addcamresp_ = addcamresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.addCamResp)
}

// .LinkDelCamReq delCamReq = 207;
bool LinkCmd::has_delcamreq() const {
  return cmd_case() == kDelCamReq;
}
void LinkCmd::set_has_delcamreq() {
  _oneof_case_[0] = kDelCamReq;
}
void LinkCmd::clear_delcamreq() {
  if (has_delcamreq()) {
    delete cmd_.delcamreq_;
    clear_has_cmd();
  }
}
 const ::LinkDelCamReq& LinkCmd::delcamreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.delCamReq)
  return has_delcamreq()
      ? *cmd_.delcamreq_
      : ::LinkDelCamReq::default_instance();
}
::LinkDelCamReq* LinkCmd::mutable_delcamreq() {
  if (!has_delcamreq()) {
    clear_cmd();
    set_has_delcamreq();
    cmd_.delcamreq_ = new ::LinkDelCamReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.delCamReq)
  return cmd_.delcamreq_;
}
::LinkDelCamReq* LinkCmd::release_delcamreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.delCamReq)
  if (has_delcamreq()) {
    clear_has_cmd();
    ::LinkDelCamReq* temp = cmd_.delcamreq_;
    cmd_.delcamreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_delcamreq(::LinkDelCamReq* delcamreq) {
  clear_cmd();
  if (delcamreq) {
    set_has_delcamreq();
    cmd_.delcamreq_ = delcamreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.delCamReq)
}

// .LinkDelCamResp delCamResp = 208;
bool LinkCmd::has_delcamresp() const {
  return cmd_case() == kDelCamResp;
}
void LinkCmd::set_has_delcamresp() {
  _oneof_case_[0] = kDelCamResp;
}
void LinkCmd::clear_delcamresp() {
  if (has_delcamresp()) {
    delete cmd_.delcamresp_;
    clear_has_cmd();
  }
}
 const ::LinkDelCamResp& LinkCmd::delcamresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.delCamResp)
  return has_delcamresp()
      ? *cmd_.delcamresp_
      : ::LinkDelCamResp::default_instance();
}
::LinkDelCamResp* LinkCmd::mutable_delcamresp() {
  if (!has_delcamresp()) {
    clear_cmd();
    set_has_delcamresp();
    cmd_.delcamresp_ = new ::LinkDelCamResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.delCamResp)
  return cmd_.delcamresp_;
}
::LinkDelCamResp* LinkCmd::release_delcamresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.delCamResp)
  if (has_delcamresp()) {
    clear_has_cmd();
    ::LinkDelCamResp* temp = cmd_.delcamresp_;
    cmd_.delcamresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_delcamresp(::LinkDelCamResp* delcamresp) {
  clear_cmd();
  if (delcamresp) {
    set_has_delcamresp();
    cmd_.delcamresp_ = delcamresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.delCamResp)
}

// .LinkSetCamSchedReq setCamSchedReq = 209;
bool LinkCmd::has_setcamschedreq() const {
  return cmd_case() == kSetCamSchedReq;
}
void LinkCmd::set_has_setcamschedreq() {
  _oneof_case_[0] = kSetCamSchedReq;
}
void LinkCmd::clear_setcamschedreq() {
  if (has_setcamschedreq()) {
    delete cmd_.setcamschedreq_;
    clear_has_cmd();
  }
}
 const ::LinkSetCamSchedReq& LinkCmd::setcamschedreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.setCamSchedReq)
  return has_setcamschedreq()
      ? *cmd_.setcamschedreq_
      : ::LinkSetCamSchedReq::default_instance();
}
::LinkSetCamSchedReq* LinkCmd::mutable_setcamschedreq() {
  if (!has_setcamschedreq()) {
    clear_cmd();
    set_has_setcamschedreq();
    cmd_.setcamschedreq_ = new ::LinkSetCamSchedReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.setCamSchedReq)
  return cmd_.setcamschedreq_;
}
::LinkSetCamSchedReq* LinkCmd::release_setcamschedreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.setCamSchedReq)
  if (has_setcamschedreq()) {
    clear_has_cmd();
    ::LinkSetCamSchedReq* temp = cmd_.setcamschedreq_;
    cmd_.setcamschedreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_setcamschedreq(::LinkSetCamSchedReq* setcamschedreq) {
  clear_cmd();
  if (setcamschedreq) {
    set_has_setcamschedreq();
    cmd_.setcamschedreq_ = setcamschedreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.setCamSchedReq)
}

// .LinkSetCamSchedResp setCamSchedResp = 210;
bool LinkCmd::has_setcamschedresp() const {
  return cmd_case() == kSetCamSchedResp;
}
void LinkCmd::set_has_setcamschedresp() {
  _oneof_case_[0] = kSetCamSchedResp;
}
void LinkCmd::clear_setcamschedresp() {
  if (has_setcamschedresp()) {
    delete cmd_.setcamschedresp_;
    clear_has_cmd();
  }
}
 const ::LinkSetCamSchedResp& LinkCmd::setcamschedresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.setCamSchedResp)
  return has_setcamschedresp()
      ? *cmd_.setcamschedresp_
      : ::LinkSetCamSchedResp::default_instance();
}
::LinkSetCamSchedResp* LinkCmd::mutable_setcamschedresp() {
  if (!has_setcamschedresp()) {
    clear_cmd();
    set_has_setcamschedresp();
    cmd_.setcamschedresp_ = new ::LinkSetCamSchedResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.setCamSchedResp)
  return cmd_.setcamschedresp_;
}
::LinkSetCamSchedResp* LinkCmd::release_setcamschedresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.setCamSchedResp)
  if (has_setcamschedresp()) {
    clear_has_cmd();
    ::LinkSetCamSchedResp* temp = cmd_.setcamschedresp_;
    cmd_.setcamschedresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_setcamschedresp(::LinkSetCamSchedResp* setcamschedresp) {
  clear_cmd();
  if (setcamschedresp) {
    set_has_setcamschedresp();
    cmd_.setcamschedresp_ = setcamschedresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.setCamSchedResp)
}

// .LinkGetStreamListReq getStreamListReq = 211;
bool LinkCmd::has_getstreamlistreq() const {
  return cmd_case() == kGetStreamListReq;
}
void LinkCmd::set_has_getstreamlistreq() {
  _oneof_case_[0] = kGetStreamListReq;
}
void LinkCmd::clear_getstreamlistreq() {
  if (has_getstreamlistreq()) {
    delete cmd_.getstreamlistreq_;
    clear_has_cmd();
  }
}
 const ::LinkGetStreamListReq& LinkCmd::getstreamlistreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.getStreamListReq)
  return has_getstreamlistreq()
      ? *cmd_.getstreamlistreq_
      : ::LinkGetStreamListReq::default_instance();
}
::LinkGetStreamListReq* LinkCmd::mutable_getstreamlistreq() {
  if (!has_getstreamlistreq()) {
    clear_cmd();
    set_has_getstreamlistreq();
    cmd_.getstreamlistreq_ = new ::LinkGetStreamListReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.getStreamListReq)
  return cmd_.getstreamlistreq_;
}
::LinkGetStreamListReq* LinkCmd::release_getstreamlistreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.getStreamListReq)
  if (has_getstreamlistreq()) {
    clear_has_cmd();
    ::LinkGetStreamListReq* temp = cmd_.getstreamlistreq_;
    cmd_.getstreamlistreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_getstreamlistreq(::LinkGetStreamListReq* getstreamlistreq) {
  clear_cmd();
  if (getstreamlistreq) {
    set_has_getstreamlistreq();
    cmd_.getstreamlistreq_ = getstreamlistreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.getStreamListReq)
}

// .LinkGetStreamListResp getStreamListResp = 212;
bool LinkCmd::has_getstreamlistresp() const {
  return cmd_case() == kGetStreamListResp;
}
void LinkCmd::set_has_getstreamlistresp() {
  _oneof_case_[0] = kGetStreamListResp;
}
void LinkCmd::clear_getstreamlistresp() {
  if (has_getstreamlistresp()) {
    delete cmd_.getstreamlistresp_;
    clear_has_cmd();
  }
}
 const ::LinkGetStreamListResp& LinkCmd::getstreamlistresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.getStreamListResp)
  return has_getstreamlistresp()
      ? *cmd_.getstreamlistresp_
      : ::LinkGetStreamListResp::default_instance();
}
::LinkGetStreamListResp* LinkCmd::mutable_getstreamlistresp() {
  if (!has_getstreamlistresp()) {
    clear_cmd();
    set_has_getstreamlistresp();
    cmd_.getstreamlistresp_ = new ::LinkGetStreamListResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.getStreamListResp)
  return cmd_.getstreamlistresp_;
}
::LinkGetStreamListResp* LinkCmd::release_getstreamlistresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.getStreamListResp)
  if (has_getstreamlistresp()) {
    clear_has_cmd();
    ::LinkGetStreamListResp* temp = cmd_.getstreamlistresp_;
    cmd_.getstreamlistresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_getstreamlistresp(::LinkGetStreamListResp* getstreamlistresp) {
  clear_cmd();
  if (getstreamlistresp) {
    set_has_getstreamlistresp();
    cmd_.getstreamlistresp_ = getstreamlistresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.getStreamListResp)
}

// .LinkVidDiskListReq diskListReq = 301;
bool LinkCmd::has_disklistreq() const {
  return cmd_case() == kDiskListReq;
}
void LinkCmd::set_has_disklistreq() {
  _oneof_case_[0] = kDiskListReq;
}
void LinkCmd::clear_disklistreq() {
  if (has_disklistreq()) {
    delete cmd_.disklistreq_;
    clear_has_cmd();
  }
}
 const ::LinkVidDiskListReq& LinkCmd::disklistreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.diskListReq)
  return has_disklistreq()
      ? *cmd_.disklistreq_
      : ::LinkVidDiskListReq::default_instance();
}
::LinkVidDiskListReq* LinkCmd::mutable_disklistreq() {
  if (!has_disklistreq()) {
    clear_cmd();
    set_has_disklistreq();
    cmd_.disklistreq_ = new ::LinkVidDiskListReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.diskListReq)
  return cmd_.disklistreq_;
}
::LinkVidDiskListReq* LinkCmd::release_disklistreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.diskListReq)
  if (has_disklistreq()) {
    clear_has_cmd();
    ::LinkVidDiskListReq* temp = cmd_.disklistreq_;
    cmd_.disklistreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_disklistreq(::LinkVidDiskListReq* disklistreq) {
  clear_cmd();
  if (disklistreq) {
    set_has_disklistreq();
    cmd_.disklistreq_ = disklistreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.diskListReq)
}

// .LinkVidDiskListResp diskListResp = 302;
bool LinkCmd::has_disklistresp() const {
  return cmd_case() == kDiskListResp;
}
void LinkCmd::set_has_disklistresp() {
  _oneof_case_[0] = kDiskListResp;
}
void LinkCmd::clear_disklistresp() {
  if (has_disklistresp()) {
    delete cmd_.disklistresp_;
    clear_has_cmd();
  }
}
 const ::LinkVidDiskListResp& LinkCmd::disklistresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.diskListResp)
  return has_disklistresp()
      ? *cmd_.disklistresp_
      : ::LinkVidDiskListResp::default_instance();
}
::LinkVidDiskListResp* LinkCmd::mutable_disklistresp() {
  if (!has_disklistresp()) {
    clear_cmd();
    set_has_disklistresp();
    cmd_.disklistresp_ = new ::LinkVidDiskListResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.diskListResp)
  return cmd_.disklistresp_;
}
::LinkVidDiskListResp* LinkCmd::release_disklistresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.diskListResp)
  if (has_disklistresp()) {
    clear_has_cmd();
    ::LinkVidDiskListResp* temp = cmd_.disklistresp_;
    cmd_.disklistresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_disklistresp(::LinkVidDiskListResp* disklistresp) {
  clear_cmd();
  if (disklistresp) {
    set_has_disklistresp();
    cmd_.disklistresp_ = disklistresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.diskListResp)
}

// .LinkSysVidDiskListReq sysDiskListReq = 303;
bool LinkCmd::has_sysdisklistreq() const {
  return cmd_case() == kSysDiskListReq;
}
void LinkCmd::set_has_sysdisklistreq() {
  _oneof_case_[0] = kSysDiskListReq;
}
void LinkCmd::clear_sysdisklistreq() {
  if (has_sysdisklistreq()) {
    delete cmd_.sysdisklistreq_;
    clear_has_cmd();
  }
}
 const ::LinkSysVidDiskListReq& LinkCmd::sysdisklistreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.sysDiskListReq)
  return has_sysdisklistreq()
      ? *cmd_.sysdisklistreq_
      : ::LinkSysVidDiskListReq::default_instance();
}
::LinkSysVidDiskListReq* LinkCmd::mutable_sysdisklistreq() {
  if (!has_sysdisklistreq()) {
    clear_cmd();
    set_has_sysdisklistreq();
    cmd_.sysdisklistreq_ = new ::LinkSysVidDiskListReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.sysDiskListReq)
  return cmd_.sysdisklistreq_;
}
::LinkSysVidDiskListReq* LinkCmd::release_sysdisklistreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.sysDiskListReq)
  if (has_sysdisklistreq()) {
    clear_has_cmd();
    ::LinkSysVidDiskListReq* temp = cmd_.sysdisklistreq_;
    cmd_.sysdisklistreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_sysdisklistreq(::LinkSysVidDiskListReq* sysdisklistreq) {
  clear_cmd();
  if (sysdisklistreq) {
    set_has_sysdisklistreq();
    cmd_.sysdisklistreq_ = sysdisklistreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.sysDiskListReq)
}

// .LinkSysVidDiskListResp sysDiskListResp = 304;
bool LinkCmd::has_sysdisklistresp() const {
  return cmd_case() == kSysDiskListResp;
}
void LinkCmd::set_has_sysdisklistresp() {
  _oneof_case_[0] = kSysDiskListResp;
}
void LinkCmd::clear_sysdisklistresp() {
  if (has_sysdisklistresp()) {
    delete cmd_.sysdisklistresp_;
    clear_has_cmd();
  }
}
 const ::LinkSysVidDiskListResp& LinkCmd::sysdisklistresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.sysDiskListResp)
  return has_sysdisklistresp()
      ? *cmd_.sysdisklistresp_
      : ::LinkSysVidDiskListResp::default_instance();
}
::LinkSysVidDiskListResp* LinkCmd::mutable_sysdisklistresp() {
  if (!has_sysdisklistresp()) {
    clear_cmd();
    set_has_sysdisklistresp();
    cmd_.sysdisklistresp_ = new ::LinkSysVidDiskListResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.sysDiskListResp)
  return cmd_.sysdisklistresp_;
}
::LinkSysVidDiskListResp* LinkCmd::release_sysdisklistresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.sysDiskListResp)
  if (has_sysdisklistresp()) {
    clear_has_cmd();
    ::LinkSysVidDiskListResp* temp = cmd_.sysdisklistresp_;
    cmd_.sysdisklistresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_sysdisklistresp(::LinkSysVidDiskListResp* sysdisklistresp) {
  clear_cmd();
  if (sysdisklistresp) {
    set_has_sysdisklistresp();
    cmd_.sysdisklistresp_ = sysdisklistresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.sysDiskListResp)
}

// .LinkAddDiskReq addDiskReq = 305;
bool LinkCmd::has_adddiskreq() const {
  return cmd_case() == kAddDiskReq;
}
void LinkCmd::set_has_adddiskreq() {
  _oneof_case_[0] = kAddDiskReq;
}
void LinkCmd::clear_adddiskreq() {
  if (has_adddiskreq()) {
    delete cmd_.adddiskreq_;
    clear_has_cmd();
  }
}
 const ::LinkAddDiskReq& LinkCmd::adddiskreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.addDiskReq)
  return has_adddiskreq()
      ? *cmd_.adddiskreq_
      : ::LinkAddDiskReq::default_instance();
}
::LinkAddDiskReq* LinkCmd::mutable_adddiskreq() {
  if (!has_adddiskreq()) {
    clear_cmd();
    set_has_adddiskreq();
    cmd_.adddiskreq_ = new ::LinkAddDiskReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.addDiskReq)
  return cmd_.adddiskreq_;
}
::LinkAddDiskReq* LinkCmd::release_adddiskreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.addDiskReq)
  if (has_adddiskreq()) {
    clear_has_cmd();
    ::LinkAddDiskReq* temp = cmd_.adddiskreq_;
    cmd_.adddiskreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_adddiskreq(::LinkAddDiskReq* adddiskreq) {
  clear_cmd();
  if (adddiskreq) {
    set_has_adddiskreq();
    cmd_.adddiskreq_ = adddiskreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.addDiskReq)
}

// .LinkAddDiskResp addDiskResp = 306;
bool LinkCmd::has_adddiskresp() const {
  return cmd_case() == kAddDiskResp;
}
void LinkCmd::set_has_adddiskresp() {
  _oneof_case_[0] = kAddDiskResp;
}
void LinkCmd::clear_adddiskresp() {
  if (has_adddiskresp()) {
    delete cmd_.adddiskresp_;
    clear_has_cmd();
  }
}
 const ::LinkAddDiskResp& LinkCmd::adddiskresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.addDiskResp)
  return has_adddiskresp()
      ? *cmd_.adddiskresp_
      : ::LinkAddDiskResp::default_instance();
}
::LinkAddDiskResp* LinkCmd::mutable_adddiskresp() {
  if (!has_adddiskresp()) {
    clear_cmd();
    set_has_adddiskresp();
    cmd_.adddiskresp_ = new ::LinkAddDiskResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.addDiskResp)
  return cmd_.adddiskresp_;
}
::LinkAddDiskResp* LinkCmd::release_adddiskresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.addDiskResp)
  if (has_adddiskresp()) {
    clear_has_cmd();
    ::LinkAddDiskResp* temp = cmd_.adddiskresp_;
    cmd_.adddiskresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_adddiskresp(::LinkAddDiskResp* adddiskresp) {
  clear_cmd();
  if (adddiskresp) {
    set_has_adddiskresp();
    cmd_.adddiskresp_ = adddiskresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.addDiskResp)
}

// .LinkDelDiskReq delDiskReq = 307;
bool LinkCmd::has_deldiskreq() const {
  return cmd_case() == kDelDiskReq;
}
void LinkCmd::set_has_deldiskreq() {
  _oneof_case_[0] = kDelDiskReq;
}
void LinkCmd::clear_deldiskreq() {
  if (has_deldiskreq()) {
    delete cmd_.deldiskreq_;
    clear_has_cmd();
  }
}
 const ::LinkDelDiskReq& LinkCmd::deldiskreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.delDiskReq)
  return has_deldiskreq()
      ? *cmd_.deldiskreq_
      : ::LinkDelDiskReq::default_instance();
}
::LinkDelDiskReq* LinkCmd::mutable_deldiskreq() {
  if (!has_deldiskreq()) {
    clear_cmd();
    set_has_deldiskreq();
    cmd_.deldiskreq_ = new ::LinkDelDiskReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.delDiskReq)
  return cmd_.deldiskreq_;
}
::LinkDelDiskReq* LinkCmd::release_deldiskreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.delDiskReq)
  if (has_deldiskreq()) {
    clear_has_cmd();
    ::LinkDelDiskReq* temp = cmd_.deldiskreq_;
    cmd_.deldiskreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_deldiskreq(::LinkDelDiskReq* deldiskreq) {
  clear_cmd();
  if (deldiskreq) {
    set_has_deldiskreq();
    cmd_.deldiskreq_ = deldiskreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.delDiskReq)
}

// .LinkDelDiskResp delDiskResp = 308;
bool LinkCmd::has_deldiskresp() const {
  return cmd_case() == kDelDiskResp;
}
void LinkCmd::set_has_deldiskresp() {
  _oneof_case_[0] = kDelDiskResp;
}
void LinkCmd::clear_deldiskresp() {
  if (has_deldiskresp()) {
    delete cmd_.deldiskresp_;
    clear_has_cmd();
  }
}
 const ::LinkDelDiskResp& LinkCmd::deldiskresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.delDiskResp)
  return has_deldiskresp()
      ? *cmd_.deldiskresp_
      : ::LinkDelDiskResp::default_instance();
}
::LinkDelDiskResp* LinkCmd::mutable_deldiskresp() {
  if (!has_deldiskresp()) {
    clear_cmd();
    set_has_deldiskresp();
    cmd_.deldiskresp_ = new ::LinkDelDiskResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.delDiskResp)
  return cmd_.deldiskresp_;
}
::LinkDelDiskResp* LinkCmd::release_deldiskresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.delDiskResp)
  if (has_deldiskresp()) {
    clear_has_cmd();
    ::LinkDelDiskResp* temp = cmd_.deldiskresp_;
    cmd_.deldiskresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_deldiskresp(::LinkDelDiskResp* deldiskresp) {
  clear_cmd();
  if (deldiskresp) {
    set_has_deldiskresp();
    cmd_.deldiskresp_ = deldiskresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.delDiskResp)
}

// .LinkUpdateDiskLimitReq diskLimitReq = 309;
bool LinkCmd::has_disklimitreq() const {
  return cmd_case() == kDiskLimitReq;
}
void LinkCmd::set_has_disklimitreq() {
  _oneof_case_[0] = kDiskLimitReq;
}
void LinkCmd::clear_disklimitreq() {
  if (has_disklimitreq()) {
    delete cmd_.disklimitreq_;
    clear_has_cmd();
  }
}
 const ::LinkUpdateDiskLimitReq& LinkCmd::disklimitreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.diskLimitReq)
  return has_disklimitreq()
      ? *cmd_.disklimitreq_
      : ::LinkUpdateDiskLimitReq::default_instance();
}
::LinkUpdateDiskLimitReq* LinkCmd::mutable_disklimitreq() {
  if (!has_disklimitreq()) {
    clear_cmd();
    set_has_disklimitreq();
    cmd_.disklimitreq_ = new ::LinkUpdateDiskLimitReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.diskLimitReq)
  return cmd_.disklimitreq_;
}
::LinkUpdateDiskLimitReq* LinkCmd::release_disklimitreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.diskLimitReq)
  if (has_disklimitreq()) {
    clear_has_cmd();
    ::LinkUpdateDiskLimitReq* temp = cmd_.disklimitreq_;
    cmd_.disklimitreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_disklimitreq(::LinkUpdateDiskLimitReq* disklimitreq) {
  clear_cmd();
  if (disklimitreq) {
    set_has_disklimitreq();
    cmd_.disklimitreq_ = disklimitreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.diskLimitReq)
}

// .LinkUpdateDiskLimitResp diskLimitResp = 310;
bool LinkCmd::has_disklimitresp() const {
  return cmd_case() == kDiskLimitResp;
}
void LinkCmd::set_has_disklimitresp() {
  _oneof_case_[0] = kDiskLimitResp;
}
void LinkCmd::clear_disklimitresp() {
  if (has_disklimitresp()) {
    delete cmd_.disklimitresp_;
    clear_has_cmd();
  }
}
 const ::LinkUpdateDiskLimitResp& LinkCmd::disklimitresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.diskLimitResp)
  return has_disklimitresp()
      ? *cmd_.disklimitresp_
      : ::LinkUpdateDiskLimitResp::default_instance();
}
::LinkUpdateDiskLimitResp* LinkCmd::mutable_disklimitresp() {
  if (!has_disklimitresp()) {
    clear_cmd();
    set_has_disklimitresp();
    cmd_.disklimitresp_ = new ::LinkUpdateDiskLimitResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.diskLimitResp)
  return cmd_.disklimitresp_;
}
::LinkUpdateDiskLimitResp* LinkCmd::release_disklimitresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.diskLimitResp)
  if (has_disklimitresp()) {
    clear_has_cmd();
    ::LinkUpdateDiskLimitResp* temp = cmd_.disklimitresp_;
    cmd_.disklimitresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_disklimitresp(::LinkUpdateDiskLimitResp* disklimitresp) {
  clear_cmd();
  if (disklimitresp) {
    set_has_disklimitresp();
    cmd_.disklimitresp_ = disklimitresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.diskLimitResp)
}

// .LinkGetLicReq licReq = 401;
bool LinkCmd::has_licreq() const {
  return cmd_case() == kLicReq;
}
void LinkCmd::set_has_licreq() {
  _oneof_case_[0] = kLicReq;
}
void LinkCmd::clear_licreq() {
  if (has_licreq()) {
    delete cmd_.licreq_;
    clear_has_cmd();
  }
}
 const ::LinkGetLicReq& LinkCmd::licreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.licReq)
  return has_licreq()
      ? *cmd_.licreq_
      : ::LinkGetLicReq::default_instance();
}
::LinkGetLicReq* LinkCmd::mutable_licreq() {
  if (!has_licreq()) {
    clear_cmd();
    set_has_licreq();
    cmd_.licreq_ = new ::LinkGetLicReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.licReq)
  return cmd_.licreq_;
}
::LinkGetLicReq* LinkCmd::release_licreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.licReq)
  if (has_licreq()) {
    clear_has_cmd();
    ::LinkGetLicReq* temp = cmd_.licreq_;
    cmd_.licreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_licreq(::LinkGetLicReq* licreq) {
  clear_cmd();
  if (licreq) {
    set_has_licreq();
    cmd_.licreq_ = licreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.licReq)
}

// .LinkGetLicResp licResp = 402;
bool LinkCmd::has_licresp() const {
  return cmd_case() == kLicResp;
}
void LinkCmd::set_has_licresp() {
  _oneof_case_[0] = kLicResp;
}
void LinkCmd::clear_licresp() {
  if (has_licresp()) {
    delete cmd_.licresp_;
    clear_has_cmd();
  }
}
 const ::LinkGetLicResp& LinkCmd::licresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.licResp)
  return has_licresp()
      ? *cmd_.licresp_
      : ::LinkGetLicResp::default_instance();
}
::LinkGetLicResp* LinkCmd::mutable_licresp() {
  if (!has_licresp()) {
    clear_cmd();
    set_has_licresp();
    cmd_.licresp_ = new ::LinkGetLicResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.licResp)
  return cmd_.licresp_;
}
::LinkGetLicResp* LinkCmd::release_licresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.licResp)
  if (has_licresp()) {
    clear_has_cmd();
    ::LinkGetLicResp* temp = cmd_.licresp_;
    cmd_.licresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_licresp(::LinkGetLicResp* licresp) {
  clear_cmd();
  if (licresp) {
    set_has_licresp();
    cmd_.licresp_ = licresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.licResp)
}

// .LinkGetVerReq verReq = 403;
bool LinkCmd::has_verreq() const {
  return cmd_case() == kVerReq;
}
void LinkCmd::set_has_verreq() {
  _oneof_case_[0] = kVerReq;
}
void LinkCmd::clear_verreq() {
  if (has_verreq()) {
    delete cmd_.verreq_;
    clear_has_cmd();
  }
}
 const ::LinkGetVerReq& LinkCmd::verreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.verReq)
  return has_verreq()
      ? *cmd_.verreq_
      : ::LinkGetVerReq::default_instance();
}
::LinkGetVerReq* LinkCmd::mutable_verreq() {
  if (!has_verreq()) {
    clear_cmd();
    set_has_verreq();
    cmd_.verreq_ = new ::LinkGetVerReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.verReq)
  return cmd_.verreq_;
}
::LinkGetVerReq* LinkCmd::release_verreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.verReq)
  if (has_verreq()) {
    clear_has_cmd();
    ::LinkGetVerReq* temp = cmd_.verreq_;
    cmd_.verreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_verreq(::LinkGetVerReq* verreq) {
  clear_cmd();
  if (verreq) {
    set_has_verreq();
    cmd_.verreq_ = verreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.verReq)
}

// .LinkGetVerResp verResp = 404;
bool LinkCmd::has_verresp() const {
  return cmd_case() == kVerResp;
}
void LinkCmd::set_has_verresp() {
  _oneof_case_[0] = kVerResp;
}
void LinkCmd::clear_verresp() {
  if (has_verresp()) {
    delete cmd_.verresp_;
    clear_has_cmd();
  }
}
 const ::LinkGetVerResp& LinkCmd::verresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.verResp)
  return has_verresp()
      ? *cmd_.verresp_
      : ::LinkGetVerResp::default_instance();
}
::LinkGetVerResp* LinkCmd::mutable_verresp() {
  if (!has_verresp()) {
    clear_cmd();
    set_has_verresp();
    cmd_.verresp_ = new ::LinkGetVerResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.verResp)
  return cmd_.verresp_;
}
::LinkGetVerResp* LinkCmd::release_verresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.verResp)
  if (has_verresp()) {
    clear_has_cmd();
    ::LinkGetVerResp* temp = cmd_.verresp_;
    cmd_.verresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_verresp(::LinkGetVerResp* verresp) {
  clear_cmd();
  if (verresp) {
    set_has_verresp();
    cmd_.verresp_ = verresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.verResp)
}

// .LinkConfLicReq confLicReq = 405;
bool LinkCmd::has_conflicreq() const {
  return cmd_case() == kConfLicReq;
}
void LinkCmd::set_has_conflicreq() {
  _oneof_case_[0] = kConfLicReq;
}
void LinkCmd::clear_conflicreq() {
  if (has_conflicreq()) {
    delete cmd_.conflicreq_;
    clear_has_cmd();
  }
}
 const ::LinkConfLicReq& LinkCmd::conflicreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.confLicReq)
  return has_conflicreq()
      ? *cmd_.conflicreq_
      : ::LinkConfLicReq::default_instance();
}
::LinkConfLicReq* LinkCmd::mutable_conflicreq() {
  if (!has_conflicreq()) {
    clear_cmd();
    set_has_conflicreq();
    cmd_.conflicreq_ = new ::LinkConfLicReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.confLicReq)
  return cmd_.conflicreq_;
}
::LinkConfLicReq* LinkCmd::release_conflicreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.confLicReq)
  if (has_conflicreq()) {
    clear_has_cmd();
    ::LinkConfLicReq* temp = cmd_.conflicreq_;
    cmd_.conflicreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_conflicreq(::LinkConfLicReq* conflicreq) {
  clear_cmd();
  if (conflicreq) {
    set_has_conflicreq();
    cmd_.conflicreq_ = conflicreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.confLicReq)
}

// .LinkConfLicResp confLicResp = 406;
bool LinkCmd::has_conflicresp() const {
  return cmd_case() == kConfLicResp;
}
void LinkCmd::set_has_conflicresp() {
  _oneof_case_[0] = kConfLicResp;
}
void LinkCmd::clear_conflicresp() {
  if (has_conflicresp()) {
    delete cmd_.conflicresp_;
    clear_has_cmd();
  }
}
 const ::LinkConfLicResp& LinkCmd::conflicresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.confLicResp)
  return has_conflicresp()
      ? *cmd_.conflicresp_
      : ::LinkConfLicResp::default_instance();
}
::LinkConfLicResp* LinkCmd::mutable_conflicresp() {
  if (!has_conflicresp()) {
    clear_cmd();
    set_has_conflicresp();
    cmd_.conflicresp_ = new ::LinkConfLicResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.confLicResp)
  return cmd_.conflicresp_;
}
::LinkConfLicResp* LinkCmd::release_conflicresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.confLicResp)
  if (has_conflicresp()) {
    clear_has_cmd();
    ::LinkConfLicResp* temp = cmd_.conflicresp_;
    cmd_.conflicresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_conflicresp(::LinkConfLicResp* conflicresp) {
  clear_cmd();
  if (conflicresp) {
    set_has_conflicresp();
    cmd_.conflicresp_ = conflicresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.confLicResp)
}

// .LinkAddUserReq addUserReq = 501;
bool LinkCmd::has_adduserreq() const {
  return cmd_case() == kAddUserReq;
}
void LinkCmd::set_has_adduserreq() {
  _oneof_case_[0] = kAddUserReq;
}
void LinkCmd::clear_adduserreq() {
  if (has_adduserreq()) {
    delete cmd_.adduserreq_;
    clear_has_cmd();
  }
}
 const ::LinkAddUserReq& LinkCmd::adduserreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.addUserReq)
  return has_adduserreq()
      ? *cmd_.adduserreq_
      : ::LinkAddUserReq::default_instance();
}
::LinkAddUserReq* LinkCmd::mutable_adduserreq() {
  if (!has_adduserreq()) {
    clear_cmd();
    set_has_adduserreq();
    cmd_.adduserreq_ = new ::LinkAddUserReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.addUserReq)
  return cmd_.adduserreq_;
}
::LinkAddUserReq* LinkCmd::release_adduserreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.addUserReq)
  if (has_adduserreq()) {
    clear_has_cmd();
    ::LinkAddUserReq* temp = cmd_.adduserreq_;
    cmd_.adduserreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_adduserreq(::LinkAddUserReq* adduserreq) {
  clear_cmd();
  if (adduserreq) {
    set_has_adduserreq();
    cmd_.adduserreq_ = adduserreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.addUserReq)
}

// .LinkAddUserResp addUserResp = 502;
bool LinkCmd::has_adduserresp() const {
  return cmd_case() == kAddUserResp;
}
void LinkCmd::set_has_adduserresp() {
  _oneof_case_[0] = kAddUserResp;
}
void LinkCmd::clear_adduserresp() {
  if (has_adduserresp()) {
    delete cmd_.adduserresp_;
    clear_has_cmd();
  }
}
 const ::LinkAddUserResp& LinkCmd::adduserresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.addUserResp)
  return has_adduserresp()
      ? *cmd_.adduserresp_
      : ::LinkAddUserResp::default_instance();
}
::LinkAddUserResp* LinkCmd::mutable_adduserresp() {
  if (!has_adduserresp()) {
    clear_cmd();
    set_has_adduserresp();
    cmd_.adduserresp_ = new ::LinkAddUserResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.addUserResp)
  return cmd_.adduserresp_;
}
::LinkAddUserResp* LinkCmd::release_adduserresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.addUserResp)
  if (has_adduserresp()) {
    clear_has_cmd();
    ::LinkAddUserResp* temp = cmd_.adduserresp_;
    cmd_.adduserresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_adduserresp(::LinkAddUserResp* adduserresp) {
  clear_cmd();
  if (adduserresp) {
    set_has_adduserresp();
    cmd_.adduserresp_ = adduserresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.addUserResp)
}

// .LinkHasRecordReq hasRecReq = 601;
bool LinkCmd::has_hasrecreq() const {
  return cmd_case() == kHasRecReq;
}
void LinkCmd::set_has_hasrecreq() {
  _oneof_case_[0] = kHasRecReq;
}
void LinkCmd::clear_hasrecreq() {
  if (has_hasrecreq()) {
    delete cmd_.hasrecreq_;
    clear_has_cmd();
  }
}
 const ::LinkHasRecordReq& LinkCmd::hasrecreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.hasRecReq)
  return has_hasrecreq()
      ? *cmd_.hasrecreq_
      : ::LinkHasRecordReq::default_instance();
}
::LinkHasRecordReq* LinkCmd::mutable_hasrecreq() {
  if (!has_hasrecreq()) {
    clear_cmd();
    set_has_hasrecreq();
    cmd_.hasrecreq_ = new ::LinkHasRecordReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.hasRecReq)
  return cmd_.hasrecreq_;
}
::LinkHasRecordReq* LinkCmd::release_hasrecreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.hasRecReq)
  if (has_hasrecreq()) {
    clear_has_cmd();
    ::LinkHasRecordReq* temp = cmd_.hasrecreq_;
    cmd_.hasrecreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_hasrecreq(::LinkHasRecordReq* hasrecreq) {
  clear_cmd();
  if (hasrecreq) {
    set_has_hasrecreq();
    cmd_.hasrecreq_ = hasrecreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.hasRecReq)
}

// .LinkHasRecordResp hasRecResp = 602;
bool LinkCmd::has_hasrecresp() const {
  return cmd_case() == kHasRecResp;
}
void LinkCmd::set_has_hasrecresp() {
  _oneof_case_[0] = kHasRecResp;
}
void LinkCmd::clear_hasrecresp() {
  if (has_hasrecresp()) {
    delete cmd_.hasrecresp_;
    clear_has_cmd();
  }
}
 const ::LinkHasRecordResp& LinkCmd::hasrecresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.hasRecResp)
  return has_hasrecresp()
      ? *cmd_.hasrecresp_
      : ::LinkHasRecordResp::default_instance();
}
::LinkHasRecordResp* LinkCmd::mutable_hasrecresp() {
  if (!has_hasrecresp()) {
    clear_cmd();
    set_has_hasrecresp();
    cmd_.hasrecresp_ = new ::LinkHasRecordResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.hasRecResp)
  return cmd_.hasrecresp_;
}
::LinkHasRecordResp* LinkCmd::release_hasrecresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.hasRecResp)
  if (has_hasrecresp()) {
    clear_has_cmd();
    ::LinkHasRecordResp* temp = cmd_.hasrecresp_;
    cmd_.hasrecresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_hasrecresp(::LinkHasRecordResp* hasrecresp) {
  clear_cmd();
  if (hasrecresp) {
    set_has_hasrecresp();
    cmd_.hasrecresp_ = hasrecresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.hasRecResp)
}

// .LinkSearchRecordReq searchRecReq = 603;
bool LinkCmd::has_searchrecreq() const {
  return cmd_case() == kSearchRecReq;
}
void LinkCmd::set_has_searchrecreq() {
  _oneof_case_[0] = kSearchRecReq;
}
void LinkCmd::clear_searchrecreq() {
  if (has_searchrecreq()) {
    delete cmd_.searchrecreq_;
    clear_has_cmd();
  }
}
 const ::LinkSearchRecordReq& LinkCmd::searchrecreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.searchRecReq)
  return has_searchrecreq()
      ? *cmd_.searchrecreq_
      : ::LinkSearchRecordReq::default_instance();
}
::LinkSearchRecordReq* LinkCmd::mutable_searchrecreq() {
  if (!has_searchrecreq()) {
    clear_cmd();
    set_has_searchrecreq();
    cmd_.searchrecreq_ = new ::LinkSearchRecordReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.searchRecReq)
  return cmd_.searchrecreq_;
}
::LinkSearchRecordReq* LinkCmd::release_searchrecreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.searchRecReq)
  if (has_searchrecreq()) {
    clear_has_cmd();
    ::LinkSearchRecordReq* temp = cmd_.searchrecreq_;
    cmd_.searchrecreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_searchrecreq(::LinkSearchRecordReq* searchrecreq) {
  clear_cmd();
  if (searchrecreq) {
    set_has_searchrecreq();
    cmd_.searchrecreq_ = searchrecreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.searchRecReq)
}

// .LinkSearchRecordResp searchRecResp = 604;
bool LinkCmd::has_searchrecresp() const {
  return cmd_case() == kSearchRecResp;
}
void LinkCmd::set_has_searchrecresp() {
  _oneof_case_[0] = kSearchRecResp;
}
void LinkCmd::clear_searchrecresp() {
  if (has_searchrecresp()) {
    delete cmd_.searchrecresp_;
    clear_has_cmd();
  }
}
 const ::LinkSearchRecordResp& LinkCmd::searchrecresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.searchRecResp)
  return has_searchrecresp()
      ? *cmd_.searchrecresp_
      : ::LinkSearchRecordResp::default_instance();
}
::LinkSearchRecordResp* LinkCmd::mutable_searchrecresp() {
  if (!has_searchrecresp()) {
    clear_cmd();
    set_has_searchrecresp();
    cmd_.searchrecresp_ = new ::LinkSearchRecordResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.searchRecResp)
  return cmd_.searchrecresp_;
}
::LinkSearchRecordResp* LinkCmd::release_searchrecresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.searchRecResp)
  if (has_searchrecresp()) {
    clear_has_cmd();
    ::LinkSearchRecordResp* temp = cmd_.searchrecresp_;
    cmd_.searchrecresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_searchrecresp(::LinkSearchRecordResp* searchrecresp) {
  clear_cmd();
  if (searchrecresp) {
    set_has_searchrecresp();
    cmd_.searchrecresp_ = searchrecresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.searchRecResp)
}

// .LinkStartLiveCmd startLiveCmd = 701;
bool LinkCmd::has_startlivecmd() const {
  return cmd_case() == kStartLiveCmd;
}
void LinkCmd::set_has_startlivecmd() {
  _oneof_case_[0] = kStartLiveCmd;
}
void LinkCmd::clear_startlivecmd() {
  if (has_startlivecmd()) {
    delete cmd_.startlivecmd_;
    clear_has_cmd();
  }
}
 const ::LinkStartLiveCmd& LinkCmd::startlivecmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.startLiveCmd)
  return has_startlivecmd()
      ? *cmd_.startlivecmd_
      : ::LinkStartLiveCmd::default_instance();
}
::LinkStartLiveCmd* LinkCmd::mutable_startlivecmd() {
  if (!has_startlivecmd()) {
    clear_cmd();
    set_has_startlivecmd();
    cmd_.startlivecmd_ = new ::LinkStartLiveCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.startLiveCmd)
  return cmd_.startlivecmd_;
}
::LinkStartLiveCmd* LinkCmd::release_startlivecmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.startLiveCmd)
  if (has_startlivecmd()) {
    clear_has_cmd();
    ::LinkStartLiveCmd* temp = cmd_.startlivecmd_;
    cmd_.startlivecmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_startlivecmd(::LinkStartLiveCmd* startlivecmd) {
  clear_cmd();
  if (startlivecmd) {
    set_has_startlivecmd();
    cmd_.startlivecmd_ = startlivecmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.startLiveCmd)
}

// .LinkStopLiveCmd stopLiveCmd = 702;
bool LinkCmd::has_stoplivecmd() const {
  return cmd_case() == kStopLiveCmd;
}
void LinkCmd::set_has_stoplivecmd() {
  _oneof_case_[0] = kStopLiveCmd;
}
void LinkCmd::clear_stoplivecmd() {
  if (has_stoplivecmd()) {
    delete cmd_.stoplivecmd_;
    clear_has_cmd();
  }
}
 const ::LinkStopLiveCmd& LinkCmd::stoplivecmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.stopLiveCmd)
  return has_stoplivecmd()
      ? *cmd_.stoplivecmd_
      : ::LinkStopLiveCmd::default_instance();
}
::LinkStopLiveCmd* LinkCmd::mutable_stoplivecmd() {
  if (!has_stoplivecmd()) {
    clear_cmd();
    set_has_stoplivecmd();
    cmd_.stoplivecmd_ = new ::LinkStopLiveCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.stopLiveCmd)
  return cmd_.stoplivecmd_;
}
::LinkStopLiveCmd* LinkCmd::release_stoplivecmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.stopLiveCmd)
  if (has_stoplivecmd()) {
    clear_has_cmd();
    ::LinkStopLiveCmd* temp = cmd_.stoplivecmd_;
    cmd_.stoplivecmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_stoplivecmd(::LinkStopLiveCmd* stoplivecmd) {
  clear_cmd();
  if (stoplivecmd) {
    set_has_stoplivecmd();
    cmd_.stoplivecmd_ = stoplivecmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.stopLiveCmd)
}

// .LinkPlayBackCmd playBackCmd = 703;
bool LinkCmd::has_playbackcmd() const {
  return cmd_case() == kPlayBackCmd;
}
void LinkCmd::set_has_playbackcmd() {
  _oneof_case_[0] = kPlayBackCmd;
}
void LinkCmd::clear_playbackcmd() {
  if (has_playbackcmd()) {
    delete cmd_.playbackcmd_;
    clear_has_cmd();
  }
}
 const ::LinkPlayBackCmd& LinkCmd::playbackcmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.playBackCmd)
  return has_playbackcmd()
      ? *cmd_.playbackcmd_
      : ::LinkPlayBackCmd::default_instance();
}
::LinkPlayBackCmd* LinkCmd::mutable_playbackcmd() {
  if (!has_playbackcmd()) {
    clear_cmd();
    set_has_playbackcmd();
    cmd_.playbackcmd_ = new ::LinkPlayBackCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.playBackCmd)
  return cmd_.playbackcmd_;
}
::LinkPlayBackCmd* LinkCmd::release_playbackcmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.playBackCmd)
  if (has_playbackcmd()) {
    clear_has_cmd();
    ::LinkPlayBackCmd* temp = cmd_.playbackcmd_;
    cmd_.playbackcmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_playbackcmd(::LinkPlayBackCmd* playbackcmd) {
  clear_cmd();
  if (playbackcmd) {
    set_has_playbackcmd();
    cmd_.playbackcmd_ = playbackcmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.playBackCmd)
}

// .LinkPlayPauseCmd playPauseCmd = 704;
bool LinkCmd::has_playpausecmd() const {
  return cmd_case() == kPlayPauseCmd;
}
void LinkCmd::set_has_playpausecmd() {
  _oneof_case_[0] = kPlayPauseCmd;
}
void LinkCmd::clear_playpausecmd() {
  if (has_playpausecmd()) {
    delete cmd_.playpausecmd_;
    clear_has_cmd();
  }
}
 const ::LinkPlayPauseCmd& LinkCmd::playpausecmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.playPauseCmd)
  return has_playpausecmd()
      ? *cmd_.playpausecmd_
      : ::LinkPlayPauseCmd::default_instance();
}
::LinkPlayPauseCmd* LinkCmd::mutable_playpausecmd() {
  if (!has_playpausecmd()) {
    clear_cmd();
    set_has_playpausecmd();
    cmd_.playpausecmd_ = new ::LinkPlayPauseCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.playPauseCmd)
  return cmd_.playpausecmd_;
}
::LinkPlayPauseCmd* LinkCmd::release_playpausecmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.playPauseCmd)
  if (has_playpausecmd()) {
    clear_has_cmd();
    ::LinkPlayPauseCmd* temp = cmd_.playpausecmd_;
    cmd_.playpausecmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_playpausecmd(::LinkPlayPauseCmd* playpausecmd) {
  clear_cmd();
  if (playpausecmd) {
    set_has_playpausecmd();
    cmd_.playpausecmd_ = playpausecmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.playPauseCmd)
}

// .LinkPlayResumeCmd playResumeCmd = 705;
bool LinkCmd::has_playresumecmd() const {
  return cmd_case() == kPlayResumeCmd;
}
void LinkCmd::set_has_playresumecmd() {
  _oneof_case_[0] = kPlayResumeCmd;
}
void LinkCmd::clear_playresumecmd() {
  if (has_playresumecmd()) {
    delete cmd_.playresumecmd_;
    clear_has_cmd();
  }
}
 const ::LinkPlayResumeCmd& LinkCmd::playresumecmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.playResumeCmd)
  return has_playresumecmd()
      ? *cmd_.playresumecmd_
      : ::LinkPlayResumeCmd::default_instance();
}
::LinkPlayResumeCmd* LinkCmd::mutable_playresumecmd() {
  if (!has_playresumecmd()) {
    clear_cmd();
    set_has_playresumecmd();
    cmd_.playresumecmd_ = new ::LinkPlayResumeCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.playResumeCmd)
  return cmd_.playresumecmd_;
}
::LinkPlayResumeCmd* LinkCmd::release_playresumecmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.playResumeCmd)
  if (has_playresumecmd()) {
    clear_has_cmd();
    ::LinkPlayResumeCmd* temp = cmd_.playresumecmd_;
    cmd_.playresumecmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_playresumecmd(::LinkPlayResumeCmd* playresumecmd) {
  clear_cmd();
  if (playresumecmd) {
    set_has_playresumecmd();
    cmd_.playresumecmd_ = playresumecmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.playResumeCmd)
}

// .LinkPlaySeekCmd playSeekCmd = 706;
bool LinkCmd::has_playseekcmd() const {
  return cmd_case() == kPlaySeekCmd;
}
void LinkCmd::set_has_playseekcmd() {
  _oneof_case_[0] = kPlaySeekCmd;
}
void LinkCmd::clear_playseekcmd() {
  if (has_playseekcmd()) {
    delete cmd_.playseekcmd_;
    clear_has_cmd();
  }
}
 const ::LinkPlaySeekCmd& LinkCmd::playseekcmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.playSeekCmd)
  return has_playseekcmd()
      ? *cmd_.playseekcmd_
      : ::LinkPlaySeekCmd::default_instance();
}
::LinkPlaySeekCmd* LinkCmd::mutable_playseekcmd() {
  if (!has_playseekcmd()) {
    clear_cmd();
    set_has_playseekcmd();
    cmd_.playseekcmd_ = new ::LinkPlaySeekCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.playSeekCmd)
  return cmd_.playseekcmd_;
}
::LinkPlaySeekCmd* LinkCmd::release_playseekcmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.playSeekCmd)
  if (has_playseekcmd()) {
    clear_has_cmd();
    ::LinkPlaySeekCmd* temp = cmd_.playseekcmd_;
    cmd_.playseekcmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_playseekcmd(::LinkPlaySeekCmd* playseekcmd) {
  clear_cmd();
  if (playseekcmd) {
    set_has_playseekcmd();
    cmd_.playseekcmd_ = playseekcmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.playSeekCmd)
}

// .LinkPlayStopCmd playStopCmd = 707;
bool LinkCmd::has_playstopcmd() const {
  return cmd_case() == kPlayStopCmd;
}
void LinkCmd::set_has_playstopcmd() {
  _oneof_case_[0] = kPlayStopCmd;
}
void LinkCmd::clear_playstopcmd() {
  if (has_playstopcmd()) {
    delete cmd_.playstopcmd_;
    clear_has_cmd();
  }
}
 const ::LinkPlayStopCmd& LinkCmd::playstopcmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.playStopCmd)
  return has_playstopcmd()
      ? *cmd_.playstopcmd_
      : ::LinkPlayStopCmd::default_instance();
}
::LinkPlayStopCmd* LinkCmd::mutable_playstopcmd() {
  if (!has_playstopcmd()) {
    clear_cmd();
    set_has_playstopcmd();
    cmd_.playstopcmd_ = new ::LinkPlayStopCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.playStopCmd)
  return cmd_.playstopcmd_;
}
::LinkPlayStopCmd* LinkCmd::release_playstopcmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.playStopCmd)
  if (has_playstopcmd()) {
    clear_has_cmd();
    ::LinkPlayStopCmd* temp = cmd_.playstopcmd_;
    cmd_.playstopcmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_playstopcmd(::LinkPlayStopCmd* playstopcmd) {
  clear_cmd();
  if (playstopcmd) {
    set_has_playstopcmd();
    cmd_.playstopcmd_ = playstopcmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.playStopCmd)
}

// .LinkPtzCmd ptzCmd = 801;
bool LinkCmd::has_ptzcmd() const {
  return cmd_case() == kPtzCmd;
}
void LinkCmd::set_has_ptzcmd() {
  _oneof_case_[0] = kPtzCmd;
}
void LinkCmd::clear_ptzcmd() {
  if (has_ptzcmd()) {
    delete cmd_.ptzcmd_;
    clear_has_cmd();
  }
}
 const ::LinkPtzCmd& LinkCmd::ptzcmd() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.ptzCmd)
  return has_ptzcmd()
      ? *cmd_.ptzcmd_
      : ::LinkPtzCmd::default_instance();
}
::LinkPtzCmd* LinkCmd::mutable_ptzcmd() {
  if (!has_ptzcmd()) {
    clear_cmd();
    set_has_ptzcmd();
    cmd_.ptzcmd_ = new ::LinkPtzCmd;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.ptzCmd)
  return cmd_.ptzcmd_;
}
::LinkPtzCmd* LinkCmd::release_ptzcmd() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.ptzCmd)
  if (has_ptzcmd()) {
    clear_has_cmd();
    ::LinkPtzCmd* temp = cmd_.ptzcmd_;
    cmd_.ptzcmd_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_ptzcmd(::LinkPtzCmd* ptzcmd) {
  clear_cmd();
  if (ptzcmd) {
    set_has_ptzcmd();
    cmd_.ptzcmd_ = ptzcmd;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.ptzCmd)
}

// .LinkCamSearchStartReq camSearchStartReq = 901;
bool LinkCmd::has_camsearchstartreq() const {
  return cmd_case() == kCamSearchStartReq;
}
void LinkCmd::set_has_camsearchstartreq() {
  _oneof_case_[0] = kCamSearchStartReq;
}
void LinkCmd::clear_camsearchstartreq() {
  if (has_camsearchstartreq()) {
    delete cmd_.camsearchstartreq_;
    clear_has_cmd();
  }
}
 const ::LinkCamSearchStartReq& LinkCmd::camsearchstartreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camSearchStartReq)
  return has_camsearchstartreq()
      ? *cmd_.camsearchstartreq_
      : ::LinkCamSearchStartReq::default_instance();
}
::LinkCamSearchStartReq* LinkCmd::mutable_camsearchstartreq() {
  if (!has_camsearchstartreq()) {
    clear_cmd();
    set_has_camsearchstartreq();
    cmd_.camsearchstartreq_ = new ::LinkCamSearchStartReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camSearchStartReq)
  return cmd_.camsearchstartreq_;
}
::LinkCamSearchStartReq* LinkCmd::release_camsearchstartreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camSearchStartReq)
  if (has_camsearchstartreq()) {
    clear_has_cmd();
    ::LinkCamSearchStartReq* temp = cmd_.camsearchstartreq_;
    cmd_.camsearchstartreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camsearchstartreq(::LinkCamSearchStartReq* camsearchstartreq) {
  clear_cmd();
  if (camsearchstartreq) {
    set_has_camsearchstartreq();
    cmd_.camsearchstartreq_ = camsearchstartreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camSearchStartReq)
}

// .LinkCamSearchStartResp camSearchStartResp = 902;
bool LinkCmd::has_camsearchstartresp() const {
  return cmd_case() == kCamSearchStartResp;
}
void LinkCmd::set_has_camsearchstartresp() {
  _oneof_case_[0] = kCamSearchStartResp;
}
void LinkCmd::clear_camsearchstartresp() {
  if (has_camsearchstartresp()) {
    delete cmd_.camsearchstartresp_;
    clear_has_cmd();
  }
}
 const ::LinkCamSearchStartResp& LinkCmd::camsearchstartresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camSearchStartResp)
  return has_camsearchstartresp()
      ? *cmd_.camsearchstartresp_
      : ::LinkCamSearchStartResp::default_instance();
}
::LinkCamSearchStartResp* LinkCmd::mutable_camsearchstartresp() {
  if (!has_camsearchstartresp()) {
    clear_cmd();
    set_has_camsearchstartresp();
    cmd_.camsearchstartresp_ = new ::LinkCamSearchStartResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camSearchStartResp)
  return cmd_.camsearchstartresp_;
}
::LinkCamSearchStartResp* LinkCmd::release_camsearchstartresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camSearchStartResp)
  if (has_camsearchstartresp()) {
    clear_has_cmd();
    ::LinkCamSearchStartResp* temp = cmd_.camsearchstartresp_;
    cmd_.camsearchstartresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camsearchstartresp(::LinkCamSearchStartResp* camsearchstartresp) {
  clear_cmd();
  if (camsearchstartresp) {
    set_has_camsearchstartresp();
    cmd_.camsearchstartresp_ = camsearchstartresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camSearchStartResp)
}

// .LinkCamSearchStopReq camSearchStopReq = 903;
bool LinkCmd::has_camsearchstopreq() const {
  return cmd_case() == kCamSearchStopReq;
}
void LinkCmd::set_has_camsearchstopreq() {
  _oneof_case_[0] = kCamSearchStopReq;
}
void LinkCmd::clear_camsearchstopreq() {
  if (has_camsearchstopreq()) {
    delete cmd_.camsearchstopreq_;
    clear_has_cmd();
  }
}
 const ::LinkCamSearchStopReq& LinkCmd::camsearchstopreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camSearchStopReq)
  return has_camsearchstopreq()
      ? *cmd_.camsearchstopreq_
      : ::LinkCamSearchStopReq::default_instance();
}
::LinkCamSearchStopReq* LinkCmd::mutable_camsearchstopreq() {
  if (!has_camsearchstopreq()) {
    clear_cmd();
    set_has_camsearchstopreq();
    cmd_.camsearchstopreq_ = new ::LinkCamSearchStopReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camSearchStopReq)
  return cmd_.camsearchstopreq_;
}
::LinkCamSearchStopReq* LinkCmd::release_camsearchstopreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camSearchStopReq)
  if (has_camsearchstopreq()) {
    clear_has_cmd();
    ::LinkCamSearchStopReq* temp = cmd_.camsearchstopreq_;
    cmd_.camsearchstopreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camsearchstopreq(::LinkCamSearchStopReq* camsearchstopreq) {
  clear_cmd();
  if (camsearchstopreq) {
    set_has_camsearchstopreq();
    cmd_.camsearchstopreq_ = camsearchstopreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camSearchStopReq)
}

// .LinkCamSearchStopResp camSearchStopResp = 904;
bool LinkCmd::has_camsearchstopresp() const {
  return cmd_case() == kCamSearchStopResp;
}
void LinkCmd::set_has_camsearchstopresp() {
  _oneof_case_[0] = kCamSearchStopResp;
}
void LinkCmd::clear_camsearchstopresp() {
  if (has_camsearchstopresp()) {
    delete cmd_.camsearchstopresp_;
    clear_has_cmd();
  }
}
 const ::LinkCamSearchStopResp& LinkCmd::camsearchstopresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camSearchStopResp)
  return has_camsearchstopresp()
      ? *cmd_.camsearchstopresp_
      : ::LinkCamSearchStopResp::default_instance();
}
::LinkCamSearchStopResp* LinkCmd::mutable_camsearchstopresp() {
  if (!has_camsearchstopresp()) {
    clear_cmd();
    set_has_camsearchstopresp();
    cmd_.camsearchstopresp_ = new ::LinkCamSearchStopResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camSearchStopResp)
  return cmd_.camsearchstopresp_;
}
::LinkCamSearchStopResp* LinkCmd::release_camsearchstopresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camSearchStopResp)
  if (has_camsearchstopresp()) {
    clear_has_cmd();
    ::LinkCamSearchStopResp* temp = cmd_.camsearchstopresp_;
    cmd_.camsearchstopresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camsearchstopresp(::LinkCamSearchStopResp* camsearchstopresp) {
  clear_cmd();
  if (camsearchstopresp) {
    set_has_camsearchstopresp();
    cmd_.camsearchstopresp_ = camsearchstopresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camSearchStopResp)
}

// .LinkRegEventReq regEventReq = 905;
bool LinkCmd::has_regeventreq() const {
  return cmd_case() == kRegEventReq;
}
void LinkCmd::set_has_regeventreq() {
  _oneof_case_[0] = kRegEventReq;
}
void LinkCmd::clear_regeventreq() {
  if (has_regeventreq()) {
    delete cmd_.regeventreq_;
    clear_has_cmd();
  }
}
 const ::LinkRegEventReq& LinkCmd::regeventreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.regEventReq)
  return has_regeventreq()
      ? *cmd_.regeventreq_
      : ::LinkRegEventReq::default_instance();
}
::LinkRegEventReq* LinkCmd::mutable_regeventreq() {
  if (!has_regeventreq()) {
    clear_cmd();
    set_has_regeventreq();
    cmd_.regeventreq_ = new ::LinkRegEventReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.regEventReq)
  return cmd_.regeventreq_;
}
::LinkRegEventReq* LinkCmd::release_regeventreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.regEventReq)
  if (has_regeventreq()) {
    clear_has_cmd();
    ::LinkRegEventReq* temp = cmd_.regeventreq_;
    cmd_.regeventreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_regeventreq(::LinkRegEventReq* regeventreq) {
  clear_cmd();
  if (regeventreq) {
    set_has_regeventreq();
    cmd_.regeventreq_ = regeventreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.regEventReq)
}

// .LinkRegEventResp regEventResp = 906;
bool LinkCmd::has_regeventresp() const {
  return cmd_case() == kRegEventResp;
}
void LinkCmd::set_has_regeventresp() {
  _oneof_case_[0] = kRegEventResp;
}
void LinkCmd::clear_regeventresp() {
  if (has_regeventresp()) {
    delete cmd_.regeventresp_;
    clear_has_cmd();
  }
}
 const ::LinkRegEventResp& LinkCmd::regeventresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.regEventResp)
  return has_regeventresp()
      ? *cmd_.regeventresp_
      : ::LinkRegEventResp::default_instance();
}
::LinkRegEventResp* LinkCmd::mutable_regeventresp() {
  if (!has_regeventresp()) {
    clear_cmd();
    set_has_regeventresp();
    cmd_.regeventresp_ = new ::LinkRegEventResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.regEventResp)
  return cmd_.regeventresp_;
}
::LinkRegEventResp* LinkCmd::release_regeventresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.regEventResp)
  if (has_regeventresp()) {
    clear_has_cmd();
    ::LinkRegEventResp* temp = cmd_.regeventresp_;
    cmd_.regeventresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_regeventresp(::LinkRegEventResp* regeventresp) {
  clear_cmd();
  if (regeventresp) {
    set_has_regeventresp();
    cmd_.regeventresp_ = regeventresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.regEventResp)
}

// .LinkUnRegEventReq unRegEventReq = 907;
bool LinkCmd::has_unregeventreq() const {
  return cmd_case() == kUnRegEventReq;
}
void LinkCmd::set_has_unregeventreq() {
  _oneof_case_[0] = kUnRegEventReq;
}
void LinkCmd::clear_unregeventreq() {
  if (has_unregeventreq()) {
    delete cmd_.unregeventreq_;
    clear_has_cmd();
  }
}
 const ::LinkUnRegEventReq& LinkCmd::unregeventreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.unRegEventReq)
  return has_unregeventreq()
      ? *cmd_.unregeventreq_
      : ::LinkUnRegEventReq::default_instance();
}
::LinkUnRegEventReq* LinkCmd::mutable_unregeventreq() {
  if (!has_unregeventreq()) {
    clear_cmd();
    set_has_unregeventreq();
    cmd_.unregeventreq_ = new ::LinkUnRegEventReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.unRegEventReq)
  return cmd_.unregeventreq_;
}
::LinkUnRegEventReq* LinkCmd::release_unregeventreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.unRegEventReq)
  if (has_unregeventreq()) {
    clear_has_cmd();
    ::LinkUnRegEventReq* temp = cmd_.unregeventreq_;
    cmd_.unregeventreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_unregeventreq(::LinkUnRegEventReq* unregeventreq) {
  clear_cmd();
  if (unregeventreq) {
    set_has_unregeventreq();
    cmd_.unregeventreq_ = unregeventreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.unRegEventReq)
}

// .LinkUnRegEventResp unRegEventResp = 908;
bool LinkCmd::has_unregeventresp() const {
  return cmd_case() == kUnRegEventResp;
}
void LinkCmd::set_has_unregeventresp() {
  _oneof_case_[0] = kUnRegEventResp;
}
void LinkCmd::clear_unregeventresp() {
  if (has_unregeventresp()) {
    delete cmd_.unregeventresp_;
    clear_has_cmd();
  }
}
 const ::LinkUnRegEventResp& LinkCmd::unregeventresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.unRegEventResp)
  return has_unregeventresp()
      ? *cmd_.unregeventresp_
      : ::LinkUnRegEventResp::default_instance();
}
::LinkUnRegEventResp* LinkCmd::mutable_unregeventresp() {
  if (!has_unregeventresp()) {
    clear_cmd();
    set_has_unregeventresp();
    cmd_.unregeventresp_ = new ::LinkUnRegEventResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.unRegEventResp)
  return cmd_.unregeventresp_;
}
::LinkUnRegEventResp* LinkCmd::release_unregeventresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.unRegEventResp)
  if (has_unregeventresp()) {
    clear_has_cmd();
    ::LinkUnRegEventResp* temp = cmd_.unregeventresp_;
    cmd_.unregeventresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_unregeventresp(::LinkUnRegEventResp* unregeventresp) {
  clear_cmd();
  if (unregeventresp) {
    set_has_unregeventresp();
    cmd_.unregeventresp_ = unregeventresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.unRegEventResp)
}

// .LinkEventSearchReq eventSearchReq = 909;
bool LinkCmd::has_eventsearchreq() const {
  return cmd_case() == kEventSearchReq;
}
void LinkCmd::set_has_eventsearchreq() {
  _oneof_case_[0] = kEventSearchReq;
}
void LinkCmd::clear_eventsearchreq() {
  if (has_eventsearchreq()) {
    delete cmd_.eventsearchreq_;
    clear_has_cmd();
  }
}
 const ::LinkEventSearchReq& LinkCmd::eventsearchreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.eventSearchReq)
  return has_eventsearchreq()
      ? *cmd_.eventsearchreq_
      : ::LinkEventSearchReq::default_instance();
}
::LinkEventSearchReq* LinkCmd::mutable_eventsearchreq() {
  if (!has_eventsearchreq()) {
    clear_cmd();
    set_has_eventsearchreq();
    cmd_.eventsearchreq_ = new ::LinkEventSearchReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.eventSearchReq)
  return cmd_.eventsearchreq_;
}
::LinkEventSearchReq* LinkCmd::release_eventsearchreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.eventSearchReq)
  if (has_eventsearchreq()) {
    clear_has_cmd();
    ::LinkEventSearchReq* temp = cmd_.eventsearchreq_;
    cmd_.eventsearchreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_eventsearchreq(::LinkEventSearchReq* eventsearchreq) {
  clear_cmd();
  if (eventsearchreq) {
    set_has_eventsearchreq();
    cmd_.eventsearchreq_ = eventsearchreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.eventSearchReq)
}

// .LinkEventSearchResp eventSearchResp = 910;
bool LinkCmd::has_eventsearchresp() const {
  return cmd_case() == kEventSearchResp;
}
void LinkCmd::set_has_eventsearchresp() {
  _oneof_case_[0] = kEventSearchResp;
}
void LinkCmd::clear_eventsearchresp() {
  if (has_eventsearchresp()) {
    delete cmd_.eventsearchresp_;
    clear_has_cmd();
  }
}
 const ::LinkEventSearchResp& LinkCmd::eventsearchresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.eventSearchResp)
  return has_eventsearchresp()
      ? *cmd_.eventsearchresp_
      : ::LinkEventSearchResp::default_instance();
}
::LinkEventSearchResp* LinkCmd::mutable_eventsearchresp() {
  if (!has_eventsearchresp()) {
    clear_cmd();
    set_has_eventsearchresp();
    cmd_.eventsearchresp_ = new ::LinkEventSearchResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.eventSearchResp)
  return cmd_.eventsearchresp_;
}
::LinkEventSearchResp* LinkCmd::release_eventsearchresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.eventSearchResp)
  if (has_eventsearchresp()) {
    clear_has_cmd();
    ::LinkEventSearchResp* temp = cmd_.eventsearchresp_;
    cmd_.eventsearchresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_eventsearchresp(::LinkEventSearchResp* eventsearchresp) {
  clear_cmd();
  if (eventsearchresp) {
    set_has_eventsearchresp();
    cmd_.eventsearchresp_ = eventsearchresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.eventSearchResp)
}

// .LinkHandleEventReq handleEventReq = 911;
bool LinkCmd::has_handleeventreq() const {
  return cmd_case() == kHandleEventReq;
}
void LinkCmd::set_has_handleeventreq() {
  _oneof_case_[0] = kHandleEventReq;
}
void LinkCmd::clear_handleeventreq() {
  if (has_handleeventreq()) {
    delete cmd_.handleeventreq_;
    clear_has_cmd();
  }
}
 const ::LinkHandleEventReq& LinkCmd::handleeventreq() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.handleEventReq)
  return has_handleeventreq()
      ? *cmd_.handleeventreq_
      : ::LinkHandleEventReq::default_instance();
}
::LinkHandleEventReq* LinkCmd::mutable_handleeventreq() {
  if (!has_handleeventreq()) {
    clear_cmd();
    set_has_handleeventreq();
    cmd_.handleeventreq_ = new ::LinkHandleEventReq;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.handleEventReq)
  return cmd_.handleeventreq_;
}
::LinkHandleEventReq* LinkCmd::release_handleeventreq() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.handleEventReq)
  if (has_handleeventreq()) {
    clear_has_cmd();
    ::LinkHandleEventReq* temp = cmd_.handleeventreq_;
    cmd_.handleeventreq_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_handleeventreq(::LinkHandleEventReq* handleeventreq) {
  clear_cmd();
  if (handleeventreq) {
    set_has_handleeventreq();
    cmd_.handleeventreq_ = handleeventreq;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.handleEventReq)
}

// .LinkHandleEventResp handleEventResp = 912;
bool LinkCmd::has_handleeventresp() const {
  return cmd_case() == kHandleEventResp;
}
void LinkCmd::set_has_handleeventresp() {
  _oneof_case_[0] = kHandleEventResp;
}
void LinkCmd::clear_handleeventresp() {
  if (has_handleeventresp()) {
    delete cmd_.handleeventresp_;
    clear_has_cmd();
  }
}
 const ::LinkHandleEventResp& LinkCmd::handleeventresp() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.handleEventResp)
  return has_handleeventresp()
      ? *cmd_.handleeventresp_
      : ::LinkHandleEventResp::default_instance();
}
::LinkHandleEventResp* LinkCmd::mutable_handleeventresp() {
  if (!has_handleeventresp()) {
    clear_cmd();
    set_has_handleeventresp();
    cmd_.handleeventresp_ = new ::LinkHandleEventResp;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.handleEventResp)
  return cmd_.handleeventresp_;
}
::LinkHandleEventResp* LinkCmd::release_handleeventresp() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.handleEventResp)
  if (has_handleeventresp()) {
    clear_has_cmd();
    ::LinkHandleEventResp* temp = cmd_.handleeventresp_;
    cmd_.handleeventresp_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_handleeventresp(::LinkHandleEventResp* handleeventresp) {
  clear_cmd();
  if (handleeventresp) {
    set_has_handleeventresp();
    cmd_.handleeventresp_ = handleeventresp;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.handleEventResp)
}

// .LinkCamAddNotify camAddNotify = 10001;
bool LinkCmd::has_camaddnotify() const {
  return cmd_case() == kCamAddNotify;
}
void LinkCmd::set_has_camaddnotify() {
  _oneof_case_[0] = kCamAddNotify;
}
void LinkCmd::clear_camaddnotify() {
  if (has_camaddnotify()) {
    delete cmd_.camaddnotify_;
    clear_has_cmd();
  }
}
 const ::LinkCamAddNotify& LinkCmd::camaddnotify() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camAddNotify)
  return has_camaddnotify()
      ? *cmd_.camaddnotify_
      : ::LinkCamAddNotify::default_instance();
}
::LinkCamAddNotify* LinkCmd::mutable_camaddnotify() {
  if (!has_camaddnotify()) {
    clear_cmd();
    set_has_camaddnotify();
    cmd_.camaddnotify_ = new ::LinkCamAddNotify;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camAddNotify)
  return cmd_.camaddnotify_;
}
::LinkCamAddNotify* LinkCmd::release_camaddnotify() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camAddNotify)
  if (has_camaddnotify()) {
    clear_has_cmd();
    ::LinkCamAddNotify* temp = cmd_.camaddnotify_;
    cmd_.camaddnotify_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camaddnotify(::LinkCamAddNotify* camaddnotify) {
  clear_cmd();
  if (camaddnotify) {
    set_has_camaddnotify();
    cmd_.camaddnotify_ = camaddnotify;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camAddNotify)
}

// .LinkCamIdNotify camIdNotify = 10002;
bool LinkCmd::has_camidnotify() const {
  return cmd_case() == kCamIdNotify;
}
void LinkCmd::set_has_camidnotify() {
  _oneof_case_[0] = kCamIdNotify;
}
void LinkCmd::clear_camidnotify() {
  if (has_camidnotify()) {
    delete cmd_.camidnotify_;
    clear_has_cmd();
  }
}
 const ::LinkCamIdNotify& LinkCmd::camidnotify() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camIdNotify)
  return has_camidnotify()
      ? *cmd_.camidnotify_
      : ::LinkCamIdNotify::default_instance();
}
::LinkCamIdNotify* LinkCmd::mutable_camidnotify() {
  if (!has_camidnotify()) {
    clear_cmd();
    set_has_camidnotify();
    cmd_.camidnotify_ = new ::LinkCamIdNotify;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camIdNotify)
  return cmd_.camidnotify_;
}
::LinkCamIdNotify* LinkCmd::release_camidnotify() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camIdNotify)
  if (has_camidnotify()) {
    clear_has_cmd();
    ::LinkCamIdNotify* temp = cmd_.camidnotify_;
    cmd_.camidnotify_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camidnotify(::LinkCamIdNotify* camidnotify) {
  clear_cmd();
  if (camidnotify) {
    set_has_camidnotify();
    cmd_.camidnotify_ = camidnotify;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camIdNotify)
}

// .LinkCamSearchedNotify camSearchedNotify = 10003;
bool LinkCmd::has_camsearchednotify() const {
  return cmd_case() == kCamSearchedNotify;
}
void LinkCmd::set_has_camsearchednotify() {
  _oneof_case_[0] = kCamSearchedNotify;
}
void LinkCmd::clear_camsearchednotify() {
  if (has_camsearchednotify()) {
    delete cmd_.camsearchednotify_;
    clear_has_cmd();
  }
}
 const ::LinkCamSearchedNotify& LinkCmd::camsearchednotify() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.camSearchedNotify)
  return has_camsearchednotify()
      ? *cmd_.camsearchednotify_
      : ::LinkCamSearchedNotify::default_instance();
}
::LinkCamSearchedNotify* LinkCmd::mutable_camsearchednotify() {
  if (!has_camsearchednotify()) {
    clear_cmd();
    set_has_camsearchednotify();
    cmd_.camsearchednotify_ = new ::LinkCamSearchedNotify;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.camSearchedNotify)
  return cmd_.camsearchednotify_;
}
::LinkCamSearchedNotify* LinkCmd::release_camsearchednotify() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.camSearchedNotify)
  if (has_camsearchednotify()) {
    clear_has_cmd();
    ::LinkCamSearchedNotify* temp = cmd_.camsearchednotify_;
    cmd_.camsearchednotify_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_camsearchednotify(::LinkCamSearchedNotify* camsearchednotify) {
  clear_cmd();
  if (camsearchednotify) {
    set_has_camsearchednotify();
    cmd_.camsearchednotify_ = camsearchednotify;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.camSearchedNotify)
}

// .LinkEventNotify evnetNotify = 10004;
bool LinkCmd::has_evnetnotify() const {
  return cmd_case() == kEvnetNotify;
}
void LinkCmd::set_has_evnetnotify() {
  _oneof_case_[0] = kEvnetNotify;
}
void LinkCmd::clear_evnetnotify() {
  if (has_evnetnotify()) {
    delete cmd_.evnetnotify_;
    clear_has_cmd();
  }
}
 const ::LinkEventNotify& LinkCmd::evnetnotify() const {
  // @@protoc_insertion_point(field_get:Link.LinkCmd.evnetNotify)
  return has_evnetnotify()
      ? *cmd_.evnetnotify_
      : ::LinkEventNotify::default_instance();
}
::LinkEventNotify* LinkCmd::mutable_evnetnotify() {
  if (!has_evnetnotify()) {
    clear_cmd();
    set_has_evnetnotify();
    cmd_.evnetnotify_ = new ::LinkEventNotify;
  }
  // @@protoc_insertion_point(field_mutable:Link.LinkCmd.evnetNotify)
  return cmd_.evnetnotify_;
}
::LinkEventNotify* LinkCmd::release_evnetnotify() {
  // @@protoc_insertion_point(field_release:Link.LinkCmd.evnetNotify)
  if (has_evnetnotify()) {
    clear_has_cmd();
    ::LinkEventNotify* temp = cmd_.evnetnotify_;
    cmd_.evnetnotify_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
void LinkCmd::set_allocated_evnetnotify(::LinkEventNotify* evnetnotify) {
  clear_cmd();
  if (evnetnotify) {
    set_has_evnetnotify();
    cmd_.evnetnotify_ = evnetnotify;
  }
  // @@protoc_insertion_point(field_set_allocated:Link.LinkCmd.evnetNotify)
}

bool LinkCmd::has_cmd() const {
  return cmd_case() != CMD_NOT_SET;
}
void LinkCmd::clear_has_cmd() {
  _oneof_case_[0] = CMD_NOT_SET;
}
LinkCmd::CmdCase LinkCmd::cmd_case() const {
  return LinkCmd::CmdCase(_oneof_case_[0]);
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Link

// @@protoc_insertion_point(global_scope)
