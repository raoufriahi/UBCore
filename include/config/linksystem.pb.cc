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
#include "linksystem.pb.h"

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
class LinkLoginReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkLoginReq> {
} _LinkLoginReq_default_instance_;
class LinkLoginRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkLoginResp> {
} _LinkLoginResp_default_instance_;
class LinkKeepaliveReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkKeepaliveReq> {
} _LinkKeepaliveReq_default_instance_;
class LinkKeepaliveRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkKeepaliveResp> {
} _LinkKeepaliveResp_default_instance_;
class LinkRegNotifyReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkRegNotifyReq> {
} _LinkRegNotifyReq_default_instance_;
class LinkRegNotifyRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkRegNotifyResp> {
} _LinkRegNotifyResp_default_instance_;
class LinkListCamReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkListCamReq> {
} _LinkListCamReq_default_instance_;
class LinkListCamRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkListCamResp> {
} _LinkListCamResp_default_instance_;
class LinkCamReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamReq> {
} _LinkCamReq_default_instance_;
class LinkCamRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamResp> {
} _LinkCamResp_default_instance_;
class LinkAddCamReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkAddCamReq> {
} _LinkAddCamReq_default_instance_;
class LinkAddCamRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkAddCamResp> {
} _LinkAddCamResp_default_instance_;
class LinkDelCamReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkDelCamReq> {
} _LinkDelCamReq_default_instance_;
class LinkDelCamRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkDelCamResp> {
} _LinkDelCamResp_default_instance_;
class LinkSetCamSchedReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkSetCamSchedReq> {
} _LinkSetCamSchedReq_default_instance_;
class LinkSetCamSchedRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkSetCamSchedResp> {
} _LinkSetCamSchedResp_default_instance_;
class LinkGetStreamListReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkGetStreamListReq> {
} _LinkGetStreamListReq_default_instance_;
class LinkGetStreamListRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkGetStreamListResp> {
} _LinkGetStreamListResp_default_instance_;
class LinkVidDiskListReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkVidDiskListReq> {
} _LinkVidDiskListReq_default_instance_;
class LinkVidDiskListRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkVidDiskListResp> {
} _LinkVidDiskListResp_default_instance_;
class LinkSysVidDiskListReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkSysVidDiskListReq> {
} _LinkSysVidDiskListReq_default_instance_;
class LinkSysVidDiskListRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkSysVidDiskListResp> {
} _LinkSysVidDiskListResp_default_instance_;
class LinkAddDiskReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkAddDiskReq> {
} _LinkAddDiskReq_default_instance_;
class LinkAddDiskRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkAddDiskResp> {
} _LinkAddDiskResp_default_instance_;
class LinkDelDiskReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkDelDiskReq> {
} _LinkDelDiskReq_default_instance_;
class LinkDelDiskRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkDelDiskResp> {
} _LinkDelDiskResp_default_instance_;
class LinkUpdateDiskLimitReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkUpdateDiskLimitReq> {
} _LinkUpdateDiskLimitReq_default_instance_;
class LinkUpdateDiskLimitRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkUpdateDiskLimitResp> {
} _LinkUpdateDiskLimitResp_default_instance_;
class LinkGetLicReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkGetLicReq> {
} _LinkGetLicReq_default_instance_;
class LinkGetLicRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkGetLicResp> {
} _LinkGetLicResp_default_instance_;
class LinkGetVerReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkGetVerReq> {
} _LinkGetVerReq_default_instance_;
class LinkGetVerRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkGetVerResp> {
} _LinkGetVerResp_default_instance_;
class LinkConfLicReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkConfLicReq> {
} _LinkConfLicReq_default_instance_;
class LinkConfLicRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkConfLicResp> {
} _LinkConfLicResp_default_instance_;
class LinkAddUserReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkAddUserReq> {
} _LinkAddUserReq_default_instance_;
class LinkAddUserRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkAddUserResp> {
} _LinkAddUserResp_default_instance_;
class LinkHasRecordItemDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkHasRecordItem> {
} _LinkHasRecordItem_default_instance_;
class LinkHasRecordListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkHasRecordList> {
} _LinkHasRecordList_default_instance_;
class LinkHasRecordReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkHasRecordReq> {
} _LinkHasRecordReq_default_instance_;
class LinkHasRecordRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkHasRecordResp> {
} _LinkHasRecordResp_default_instance_;
class LinkRecordItemDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkRecordItem> {
} _LinkRecordItem_default_instance_;
class LinkRecordListDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkRecordList> {
} _LinkRecordList_default_instance_;
class LinkSearchRecordReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkSearchRecordReq> {
} _LinkSearchRecordReq_default_instance_;
class LinkSearchRecordRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkSearchRecordResp> {
} _LinkSearchRecordResp_default_instance_;
class LinkStartLiveCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkStartLiveCmd> {
} _LinkStartLiveCmd_default_instance_;
class LinkStopLiveCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkStopLiveCmd> {
} _LinkStopLiveCmd_default_instance_;
class LinkPlayBackCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkPlayBackCmd> {
} _LinkPlayBackCmd_default_instance_;
class LinkPlayPauseCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkPlayPauseCmd> {
} _LinkPlayPauseCmd_default_instance_;
class LinkPlayResumeCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkPlayResumeCmd> {
} _LinkPlayResumeCmd_default_instance_;
class LinkPlaySeekCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkPlaySeekCmd> {
} _LinkPlaySeekCmd_default_instance_;
class LinkPlayStopCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkPlayStopCmd> {
} _LinkPlayStopCmd_default_instance_;
class LinkPtzCmdDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkPtzCmd> {
} _LinkPtzCmd_default_instance_;
class LinkCamSearchStartReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamSearchStartReq> {
} _LinkCamSearchStartReq_default_instance_;
class LinkCamSearchStartRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamSearchStartResp> {
} _LinkCamSearchStartResp_default_instance_;
class LinkCamSearchStopReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamSearchStopReq> {
} _LinkCamSearchStopReq_default_instance_;
class LinkCamSearchStopRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamSearchStopResp> {
} _LinkCamSearchStopResp_default_instance_;
class LinkRegEventReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkRegEventReq> {
} _LinkRegEventReq_default_instance_;
class LinkRegEventRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkRegEventResp> {
} _LinkRegEventResp_default_instance_;
class LinkUnRegEventReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkUnRegEventReq> {
} _LinkUnRegEventReq_default_instance_;
class LinkUnRegEventRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkUnRegEventResp> {
} _LinkUnRegEventResp_default_instance_;
class LinkEventSearchReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkEventSearchReq> {
} _LinkEventSearchReq_default_instance_;
class LinkEventSearchRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkEventSearchResp> {
} _LinkEventSearchResp_default_instance_;
class LinkHandleEventReqDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkHandleEventReq> {
} _LinkHandleEventReq_default_instance_;
class LinkHandleEventRespDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkHandleEventResp> {
} _LinkHandleEventResp_default_instance_;
class LinkCamAddNotifyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamAddNotify> {
} _LinkCamAddNotify_default_instance_;
class LinkCamIdNotifyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamIdNotify> {
} _LinkCamIdNotify_default_instance_;
class LinkCamSearchedNotifyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkCamSearchedNotify> {
} _LinkCamSearchedNotify_default_instance_;
class LinkEventNotifyDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<LinkEventNotify> {
} _LinkEventNotify_default_instance_;

namespace protobuf_linksystem_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[68];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginReq, strusername_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginReq, strpasswd_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginResp, strnonce_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginResp, bretnonce_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkLoginResp, bret_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkKeepaliveReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkKeepaliveReq, nkeepalive_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkKeepaliveResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkKeepaliveResp, nkeepalive_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegNotifyReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegNotifyReq, strfake_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegNotifyResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegNotifyResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkListCamReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkListCamReq, ball_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkListCamResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkListCamResp, clist_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamResp, ccam_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddCamReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddCamReq, ccam_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddCamResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddCamResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelCamReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelCamReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelCamResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelCamResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSetCamSchedReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSetCamSchedReq, ccam_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSetCamSchedResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSetCamSchedResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetStreamListReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetStreamListReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetStreamListResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetStreamListResp, clist_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkVidDiskListReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkVidDiskListReq, ball_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkVidDiskListResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkVidDiskListResp, cdisk_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSysVidDiskListReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSysVidDiskListReq, ball_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSysVidDiskListResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSysVidDiskListResp, cdisk_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddDiskReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddDiskReq, cdisk_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddDiskResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddDiskResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelDiskReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelDiskReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelDiskResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkDelDiskResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUpdateDiskLimitReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUpdateDiskLimitReq, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUpdateDiskLimitReq, nlimit_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUpdateDiskLimitResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUpdateDiskLimitResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicReq, strfake_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, strlic_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, strhostid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, nch_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, strtype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, strstarttime_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetLicResp, strexpiretime_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetVerReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetVerReq, strfake_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetVerResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetVerResp, strver_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkGetVerResp, strinfo_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkConfLicReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkConfLicReq, strlic_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkConfLicResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkConfLicResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddUserReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddUserReq, struser_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddUserReq, strpasswd_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddUserResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkAddUserResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordItem, nid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordItem, nstart_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordItem, nend_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordItem, ntype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordItem, bhas_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordList, chasrec_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordReq, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordReq, clist_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHasRecordResp, clist_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordItem, nid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordItem, nstart_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordItem, nend_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordItem, ntype_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordList, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRecordList, clist_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordReq, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordReq, nstart_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordReq, nend_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordReq, ntype_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordResp, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkSearchRecordResp, clist_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkStartLiveCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkStartLiveCmd, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkStartLiveCmd, nstream_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkStopLiveCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkStopLiveCmd, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkStopLiveCmd, nstream_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayBackCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayBackCmd, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayBackCmd, nplaytime_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayPauseCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayPauseCmd, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayResumeCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayResumeCmd, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlaySeekCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlaySeekCmd, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlaySeekCmd, nplaytime_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayStopCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPlayStopCmd, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPtzCmd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPtzCmd, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPtzCmd, naction_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkPtzCmd, nparam_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStartReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStartReq, strfake_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStartResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStartResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStopReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStopReq, strfake_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStopResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchStopResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegEventReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegEventReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegEventResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkRegEventResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUnRegEventReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUnRegEventReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUnRegEventResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkUnRegEventResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventSearchReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventSearchReq, strid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventSearchReq, nstart_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventSearchReq, nend_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventSearchResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventSearchResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHandleEventReq, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHandleEventReq, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHandleEventResp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkHandleEventResp, bsuccess_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamAddNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamAddNotify, ccam_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamIdNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamIdNotify, strid_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchedNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchedNotify, strip_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchedNotify, strport_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchedNotify, strmodel_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkCamSearchedNotify, stronvifaddress_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LinkEventNotify, cevent_),
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(LinkLoginReq)},
  { 6, -1, sizeof(LinkLoginResp)},
  { 13, -1, sizeof(LinkKeepaliveReq)},
  { 18, -1, sizeof(LinkKeepaliveResp)},
  { 23, -1, sizeof(LinkRegNotifyReq)},
  { 28, -1, sizeof(LinkRegNotifyResp)},
  { 33, -1, sizeof(LinkListCamReq)},
  { 38, -1, sizeof(LinkListCamResp)},
  { 43, -1, sizeof(LinkCamReq)},
  { 48, -1, sizeof(LinkCamResp)},
  { 53, -1, sizeof(LinkAddCamReq)},
  { 58, -1, sizeof(LinkAddCamResp)},
  { 63, -1, sizeof(LinkDelCamReq)},
  { 68, -1, sizeof(LinkDelCamResp)},
  { 73, -1, sizeof(LinkSetCamSchedReq)},
  { 78, -1, sizeof(LinkSetCamSchedResp)},
  { 83, -1, sizeof(LinkGetStreamListReq)},
  { 88, -1, sizeof(LinkGetStreamListResp)},
  { 93, -1, sizeof(LinkVidDiskListReq)},
  { 98, -1, sizeof(LinkVidDiskListResp)},
  { 103, -1, sizeof(LinkSysVidDiskListReq)},
  { 108, -1, sizeof(LinkSysVidDiskListResp)},
  { 113, -1, sizeof(LinkAddDiskReq)},
  { 118, -1, sizeof(LinkAddDiskResp)},
  { 123, -1, sizeof(LinkDelDiskReq)},
  { 128, -1, sizeof(LinkDelDiskResp)},
  { 133, -1, sizeof(LinkUpdateDiskLimitReq)},
  { 139, -1, sizeof(LinkUpdateDiskLimitResp)},
  { 144, -1, sizeof(LinkGetLicReq)},
  { 149, -1, sizeof(LinkGetLicResp)},
  { 159, -1, sizeof(LinkGetVerReq)},
  { 164, -1, sizeof(LinkGetVerResp)},
  { 170, -1, sizeof(LinkConfLicReq)},
  { 175, -1, sizeof(LinkConfLicResp)},
  { 180, -1, sizeof(LinkAddUserReq)},
  { 186, -1, sizeof(LinkAddUserResp)},
  { 191, -1, sizeof(LinkHasRecordItem)},
  { 200, -1, sizeof(LinkHasRecordList)},
  { 205, -1, sizeof(LinkHasRecordReq)},
  { 211, -1, sizeof(LinkHasRecordResp)},
  { 216, -1, sizeof(LinkRecordItem)},
  { 224, -1, sizeof(LinkRecordList)},
  { 229, -1, sizeof(LinkSearchRecordReq)},
  { 237, -1, sizeof(LinkSearchRecordResp)},
  { 243, -1, sizeof(LinkStartLiveCmd)},
  { 249, -1, sizeof(LinkStopLiveCmd)},
  { 255, -1, sizeof(LinkPlayBackCmd)},
  { 261, -1, sizeof(LinkPlayPauseCmd)},
  { 266, -1, sizeof(LinkPlayResumeCmd)},
  { 271, -1, sizeof(LinkPlaySeekCmd)},
  { 277, -1, sizeof(LinkPlayStopCmd)},
  { 282, -1, sizeof(LinkPtzCmd)},
  { 289, -1, sizeof(LinkCamSearchStartReq)},
  { 294, -1, sizeof(LinkCamSearchStartResp)},
  { 299, -1, sizeof(LinkCamSearchStopReq)},
  { 304, -1, sizeof(LinkCamSearchStopResp)},
  { 309, -1, sizeof(LinkRegEventReq)},
  { 314, -1, sizeof(LinkRegEventResp)},
  { 319, -1, sizeof(LinkUnRegEventReq)},
  { 324, -1, sizeof(LinkUnRegEventResp)},
  { 329, -1, sizeof(LinkEventSearchReq)},
  { 336, -1, sizeof(LinkEventSearchResp)},
  { 341, -1, sizeof(LinkHandleEventReq)},
  { 346, -1, sizeof(LinkHandleEventResp)},
  { 351, -1, sizeof(LinkCamAddNotify)},
  { 356, -1, sizeof(LinkCamIdNotify)},
  { 361, -1, sizeof(LinkCamSearchedNotify)},
  { 369, -1, sizeof(LinkEventNotify)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkLoginReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkLoginResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkKeepaliveReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkKeepaliveResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkRegNotifyReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkRegNotifyResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkListCamReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkListCamResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkAddCamReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkAddCamResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkDelCamReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkDelCamResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkSetCamSchedReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkSetCamSchedResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkGetStreamListReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkGetStreamListResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkVidDiskListReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkVidDiskListResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkSysVidDiskListReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkSysVidDiskListResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkAddDiskReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkAddDiskResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkDelDiskReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkDelDiskResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkUpdateDiskLimitReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkUpdateDiskLimitResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkGetLicReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkGetLicResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkGetVerReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkGetVerResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkConfLicReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkConfLicResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkAddUserReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkAddUserResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkHasRecordItem_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkHasRecordList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkHasRecordReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkHasRecordResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkRecordItem_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkRecordList_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkSearchRecordReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkSearchRecordResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkStartLiveCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkStopLiveCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkPlayBackCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkPlayPauseCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkPlayResumeCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkPlaySeekCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkPlayStopCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkPtzCmd_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamSearchStartReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamSearchStartResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamSearchStopReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamSearchStopResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkRegEventReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkRegEventResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkUnRegEventReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkUnRegEventResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkEventSearchReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkEventSearchResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkHandleEventReq_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkHandleEventResp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamAddNotify_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamIdNotify_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkCamSearchedNotify_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_LinkEventNotify_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "linksystem.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 68);
}

}  // namespace

void TableStruct::Shutdown() {
  _LinkLoginReq_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
  _LinkLoginResp_default_instance_.Shutdown();
  delete file_level_metadata[1].reflection;
  _LinkKeepaliveReq_default_instance_.Shutdown();
  delete file_level_metadata[2].reflection;
  _LinkKeepaliveResp_default_instance_.Shutdown();
  delete file_level_metadata[3].reflection;
  _LinkRegNotifyReq_default_instance_.Shutdown();
  delete file_level_metadata[4].reflection;
  _LinkRegNotifyResp_default_instance_.Shutdown();
  delete file_level_metadata[5].reflection;
  _LinkListCamReq_default_instance_.Shutdown();
  delete file_level_metadata[6].reflection;
  _LinkListCamResp_default_instance_.Shutdown();
  delete file_level_metadata[7].reflection;
  _LinkCamReq_default_instance_.Shutdown();
  delete file_level_metadata[8].reflection;
  _LinkCamResp_default_instance_.Shutdown();
  delete file_level_metadata[9].reflection;
  _LinkAddCamReq_default_instance_.Shutdown();
  delete file_level_metadata[10].reflection;
  _LinkAddCamResp_default_instance_.Shutdown();
  delete file_level_metadata[11].reflection;
  _LinkDelCamReq_default_instance_.Shutdown();
  delete file_level_metadata[12].reflection;
  _LinkDelCamResp_default_instance_.Shutdown();
  delete file_level_metadata[13].reflection;
  _LinkSetCamSchedReq_default_instance_.Shutdown();
  delete file_level_metadata[14].reflection;
  _LinkSetCamSchedResp_default_instance_.Shutdown();
  delete file_level_metadata[15].reflection;
  _LinkGetStreamListReq_default_instance_.Shutdown();
  delete file_level_metadata[16].reflection;
  _LinkGetStreamListResp_default_instance_.Shutdown();
  delete file_level_metadata[17].reflection;
  _LinkVidDiskListReq_default_instance_.Shutdown();
  delete file_level_metadata[18].reflection;
  _LinkVidDiskListResp_default_instance_.Shutdown();
  delete file_level_metadata[19].reflection;
  _LinkSysVidDiskListReq_default_instance_.Shutdown();
  delete file_level_metadata[20].reflection;
  _LinkSysVidDiskListResp_default_instance_.Shutdown();
  delete file_level_metadata[21].reflection;
  _LinkAddDiskReq_default_instance_.Shutdown();
  delete file_level_metadata[22].reflection;
  _LinkAddDiskResp_default_instance_.Shutdown();
  delete file_level_metadata[23].reflection;
  _LinkDelDiskReq_default_instance_.Shutdown();
  delete file_level_metadata[24].reflection;
  _LinkDelDiskResp_default_instance_.Shutdown();
  delete file_level_metadata[25].reflection;
  _LinkUpdateDiskLimitReq_default_instance_.Shutdown();
  delete file_level_metadata[26].reflection;
  _LinkUpdateDiskLimitResp_default_instance_.Shutdown();
  delete file_level_metadata[27].reflection;
  _LinkGetLicReq_default_instance_.Shutdown();
  delete file_level_metadata[28].reflection;
  _LinkGetLicResp_default_instance_.Shutdown();
  delete file_level_metadata[29].reflection;
  _LinkGetVerReq_default_instance_.Shutdown();
  delete file_level_metadata[30].reflection;
  _LinkGetVerResp_default_instance_.Shutdown();
  delete file_level_metadata[31].reflection;
  _LinkConfLicReq_default_instance_.Shutdown();
  delete file_level_metadata[32].reflection;
  _LinkConfLicResp_default_instance_.Shutdown();
  delete file_level_metadata[33].reflection;
  _LinkAddUserReq_default_instance_.Shutdown();
  delete file_level_metadata[34].reflection;
  _LinkAddUserResp_default_instance_.Shutdown();
  delete file_level_metadata[35].reflection;
  _LinkHasRecordItem_default_instance_.Shutdown();
  delete file_level_metadata[36].reflection;
  _LinkHasRecordList_default_instance_.Shutdown();
  delete file_level_metadata[37].reflection;
  _LinkHasRecordReq_default_instance_.Shutdown();
  delete file_level_metadata[38].reflection;
  _LinkHasRecordResp_default_instance_.Shutdown();
  delete file_level_metadata[39].reflection;
  _LinkRecordItem_default_instance_.Shutdown();
  delete file_level_metadata[40].reflection;
  _LinkRecordList_default_instance_.Shutdown();
  delete file_level_metadata[41].reflection;
  _LinkSearchRecordReq_default_instance_.Shutdown();
  delete file_level_metadata[42].reflection;
  _LinkSearchRecordResp_default_instance_.Shutdown();
  delete file_level_metadata[43].reflection;
  _LinkStartLiveCmd_default_instance_.Shutdown();
  delete file_level_metadata[44].reflection;
  _LinkStopLiveCmd_default_instance_.Shutdown();
  delete file_level_metadata[45].reflection;
  _LinkPlayBackCmd_default_instance_.Shutdown();
  delete file_level_metadata[46].reflection;
  _LinkPlayPauseCmd_default_instance_.Shutdown();
  delete file_level_metadata[47].reflection;
  _LinkPlayResumeCmd_default_instance_.Shutdown();
  delete file_level_metadata[48].reflection;
  _LinkPlaySeekCmd_default_instance_.Shutdown();
  delete file_level_metadata[49].reflection;
  _LinkPlayStopCmd_default_instance_.Shutdown();
  delete file_level_metadata[50].reflection;
  _LinkPtzCmd_default_instance_.Shutdown();
  delete file_level_metadata[51].reflection;
  _LinkCamSearchStartReq_default_instance_.Shutdown();
  delete file_level_metadata[52].reflection;
  _LinkCamSearchStartResp_default_instance_.Shutdown();
  delete file_level_metadata[53].reflection;
  _LinkCamSearchStopReq_default_instance_.Shutdown();
  delete file_level_metadata[54].reflection;
  _LinkCamSearchStopResp_default_instance_.Shutdown();
  delete file_level_metadata[55].reflection;
  _LinkRegEventReq_default_instance_.Shutdown();
  delete file_level_metadata[56].reflection;
  _LinkRegEventResp_default_instance_.Shutdown();
  delete file_level_metadata[57].reflection;
  _LinkUnRegEventReq_default_instance_.Shutdown();
  delete file_level_metadata[58].reflection;
  _LinkUnRegEventResp_default_instance_.Shutdown();
  delete file_level_metadata[59].reflection;
  _LinkEventSearchReq_default_instance_.Shutdown();
  delete file_level_metadata[60].reflection;
  _LinkEventSearchResp_default_instance_.Shutdown();
  delete file_level_metadata[61].reflection;
  _LinkHandleEventReq_default_instance_.Shutdown();
  delete file_level_metadata[62].reflection;
  _LinkHandleEventResp_default_instance_.Shutdown();
  delete file_level_metadata[63].reflection;
  _LinkCamAddNotify_default_instance_.Shutdown();
  delete file_level_metadata[64].reflection;
  _LinkCamIdNotify_default_instance_.Shutdown();
  delete file_level_metadata[65].reflection;
  _LinkCamSearchedNotify_default_instance_.Shutdown();
  delete file_level_metadata[66].reflection;
  _LinkEventNotify_default_instance_.Shutdown();
  delete file_level_metadata[67].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::protobuf_vidconf_2eproto::InitDefaults();
  _LinkLoginReq_default_instance_.DefaultConstruct();
  _LinkLoginResp_default_instance_.DefaultConstruct();
  _LinkKeepaliveReq_default_instance_.DefaultConstruct();
  _LinkKeepaliveResp_default_instance_.DefaultConstruct();
  _LinkRegNotifyReq_default_instance_.DefaultConstruct();
  _LinkRegNotifyResp_default_instance_.DefaultConstruct();
  _LinkListCamReq_default_instance_.DefaultConstruct();
  _LinkListCamResp_default_instance_.DefaultConstruct();
  _LinkCamReq_default_instance_.DefaultConstruct();
  _LinkCamResp_default_instance_.DefaultConstruct();
  _LinkAddCamReq_default_instance_.DefaultConstruct();
  _LinkAddCamResp_default_instance_.DefaultConstruct();
  _LinkDelCamReq_default_instance_.DefaultConstruct();
  _LinkDelCamResp_default_instance_.DefaultConstruct();
  _LinkSetCamSchedReq_default_instance_.DefaultConstruct();
  _LinkSetCamSchedResp_default_instance_.DefaultConstruct();
  _LinkGetStreamListReq_default_instance_.DefaultConstruct();
  _LinkGetStreamListResp_default_instance_.DefaultConstruct();
  _LinkVidDiskListReq_default_instance_.DefaultConstruct();
  _LinkVidDiskListResp_default_instance_.DefaultConstruct();
  _LinkSysVidDiskListReq_default_instance_.DefaultConstruct();
  _LinkSysVidDiskListResp_default_instance_.DefaultConstruct();
  _LinkAddDiskReq_default_instance_.DefaultConstruct();
  _LinkAddDiskResp_default_instance_.DefaultConstruct();
  _LinkDelDiskReq_default_instance_.DefaultConstruct();
  _LinkDelDiskResp_default_instance_.DefaultConstruct();
  _LinkUpdateDiskLimitReq_default_instance_.DefaultConstruct();
  _LinkUpdateDiskLimitResp_default_instance_.DefaultConstruct();
  _LinkGetLicReq_default_instance_.DefaultConstruct();
  _LinkGetLicResp_default_instance_.DefaultConstruct();
  _LinkGetVerReq_default_instance_.DefaultConstruct();
  _LinkGetVerResp_default_instance_.DefaultConstruct();
  _LinkConfLicReq_default_instance_.DefaultConstruct();
  _LinkConfLicResp_default_instance_.DefaultConstruct();
  _LinkAddUserReq_default_instance_.DefaultConstruct();
  _LinkAddUserResp_default_instance_.DefaultConstruct();
  _LinkHasRecordItem_default_instance_.DefaultConstruct();
  _LinkHasRecordList_default_instance_.DefaultConstruct();
  _LinkHasRecordReq_default_instance_.DefaultConstruct();
  _LinkHasRecordResp_default_instance_.DefaultConstruct();
  _LinkRecordItem_default_instance_.DefaultConstruct();
  _LinkRecordList_default_instance_.DefaultConstruct();
  _LinkSearchRecordReq_default_instance_.DefaultConstruct();
  _LinkSearchRecordResp_default_instance_.DefaultConstruct();
  _LinkStartLiveCmd_default_instance_.DefaultConstruct();
  _LinkStopLiveCmd_default_instance_.DefaultConstruct();
  _LinkPlayBackCmd_default_instance_.DefaultConstruct();
  _LinkPlayPauseCmd_default_instance_.DefaultConstruct();
  _LinkPlayResumeCmd_default_instance_.DefaultConstruct();
  _LinkPlaySeekCmd_default_instance_.DefaultConstruct();
  _LinkPlayStopCmd_default_instance_.DefaultConstruct();
  _LinkPtzCmd_default_instance_.DefaultConstruct();
  _LinkCamSearchStartReq_default_instance_.DefaultConstruct();
  _LinkCamSearchStartResp_default_instance_.DefaultConstruct();
  _LinkCamSearchStopReq_default_instance_.DefaultConstruct();
  _LinkCamSearchStopResp_default_instance_.DefaultConstruct();
  _LinkRegEventReq_default_instance_.DefaultConstruct();
  _LinkRegEventResp_default_instance_.DefaultConstruct();
  _LinkUnRegEventReq_default_instance_.DefaultConstruct();
  _LinkUnRegEventResp_default_instance_.DefaultConstruct();
  _LinkEventSearchReq_default_instance_.DefaultConstruct();
  _LinkEventSearchResp_default_instance_.DefaultConstruct();
  _LinkHandleEventReq_default_instance_.DefaultConstruct();
  _LinkHandleEventResp_default_instance_.DefaultConstruct();
  _LinkCamAddNotify_default_instance_.DefaultConstruct();
  _LinkCamIdNotify_default_instance_.DefaultConstruct();
  _LinkCamSearchedNotify_default_instance_.DefaultConstruct();
  _LinkEventNotify_default_instance_.DefaultConstruct();
  _LinkListCamResp_default_instance_.get_mutable()->clist_ = const_cast< ::VidCameraList*>(
      ::VidCameraList::internal_default_instance());
  _LinkCamResp_default_instance_.get_mutable()->ccam_ = const_cast< ::VidCamera*>(
      ::VidCamera::internal_default_instance());
  _LinkAddCamReq_default_instance_.get_mutable()->ccam_ = const_cast< ::VidCamera*>(
      ::VidCamera::internal_default_instance());
  _LinkSetCamSchedReq_default_instance_.get_mutable()->ccam_ = const_cast< ::VidCamera*>(
      ::VidCamera::internal_default_instance());
  _LinkGetStreamListResp_default_instance_.get_mutable()->clist_ = const_cast< ::VidStreamList*>(
      ::VidStreamList::internal_default_instance());
  _LinkVidDiskListResp_default_instance_.get_mutable()->cdisk_ = const_cast< ::VidDiskList*>(
      ::VidDiskList::internal_default_instance());
  _LinkSysVidDiskListResp_default_instance_.get_mutable()->cdisk_ = const_cast< ::VidDiskList*>(
      ::VidDiskList::internal_default_instance());
  _LinkAddDiskReq_default_instance_.get_mutable()->cdisk_ = const_cast< ::VidDisk*>(
      ::VidDisk::internal_default_instance());
  _LinkHasRecordReq_default_instance_.get_mutable()->clist_ = const_cast< ::LinkHasRecordList*>(
      ::LinkHasRecordList::internal_default_instance());
  _LinkHasRecordResp_default_instance_.get_mutable()->clist_ = const_cast< ::LinkHasRecordList*>(
      ::LinkHasRecordList::internal_default_instance());
  _LinkSearchRecordResp_default_instance_.get_mutable()->clist_ = const_cast< ::LinkRecordList*>(
      ::LinkRecordList::internal_default_instance());
  _LinkCamAddNotify_default_instance_.get_mutable()->ccam_ = const_cast< ::VidCamera*>(
      ::VidCamera::internal_default_instance());
  _LinkEventNotify_default_instance_.get_mutable()->cevent_ = const_cast< ::VidEvent*>(
      ::VidEvent::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\020linksystem.proto\032\rvidconf.proto\"6\n\014Lin"
      "kLoginReq\022\023\n\013strUserName\030\001 \001(\t\022\021\n\tstrPas"
      "swd\030\002 \001(\t\"B\n\rLinkLoginResp\022\020\n\010strNonce\030\001"
      " \001(\t\022\021\n\tbRetNonce\030\002 \001(\010\022\014\n\004bRet\030\003 \001(\010\"&\n"
      "\020LinkKeepaliveReq\022\022\n\nnKeepalive\030\001 \001(\005\"\'\n"
      "\021LinkKeepaliveResp\022\022\n\nnKeepalive\030\001 \001(\005\"#"
      "\n\020LinkRegNotifyReq\022\017\n\007strFake\030\001 \001(\t\"%\n\021L"
      "inkRegNotifyResp\022\020\n\010bSuccess\030\001 \001(\010\"\036\n\016Li"
      "nkListCamReq\022\014\n\004bAll\030\001 \001(\010\"0\n\017LinkListCa"
      "mResp\022\035\n\005cList\030\001 \001(\0132\016.VidCameraList\"\033\n\n"
      "LinkCamReq\022\r\n\005strId\030\001 \001(\t\"\'\n\013LinkCamResp"
      "\022\030\n\004cCam\030\001 \001(\0132\n.VidCamera\")\n\rLinkAddCam"
      "Req\022\030\n\004cCam\030\001 \001(\0132\n.VidCamera\"\"\n\016LinkAdd"
      "CamResp\022\020\n\010bSuccess\030\001 \001(\010\"\036\n\rLinkDelCamR"
      "eq\022\r\n\005strId\030\001 \001(\t\"\"\n\016LinkDelCamResp\022\020\n\010b"
      "Success\030\001 \001(\010\".\n\022LinkSetCamSchedReq\022\030\n\004c"
      "Cam\030\001 \001(\0132\n.VidCamera\"\'\n\023LinkSetCamSched"
      "Resp\022\020\n\010bSuccess\030\001 \001(\010\"%\n\024LinkGetStreamL"
      "istReq\022\r\n\005strId\030\001 \001(\t\"6\n\025LinkGetStreamLi"
      "stResp\022\035\n\005cList\030\001 \001(\0132\016.VidStreamList\"\"\n"
      "\022LinkVidDiskListReq\022\014\n\004bAll\030\001 \001(\010\"2\n\023Lin"
      "kVidDiskListResp\022\033\n\005cDisk\030\001 \001(\0132\014.VidDis"
      "kList\"%\n\025LinkSysVidDiskListReq\022\014\n\004bAll\030\001"
      " \001(\010\"5\n\026LinkSysVidDiskListResp\022\033\n\005cDisk\030"
      "\001 \001(\0132\014.VidDiskList\")\n\016LinkAddDiskReq\022\027\n"
      "\005cDisk\030\001 \001(\0132\010.VidDisk\"#\n\017LinkAddDiskRes"
      "p\022\020\n\010bSuccess\030\001 \001(\010\"\037\n\016LinkDelDiskReq\022\r\n"
      "\005strId\030\001 \001(\t\"#\n\017LinkDelDiskResp\022\020\n\010bSucc"
      "ess\030\001 \001(\010\"7\n\026LinkUpdateDiskLimitReq\022\r\n\005s"
      "trId\030\001 \001(\t\022\016\n\006nLimit\030\002 \001(\003\"+\n\027LinkUpdate"
      "DiskLimitResp\022\020\n\010bSuccess\030\001 \001(\010\" \n\rLinkG"
      "etLicReq\022\017\n\007strFake\030\001 \001(\t\"~\n\016LinkGetLicR"
      "esp\022\016\n\006strLic\030\001 \001(\t\022\021\n\tstrHostId\030\002 \001(\t\022\013"
      "\n\003nCh\030\003 \001(\005\022\017\n\007strType\030\004 \001(\t\022\024\n\014strStart"
      "Time\030\005 \001(\t\022\025\n\rstrExpireTime\030\006 \001(\t\" \n\rLin"
      "kGetVerReq\022\017\n\007strFake\030\001 \001(\t\"1\n\016LinkGetVe"
      "rResp\022\016\n\006strVer\030\001 \001(\t\022\017\n\007strInfo\030\002 \001(\t\" "
      "\n\016LinkConfLicReq\022\016\n\006strLic\030\001 \001(\t\"#\n\017Link"
      "ConfLicResp\022\020\n\010bSuccess\030\001 \001(\010\"4\n\016LinkAdd"
      "UserReq\022\017\n\007strUser\030\001 \001(\t\022\021\n\tstrPasswd\030\002 "
      "\001(\t\"#\n\017LinkAddUserResp\022\020\n\010bSuccess\030\001 \001(\010"
      "\"[\n\021LinkHasRecordItem\022\013\n\003nId\030\001 \001(\003\022\016\n\006nS"
      "tart\030\002 \001(\005\022\014\n\004nEnd\030\003 \001(\005\022\r\n\005nType\030\004 \001(\005\022"
      "\014\n\004bHas\030\005 \001(\010\"8\n\021LinkHasRecordList\022#\n\007cH"
      "asRec\030\001 \003(\0132\022.LinkHasRecordItem\"D\n\020LinkH"
      "asRecordReq\022\r\n\005strId\030\001 \001(\t\022!\n\005cList\030\002 \001("
      "\0132\022.LinkHasRecordList\"6\n\021LinkHasRecordRe"
      "sp\022!\n\005cList\030\001 \001(\0132\022.LinkHasRecordList\"J\n"
      "\016LinkRecordItem\022\013\n\003nId\030\001 \001(\003\022\016\n\006nStart\030\002"
      " \001(\005\022\014\n\004nEnd\030\003 \001(\005\022\r\n\005nType\030\004 \001(\005\"0\n\016Lin"
      "kRecordList\022\036\n\005cList\030\001 \003(\0132\017.LinkRecordI"
      "tem\"Q\n\023LinkSearchRecordReq\022\r\n\005strId\030\001 \001("
      "\t\022\016\n\006nStart\030\002 \001(\005\022\014\n\004nEnd\030\003 \001(\005\022\r\n\005nType"
      "\030\004 \001(\005\"E\n\024LinkSearchRecordResp\022\r\n\005strId\030"
      "\001 \001(\t\022\036\n\005cList\030\002 \001(\0132\017.LinkRecordList\"2\n"
      "\020LinkStartLiveCmd\022\r\n\005strId\030\001 \001(\t\022\017\n\007nStr"
      "eam\030\002 \001(\005\"1\n\017LinkStopLiveCmd\022\r\n\005strId\030\001 "
      "\001(\t\022\017\n\007nStream\030\002 \001(\005\"3\n\017LinkPlayBackCmd\022"
      "\r\n\005strId\030\001 \001(\t\022\021\n\tnPlaytime\030\002 \001(\005\"!\n\020Lin"
      "kPlayPauseCmd\022\r\n\005strId\030\001 \001(\t\"\"\n\021LinkPlay"
      "ResumeCmd\022\r\n\005strId\030\001 \001(\t\"3\n\017LinkPlaySeek"
      "Cmd\022\r\n\005strId\030\001 \001(\t\022\021\n\tnPlaytime\030\002 \001(\005\" \n"
      "\017LinkPlayStopCmd\022\r\n\005strId\030\001 \001(\t\"<\n\nLinkP"
      "tzCmd\022\r\n\005strId\030\001 \001(\t\022\017\n\007nAction\030\002 \001(\005\022\016\n"
      "\006nParam\030\003 \001(\001\"(\n\025LinkCamSearchStartReq\022\017"
      "\n\007strFake\030\001 \001(\t\"*\n\026LinkCamSearchStartRes"
      "p\022\020\n\010bSuccess\030\001 \001(\010\"\'\n\024LinkCamSearchStop"
      "Req\022\017\n\007strFake\030\001 \001(\t\")\n\025LinkCamSearchSto"
      "pResp\022\020\n\010bSuccess\030\001 \001(\010\" \n\017LinkRegEventR"
      "eq\022\r\n\005strId\030\001 \001(\t\"$\n\020LinkRegEventResp\022\020\n"
      "\010bSuccess\030\001 \001(\010\"\"\n\021LinkUnRegEventReq\022\r\n\005"
      "strId\030\001 \001(\t\"&\n\022LinkUnRegEventResp\022\020\n\010bSu"
      "ccess\030\001 \001(\010\"A\n\022LinkEventSearchReq\022\r\n\005str"
      "Id\030\001 \001(\t\022\016\n\006nStart\030\002 \001(\005\022\014\n\004nEnd\030\003 \001(\005\"\'"
      "\n\023LinkEventSearchResp\022\020\n\010bSuccess\030\001 \001(\010\""
      "#\n\022LinkHandleEventReq\022\r\n\005strId\030\001 \001(\t\"\'\n\023"
      "LinkHandleEventResp\022\020\n\010bSuccess\030\001 \001(\010\",\n"
      "\020LinkCamAddNotify\022\030\n\004cCam\030\001 \001(\0132\n.VidCam"
      "era\" \n\017LinkCamIdNotify\022\r\n\005strId\030\001 \001(\t\"b\n"
      "\025LinkCamSearchedNotify\022\r\n\005strIp\030\001 \001(\t\022\017\n"
      "\007strPort\030\002 \001(\t\022\020\n\010strModel\030\003 \001(\t\022\027\n\017strO"
      "NVIFAddress\030\004 \001(\t\",\n\017LinkEventNotify\022\031\n\006"
      "cEvent\030\001 \001(\0132\t.VidEventb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 3311);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "linksystem.proto", &protobuf_RegisterTypes);
  ::protobuf_vidconf_2eproto::AddDescriptors();
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

}  // namespace protobuf_linksystem_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkLoginReq::kStrUserNameFieldNumber;
const int LinkLoginReq::kStrPasswdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkLoginReq::LinkLoginReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkLoginReq)
}
LinkLoginReq::LinkLoginReq(const LinkLoginReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strusername_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strusername().size() > 0) {
    strusername_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strusername_);
  }
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpasswd().size() > 0) {
    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkLoginReq)
}

void LinkLoginReq::SharedCtor() {
  strusername_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkLoginReq::~LinkLoginReq() {
  // @@protoc_insertion_point(destructor:LinkLoginReq)
  SharedDtor();
}

void LinkLoginReq::SharedDtor() {
  strusername_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkLoginReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkLoginReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[0].descriptor;
}

const LinkLoginReq& LinkLoginReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkLoginReq* LinkLoginReq::New(::google::protobuf::Arena* arena) const {
  LinkLoginReq* n = new LinkLoginReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkLoginReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkLoginReq)
  strusername_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkLoginReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkLoginReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strUserName = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strusername()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strusername().data(), this->strusername().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkLoginReq.strUserName"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPasswd = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpasswd().data(), this->strpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkLoginReq.strPasswd"));
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
  // @@protoc_insertion_point(parse_success:LinkLoginReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkLoginReq)
  return false;
#undef DO_
}

void LinkLoginReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkLoginReq)
  // string strUserName = 1;
  if (this->strusername().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strusername().data(), this->strusername().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkLoginReq.strUserName");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strusername(), output);
  }

  // string strPasswd = 2;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkLoginReq.strPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strpasswd(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkLoginReq)
}

::google::protobuf::uint8* LinkLoginReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkLoginReq)
  // string strUserName = 1;
  if (this->strusername().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strusername().data(), this->strusername().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkLoginReq.strUserName");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strusername(), target);
  }

  // string strPasswd = 2;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkLoginReq.strPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strpasswd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkLoginReq)
  return target;
}

size_t LinkLoginReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkLoginReq)
  size_t total_size = 0;

  // string strUserName = 1;
  if (this->strusername().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strusername());
  }

  // string strPasswd = 2;
  if (this->strpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpasswd());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkLoginReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkLoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkLoginReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkLoginReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkLoginReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkLoginReq)
    MergeFrom(*source);
  }
}

void LinkLoginReq::MergeFrom(const LinkLoginReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkLoginReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strusername().size() > 0) {

    strusername_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strusername_);
  }
  if (from.strpasswd().size() > 0) {

    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
}

void LinkLoginReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkLoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkLoginReq::CopyFrom(const LinkLoginReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkLoginReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkLoginReq::IsInitialized() const {
  return true;
}

void LinkLoginReq::Swap(LinkLoginReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkLoginReq::InternalSwap(LinkLoginReq* other) {
  strusername_.Swap(&other->strusername_);
  strpasswd_.Swap(&other->strpasswd_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkLoginReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkLoginReq

// string strUserName = 1;
void LinkLoginReq::clear_strusername() {
  strusername_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkLoginReq::strusername() const {
  // @@protoc_insertion_point(field_get:LinkLoginReq.strUserName)
  return strusername_.GetNoArena();
}
void LinkLoginReq::set_strusername(const ::std::string& value) {
  
  strusername_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkLoginReq.strUserName)
}
#if LANG_CXX11
void LinkLoginReq::set_strusername(::std::string&& value) {
  
  strusername_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkLoginReq.strUserName)
}
#endif
void LinkLoginReq::set_strusername(const char* value) {
  
  strusername_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkLoginReq.strUserName)
}
void LinkLoginReq::set_strusername(const char* value, size_t size) {
  
  strusername_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkLoginReq.strUserName)
}
::std::string* LinkLoginReq::mutable_strusername() {
  
  // @@protoc_insertion_point(field_mutable:LinkLoginReq.strUserName)
  return strusername_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkLoginReq::release_strusername() {
  // @@protoc_insertion_point(field_release:LinkLoginReq.strUserName)
  
  return strusername_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkLoginReq::set_allocated_strusername(::std::string* strusername) {
  if (strusername != NULL) {
    
  } else {
    
  }
  strusername_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strusername);
  // @@protoc_insertion_point(field_set_allocated:LinkLoginReq.strUserName)
}

// string strPasswd = 2;
void LinkLoginReq::clear_strpasswd() {
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkLoginReq::strpasswd() const {
  // @@protoc_insertion_point(field_get:LinkLoginReq.strPasswd)
  return strpasswd_.GetNoArena();
}
void LinkLoginReq::set_strpasswd(const ::std::string& value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkLoginReq.strPasswd)
}
#if LANG_CXX11
void LinkLoginReq::set_strpasswd(::std::string&& value) {
  
  strpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkLoginReq.strPasswd)
}
#endif
void LinkLoginReq::set_strpasswd(const char* value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkLoginReq.strPasswd)
}
void LinkLoginReq::set_strpasswd(const char* value, size_t size) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkLoginReq.strPasswd)
}
::std::string* LinkLoginReq::mutable_strpasswd() {
  
  // @@protoc_insertion_point(field_mutable:LinkLoginReq.strPasswd)
  return strpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkLoginReq::release_strpasswd() {
  // @@protoc_insertion_point(field_release:LinkLoginReq.strPasswd)
  
  return strpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkLoginReq::set_allocated_strpasswd(::std::string* strpasswd) {
  if (strpasswd != NULL) {
    
  } else {
    
  }
  strpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpasswd);
  // @@protoc_insertion_point(field_set_allocated:LinkLoginReq.strPasswd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkLoginResp::kStrNonceFieldNumber;
const int LinkLoginResp::kBRetNonceFieldNumber;
const int LinkLoginResp::kBRetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkLoginResp::LinkLoginResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkLoginResp)
}
LinkLoginResp::LinkLoginResp(const LinkLoginResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strnonce_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strnonce().size() > 0) {
    strnonce_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strnonce_);
  }
  ::memcpy(&bretnonce_, &from.bretnonce_,
    reinterpret_cast<char*>(&bret_) -
    reinterpret_cast<char*>(&bretnonce_) + sizeof(bret_));
  // @@protoc_insertion_point(copy_constructor:LinkLoginResp)
}

void LinkLoginResp::SharedCtor() {
  strnonce_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&bretnonce_, 0, reinterpret_cast<char*>(&bret_) -
    reinterpret_cast<char*>(&bretnonce_) + sizeof(bret_));
  _cached_size_ = 0;
}

LinkLoginResp::~LinkLoginResp() {
  // @@protoc_insertion_point(destructor:LinkLoginResp)
  SharedDtor();
}

void LinkLoginResp::SharedDtor() {
  strnonce_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkLoginResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkLoginResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[1].descriptor;
}

const LinkLoginResp& LinkLoginResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkLoginResp* LinkLoginResp::New(::google::protobuf::Arena* arena) const {
  LinkLoginResp* n = new LinkLoginResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkLoginResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkLoginResp)
  strnonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&bretnonce_, 0, reinterpret_cast<char*>(&bret_) -
    reinterpret_cast<char*>(&bretnonce_) + sizeof(bret_));
}

bool LinkLoginResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkLoginResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strNonce = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strnonce()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strnonce().data(), this->strnonce().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkLoginResp.strNonce"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bRetNonce = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bretnonce_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bRet = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bret_)));
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
  // @@protoc_insertion_point(parse_success:LinkLoginResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkLoginResp)
  return false;
#undef DO_
}

void LinkLoginResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkLoginResp)
  // string strNonce = 1;
  if (this->strnonce().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strnonce().data(), this->strnonce().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkLoginResp.strNonce");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strnonce(), output);
  }

  // bool bRetNonce = 2;
  if (this->bretnonce() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->bretnonce(), output);
  }

  // bool bRet = 3;
  if (this->bret() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->bret(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkLoginResp)
}

::google::protobuf::uint8* LinkLoginResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkLoginResp)
  // string strNonce = 1;
  if (this->strnonce().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strnonce().data(), this->strnonce().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkLoginResp.strNonce");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strnonce(), target);
  }

  // bool bRetNonce = 2;
  if (this->bretnonce() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->bretnonce(), target);
  }

  // bool bRet = 3;
  if (this->bret() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->bret(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkLoginResp)
  return target;
}

size_t LinkLoginResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkLoginResp)
  size_t total_size = 0;

  // string strNonce = 1;
  if (this->strnonce().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strnonce());
  }

  // bool bRetNonce = 2;
  if (this->bretnonce() != 0) {
    total_size += 1 + 1;
  }

  // bool bRet = 3;
  if (this->bret() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkLoginResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkLoginResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkLoginResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkLoginResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkLoginResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkLoginResp)
    MergeFrom(*source);
  }
}

void LinkLoginResp::MergeFrom(const LinkLoginResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkLoginResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strnonce().size() > 0) {

    strnonce_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strnonce_);
  }
  if (from.bretnonce() != 0) {
    set_bretnonce(from.bretnonce());
  }
  if (from.bret() != 0) {
    set_bret(from.bret());
  }
}

void LinkLoginResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkLoginResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkLoginResp::CopyFrom(const LinkLoginResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkLoginResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkLoginResp::IsInitialized() const {
  return true;
}

void LinkLoginResp::Swap(LinkLoginResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkLoginResp::InternalSwap(LinkLoginResp* other) {
  strnonce_.Swap(&other->strnonce_);
  std::swap(bretnonce_, other->bretnonce_);
  std::swap(bret_, other->bret_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkLoginResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[1];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkLoginResp

// string strNonce = 1;
void LinkLoginResp::clear_strnonce() {
  strnonce_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkLoginResp::strnonce() const {
  // @@protoc_insertion_point(field_get:LinkLoginResp.strNonce)
  return strnonce_.GetNoArena();
}
void LinkLoginResp::set_strnonce(const ::std::string& value) {
  
  strnonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkLoginResp.strNonce)
}
#if LANG_CXX11
void LinkLoginResp::set_strnonce(::std::string&& value) {
  
  strnonce_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkLoginResp.strNonce)
}
#endif
void LinkLoginResp::set_strnonce(const char* value) {
  
  strnonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkLoginResp.strNonce)
}
void LinkLoginResp::set_strnonce(const char* value, size_t size) {
  
  strnonce_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkLoginResp.strNonce)
}
::std::string* LinkLoginResp::mutable_strnonce() {
  
  // @@protoc_insertion_point(field_mutable:LinkLoginResp.strNonce)
  return strnonce_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkLoginResp::release_strnonce() {
  // @@protoc_insertion_point(field_release:LinkLoginResp.strNonce)
  
  return strnonce_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkLoginResp::set_allocated_strnonce(::std::string* strnonce) {
  if (strnonce != NULL) {
    
  } else {
    
  }
  strnonce_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strnonce);
  // @@protoc_insertion_point(field_set_allocated:LinkLoginResp.strNonce)
}

// bool bRetNonce = 2;
void LinkLoginResp::clear_bretnonce() {
  bretnonce_ = false;
}
bool LinkLoginResp::bretnonce() const {
  // @@protoc_insertion_point(field_get:LinkLoginResp.bRetNonce)
  return bretnonce_;
}
void LinkLoginResp::set_bretnonce(bool value) {
  
  bretnonce_ = value;
  // @@protoc_insertion_point(field_set:LinkLoginResp.bRetNonce)
}

// bool bRet = 3;
void LinkLoginResp::clear_bret() {
  bret_ = false;
}
bool LinkLoginResp::bret() const {
  // @@protoc_insertion_point(field_get:LinkLoginResp.bRet)
  return bret_;
}
void LinkLoginResp::set_bret(bool value) {
  
  bret_ = value;
  // @@protoc_insertion_point(field_set:LinkLoginResp.bRet)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkKeepaliveReq::kNKeepaliveFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkKeepaliveReq::LinkKeepaliveReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkKeepaliveReq)
}
LinkKeepaliveReq::LinkKeepaliveReq(const LinkKeepaliveReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  nkeepalive_ = from.nkeepalive_;
  // @@protoc_insertion_point(copy_constructor:LinkKeepaliveReq)
}

void LinkKeepaliveReq::SharedCtor() {
  nkeepalive_ = 0;
  _cached_size_ = 0;
}

LinkKeepaliveReq::~LinkKeepaliveReq() {
  // @@protoc_insertion_point(destructor:LinkKeepaliveReq)
  SharedDtor();
}

void LinkKeepaliveReq::SharedDtor() {
}

void LinkKeepaliveReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkKeepaliveReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[2].descriptor;
}

const LinkKeepaliveReq& LinkKeepaliveReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkKeepaliveReq* LinkKeepaliveReq::New(::google::protobuf::Arena* arena) const {
  LinkKeepaliveReq* n = new LinkKeepaliveReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkKeepaliveReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkKeepaliveReq)
  nkeepalive_ = 0;
}

bool LinkKeepaliveReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkKeepaliveReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 nKeepalive = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nkeepalive_)));
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
  // @@protoc_insertion_point(parse_success:LinkKeepaliveReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkKeepaliveReq)
  return false;
#undef DO_
}

void LinkKeepaliveReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkKeepaliveReq)
  // int32 nKeepalive = 1;
  if (this->nkeepalive() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->nkeepalive(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkKeepaliveReq)
}

::google::protobuf::uint8* LinkKeepaliveReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkKeepaliveReq)
  // int32 nKeepalive = 1;
  if (this->nkeepalive() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->nkeepalive(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkKeepaliveReq)
  return target;
}

size_t LinkKeepaliveReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkKeepaliveReq)
  size_t total_size = 0;

  // int32 nKeepalive = 1;
  if (this->nkeepalive() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nkeepalive());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkKeepaliveReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkKeepaliveReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkKeepaliveReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkKeepaliveReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkKeepaliveReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkKeepaliveReq)
    MergeFrom(*source);
  }
}

void LinkKeepaliveReq::MergeFrom(const LinkKeepaliveReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkKeepaliveReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.nkeepalive() != 0) {
    set_nkeepalive(from.nkeepalive());
  }
}

void LinkKeepaliveReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkKeepaliveReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkKeepaliveReq::CopyFrom(const LinkKeepaliveReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkKeepaliveReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkKeepaliveReq::IsInitialized() const {
  return true;
}

void LinkKeepaliveReq::Swap(LinkKeepaliveReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkKeepaliveReq::InternalSwap(LinkKeepaliveReq* other) {
  std::swap(nkeepalive_, other->nkeepalive_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkKeepaliveReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[2];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkKeepaliveReq

// int32 nKeepalive = 1;
void LinkKeepaliveReq::clear_nkeepalive() {
  nkeepalive_ = 0;
}
::google::protobuf::int32 LinkKeepaliveReq::nkeepalive() const {
  // @@protoc_insertion_point(field_get:LinkKeepaliveReq.nKeepalive)
  return nkeepalive_;
}
void LinkKeepaliveReq::set_nkeepalive(::google::protobuf::int32 value) {
  
  nkeepalive_ = value;
  // @@protoc_insertion_point(field_set:LinkKeepaliveReq.nKeepalive)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkKeepaliveResp::kNKeepaliveFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkKeepaliveResp::LinkKeepaliveResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkKeepaliveResp)
}
LinkKeepaliveResp::LinkKeepaliveResp(const LinkKeepaliveResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  nkeepalive_ = from.nkeepalive_;
  // @@protoc_insertion_point(copy_constructor:LinkKeepaliveResp)
}

void LinkKeepaliveResp::SharedCtor() {
  nkeepalive_ = 0;
  _cached_size_ = 0;
}

LinkKeepaliveResp::~LinkKeepaliveResp() {
  // @@protoc_insertion_point(destructor:LinkKeepaliveResp)
  SharedDtor();
}

void LinkKeepaliveResp::SharedDtor() {
}

void LinkKeepaliveResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkKeepaliveResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[3].descriptor;
}

const LinkKeepaliveResp& LinkKeepaliveResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkKeepaliveResp* LinkKeepaliveResp::New(::google::protobuf::Arena* arena) const {
  LinkKeepaliveResp* n = new LinkKeepaliveResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkKeepaliveResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkKeepaliveResp)
  nkeepalive_ = 0;
}

bool LinkKeepaliveResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkKeepaliveResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 nKeepalive = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nkeepalive_)));
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
  // @@protoc_insertion_point(parse_success:LinkKeepaliveResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkKeepaliveResp)
  return false;
#undef DO_
}

void LinkKeepaliveResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkKeepaliveResp)
  // int32 nKeepalive = 1;
  if (this->nkeepalive() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->nkeepalive(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkKeepaliveResp)
}

::google::protobuf::uint8* LinkKeepaliveResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkKeepaliveResp)
  // int32 nKeepalive = 1;
  if (this->nkeepalive() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->nkeepalive(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkKeepaliveResp)
  return target;
}

size_t LinkKeepaliveResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkKeepaliveResp)
  size_t total_size = 0;

  // int32 nKeepalive = 1;
  if (this->nkeepalive() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nkeepalive());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkKeepaliveResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkKeepaliveResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkKeepaliveResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkKeepaliveResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkKeepaliveResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkKeepaliveResp)
    MergeFrom(*source);
  }
}

void LinkKeepaliveResp::MergeFrom(const LinkKeepaliveResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkKeepaliveResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.nkeepalive() != 0) {
    set_nkeepalive(from.nkeepalive());
  }
}

void LinkKeepaliveResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkKeepaliveResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkKeepaliveResp::CopyFrom(const LinkKeepaliveResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkKeepaliveResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkKeepaliveResp::IsInitialized() const {
  return true;
}

void LinkKeepaliveResp::Swap(LinkKeepaliveResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkKeepaliveResp::InternalSwap(LinkKeepaliveResp* other) {
  std::swap(nkeepalive_, other->nkeepalive_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkKeepaliveResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[3];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkKeepaliveResp

// int32 nKeepalive = 1;
void LinkKeepaliveResp::clear_nkeepalive() {
  nkeepalive_ = 0;
}
::google::protobuf::int32 LinkKeepaliveResp::nkeepalive() const {
  // @@protoc_insertion_point(field_get:LinkKeepaliveResp.nKeepalive)
  return nkeepalive_;
}
void LinkKeepaliveResp::set_nkeepalive(::google::protobuf::int32 value) {
  
  nkeepalive_ = value;
  // @@protoc_insertion_point(field_set:LinkKeepaliveResp.nKeepalive)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkRegNotifyReq::kStrFakeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkRegNotifyReq::LinkRegNotifyReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkRegNotifyReq)
}
LinkRegNotifyReq::LinkRegNotifyReq(const LinkRegNotifyReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strfake().size() > 0) {
    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkRegNotifyReq)
}

void LinkRegNotifyReq::SharedCtor() {
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkRegNotifyReq::~LinkRegNotifyReq() {
  // @@protoc_insertion_point(destructor:LinkRegNotifyReq)
  SharedDtor();
}

void LinkRegNotifyReq::SharedDtor() {
  strfake_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkRegNotifyReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkRegNotifyReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[4].descriptor;
}

const LinkRegNotifyReq& LinkRegNotifyReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkRegNotifyReq* LinkRegNotifyReq::New(::google::protobuf::Arena* arena) const {
  LinkRegNotifyReq* n = new LinkRegNotifyReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkRegNotifyReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkRegNotifyReq)
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkRegNotifyReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkRegNotifyReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strFake = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strfake()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strfake().data(), this->strfake().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkRegNotifyReq.strFake"));
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
  // @@protoc_insertion_point(parse_success:LinkRegNotifyReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkRegNotifyReq)
  return false;
#undef DO_
}

void LinkRegNotifyReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkRegNotifyReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkRegNotifyReq.strFake");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strfake(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkRegNotifyReq)
}

::google::protobuf::uint8* LinkRegNotifyReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkRegNotifyReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkRegNotifyReq.strFake");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strfake(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkRegNotifyReq)
  return target;
}

size_t LinkRegNotifyReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkRegNotifyReq)
  size_t total_size = 0;

  // string strFake = 1;
  if (this->strfake().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strfake());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkRegNotifyReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkRegNotifyReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkRegNotifyReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkRegNotifyReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkRegNotifyReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkRegNotifyReq)
    MergeFrom(*source);
  }
}

void LinkRegNotifyReq::MergeFrom(const LinkRegNotifyReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkRegNotifyReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strfake().size() > 0) {

    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
}

void LinkRegNotifyReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkRegNotifyReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkRegNotifyReq::CopyFrom(const LinkRegNotifyReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkRegNotifyReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkRegNotifyReq::IsInitialized() const {
  return true;
}

void LinkRegNotifyReq::Swap(LinkRegNotifyReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkRegNotifyReq::InternalSwap(LinkRegNotifyReq* other) {
  strfake_.Swap(&other->strfake_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkRegNotifyReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[4];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkRegNotifyReq

// string strFake = 1;
void LinkRegNotifyReq::clear_strfake() {
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkRegNotifyReq::strfake() const {
  // @@protoc_insertion_point(field_get:LinkRegNotifyReq.strFake)
  return strfake_.GetNoArena();
}
void LinkRegNotifyReq::set_strfake(const ::std::string& value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkRegNotifyReq.strFake)
}
#if LANG_CXX11
void LinkRegNotifyReq::set_strfake(::std::string&& value) {
  
  strfake_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkRegNotifyReq.strFake)
}
#endif
void LinkRegNotifyReq::set_strfake(const char* value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkRegNotifyReq.strFake)
}
void LinkRegNotifyReq::set_strfake(const char* value, size_t size) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkRegNotifyReq.strFake)
}
::std::string* LinkRegNotifyReq::mutable_strfake() {
  
  // @@protoc_insertion_point(field_mutable:LinkRegNotifyReq.strFake)
  return strfake_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkRegNotifyReq::release_strfake() {
  // @@protoc_insertion_point(field_release:LinkRegNotifyReq.strFake)
  
  return strfake_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkRegNotifyReq::set_allocated_strfake(::std::string* strfake) {
  if (strfake != NULL) {
    
  } else {
    
  }
  strfake_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strfake);
  // @@protoc_insertion_point(field_set_allocated:LinkRegNotifyReq.strFake)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkRegNotifyResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkRegNotifyResp::LinkRegNotifyResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkRegNotifyResp)
}
LinkRegNotifyResp::LinkRegNotifyResp(const LinkRegNotifyResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkRegNotifyResp)
}

void LinkRegNotifyResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkRegNotifyResp::~LinkRegNotifyResp() {
  // @@protoc_insertion_point(destructor:LinkRegNotifyResp)
  SharedDtor();
}

void LinkRegNotifyResp::SharedDtor() {
}

void LinkRegNotifyResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkRegNotifyResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[5].descriptor;
}

const LinkRegNotifyResp& LinkRegNotifyResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkRegNotifyResp* LinkRegNotifyResp::New(::google::protobuf::Arena* arena) const {
  LinkRegNotifyResp* n = new LinkRegNotifyResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkRegNotifyResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkRegNotifyResp)
  bsuccess_ = false;
}

bool LinkRegNotifyResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkRegNotifyResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkRegNotifyResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkRegNotifyResp)
  return false;
#undef DO_
}

void LinkRegNotifyResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkRegNotifyResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkRegNotifyResp)
}

::google::protobuf::uint8* LinkRegNotifyResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkRegNotifyResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkRegNotifyResp)
  return target;
}

size_t LinkRegNotifyResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkRegNotifyResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkRegNotifyResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkRegNotifyResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkRegNotifyResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkRegNotifyResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkRegNotifyResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkRegNotifyResp)
    MergeFrom(*source);
  }
}

void LinkRegNotifyResp::MergeFrom(const LinkRegNotifyResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkRegNotifyResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkRegNotifyResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkRegNotifyResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkRegNotifyResp::CopyFrom(const LinkRegNotifyResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkRegNotifyResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkRegNotifyResp::IsInitialized() const {
  return true;
}

void LinkRegNotifyResp::Swap(LinkRegNotifyResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkRegNotifyResp::InternalSwap(LinkRegNotifyResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkRegNotifyResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[5];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkRegNotifyResp

// bool bSuccess = 1;
void LinkRegNotifyResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkRegNotifyResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkRegNotifyResp.bSuccess)
  return bsuccess_;
}
void LinkRegNotifyResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkRegNotifyResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkListCamReq::kBAllFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkListCamReq::LinkListCamReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkListCamReq)
}
LinkListCamReq::LinkListCamReq(const LinkListCamReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ball_ = from.ball_;
  // @@protoc_insertion_point(copy_constructor:LinkListCamReq)
}

void LinkListCamReq::SharedCtor() {
  ball_ = false;
  _cached_size_ = 0;
}

LinkListCamReq::~LinkListCamReq() {
  // @@protoc_insertion_point(destructor:LinkListCamReq)
  SharedDtor();
}

void LinkListCamReq::SharedDtor() {
}

void LinkListCamReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkListCamReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[6].descriptor;
}

const LinkListCamReq& LinkListCamReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkListCamReq* LinkListCamReq::New(::google::protobuf::Arena* arena) const {
  LinkListCamReq* n = new LinkListCamReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkListCamReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkListCamReq)
  ball_ = false;
}

bool LinkListCamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkListCamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bAll = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ball_)));
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
  // @@protoc_insertion_point(parse_success:LinkListCamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkListCamReq)
  return false;
#undef DO_
}

void LinkListCamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkListCamReq)
  // bool bAll = 1;
  if (this->ball() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->ball(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkListCamReq)
}

::google::protobuf::uint8* LinkListCamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkListCamReq)
  // bool bAll = 1;
  if (this->ball() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->ball(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkListCamReq)
  return target;
}

size_t LinkListCamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkListCamReq)
  size_t total_size = 0;

  // bool bAll = 1;
  if (this->ball() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkListCamReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkListCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkListCamReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkListCamReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkListCamReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkListCamReq)
    MergeFrom(*source);
  }
}

void LinkListCamReq::MergeFrom(const LinkListCamReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkListCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.ball() != 0) {
    set_ball(from.ball());
  }
}

void LinkListCamReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkListCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkListCamReq::CopyFrom(const LinkListCamReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkListCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkListCamReq::IsInitialized() const {
  return true;
}

void LinkListCamReq::Swap(LinkListCamReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkListCamReq::InternalSwap(LinkListCamReq* other) {
  std::swap(ball_, other->ball_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkListCamReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[6];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkListCamReq

// bool bAll = 1;
void LinkListCamReq::clear_ball() {
  ball_ = false;
}
bool LinkListCamReq::ball() const {
  // @@protoc_insertion_point(field_get:LinkListCamReq.bAll)
  return ball_;
}
void LinkListCamReq::set_ball(bool value) {
  
  ball_ = value;
  // @@protoc_insertion_point(field_set:LinkListCamReq.bAll)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkListCamResp::kCListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkListCamResp::LinkListCamResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkListCamResp)
}
LinkListCamResp::LinkListCamResp(const LinkListCamResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clist()) {
    clist_ = new ::VidCameraList(*from.clist_);
  } else {
    clist_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkListCamResp)
}

void LinkListCamResp::SharedCtor() {
  clist_ = NULL;
  _cached_size_ = 0;
}

LinkListCamResp::~LinkListCamResp() {
  // @@protoc_insertion_point(destructor:LinkListCamResp)
  SharedDtor();
}

void LinkListCamResp::SharedDtor() {
  if (this != internal_default_instance()) {
    delete clist_;
  }
}

void LinkListCamResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkListCamResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[7].descriptor;
}

const LinkListCamResp& LinkListCamResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkListCamResp* LinkListCamResp::New(::google::protobuf::Arena* arena) const {
  LinkListCamResp* n = new LinkListCamResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkListCamResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkListCamResp)
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) {
    delete clist_;
  }
  clist_ = NULL;
}

bool LinkListCamResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkListCamResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCameraList cList = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clist()));
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
  // @@protoc_insertion_point(parse_success:LinkListCamResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkListCamResp)
  return false;
#undef DO_
}

void LinkListCamResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkListCamResp)
  // .VidCameraList cList = 1;
  if (this->has_clist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->clist_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkListCamResp)
}

::google::protobuf::uint8* LinkListCamResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkListCamResp)
  // .VidCameraList cList = 1;
  if (this->has_clist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->clist_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkListCamResp)
  return target;
}

size_t LinkListCamResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkListCamResp)
  size_t total_size = 0;

  // .VidCameraList cList = 1;
  if (this->has_clist()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clist_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkListCamResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkListCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkListCamResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkListCamResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkListCamResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkListCamResp)
    MergeFrom(*source);
  }
}

void LinkListCamResp::MergeFrom(const LinkListCamResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkListCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clist()) {
    mutable_clist()->::VidCameraList::MergeFrom(from.clist());
  }
}

void LinkListCamResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkListCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkListCamResp::CopyFrom(const LinkListCamResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkListCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkListCamResp::IsInitialized() const {
  return true;
}

void LinkListCamResp::Swap(LinkListCamResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkListCamResp::InternalSwap(LinkListCamResp* other) {
  std::swap(clist_, other->clist_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkListCamResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[7];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkListCamResp

// .VidCameraList cList = 1;
bool LinkListCamResp::has_clist() const {
  return this != internal_default_instance() && clist_ != NULL;
}
void LinkListCamResp::clear_clist() {
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) delete clist_;
  clist_ = NULL;
}
const ::VidCameraList& LinkListCamResp::clist() const {
  // @@protoc_insertion_point(field_get:LinkListCamResp.cList)
  return clist_ != NULL ? *clist_
                         : *::VidCameraList::internal_default_instance();
}
::VidCameraList* LinkListCamResp::mutable_clist() {
  
  if (clist_ == NULL) {
    clist_ = new ::VidCameraList;
  }
  // @@protoc_insertion_point(field_mutable:LinkListCamResp.cList)
  return clist_;
}
::VidCameraList* LinkListCamResp::release_clist() {
  // @@protoc_insertion_point(field_release:LinkListCamResp.cList)
  
  ::VidCameraList* temp = clist_;
  clist_ = NULL;
  return temp;
}
void LinkListCamResp::set_allocated_clist(::VidCameraList* clist) {
  delete clist_;
  clist_ = clist;
  if (clist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkListCamResp.cList)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamReq::LinkCamReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamReq)
}
LinkCamReq::LinkCamReq(const LinkCamReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamReq)
}

void LinkCamReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkCamReq::~LinkCamReq() {
  // @@protoc_insertion_point(destructor:LinkCamReq)
  SharedDtor();
}

void LinkCamReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkCamReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[8].descriptor;
}

const LinkCamReq& LinkCamReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamReq* LinkCamReq::New(::google::protobuf::Arena* arena) const {
  LinkCamReq* n = new LinkCamReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkCamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkCamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamReq)
  return false;
#undef DO_
}

void LinkCamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamReq)
}

::google::protobuf::uint8* LinkCamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamReq)
  return target;
}

size_t LinkCamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamReq)
    MergeFrom(*source);
  }
}

void LinkCamReq::MergeFrom(const LinkCamReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkCamReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamReq::CopyFrom(const LinkCamReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamReq::IsInitialized() const {
  return true;
}

void LinkCamReq::Swap(LinkCamReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamReq::InternalSwap(LinkCamReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[8];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamReq

// string strId = 1;
void LinkCamReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkCamReq.strId)
  return strid_.GetNoArena();
}
void LinkCamReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamReq.strId)
}
#if LANG_CXX11
void LinkCamReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamReq.strId)
}
#endif
void LinkCamReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamReq.strId)
}
void LinkCamReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamReq.strId)
}
::std::string* LinkCamReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkCamReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkCamReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamResp::kCCamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamResp::LinkCamResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamResp)
}
LinkCamResp::LinkCamResp(const LinkCamResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    ccam_ = new ::VidCamera(*from.ccam_);
  } else {
    ccam_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamResp)
}

void LinkCamResp::SharedCtor() {
  ccam_ = NULL;
  _cached_size_ = 0;
}

LinkCamResp::~LinkCamResp() {
  // @@protoc_insertion_point(destructor:LinkCamResp)
  SharedDtor();
}

void LinkCamResp::SharedDtor() {
  if (this != internal_default_instance()) {
    delete ccam_;
  }
}

void LinkCamResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[9].descriptor;
}

const LinkCamResp& LinkCamResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamResp* LinkCamResp::New(::google::protobuf::Arena* arena) const {
  LinkCamResp* n = new LinkCamResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamResp)
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) {
    delete ccam_;
  }
  ccam_ = NULL;
}

bool LinkCamResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCamera cCam = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ccam()));
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
  // @@protoc_insertion_point(parse_success:LinkCamResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamResp)
  return false;
#undef DO_
}

void LinkCamResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamResp)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->ccam_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamResp)
}

::google::protobuf::uint8* LinkCamResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamResp)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->ccam_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamResp)
  return target;
}

size_t LinkCamResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamResp)
  size_t total_size = 0;

  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ccam_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamResp)
    MergeFrom(*source);
  }
}

void LinkCamResp::MergeFrom(const LinkCamResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    mutable_ccam()->::VidCamera::MergeFrom(from.ccam());
  }
}

void LinkCamResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamResp::CopyFrom(const LinkCamResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamResp::IsInitialized() const {
  return true;
}

void LinkCamResp::Swap(LinkCamResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamResp::InternalSwap(LinkCamResp* other) {
  std::swap(ccam_, other->ccam_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[9];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamResp

// .VidCamera cCam = 1;
bool LinkCamResp::has_ccam() const {
  return this != internal_default_instance() && ccam_ != NULL;
}
void LinkCamResp::clear_ccam() {
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) delete ccam_;
  ccam_ = NULL;
}
const ::VidCamera& LinkCamResp::ccam() const {
  // @@protoc_insertion_point(field_get:LinkCamResp.cCam)
  return ccam_ != NULL ? *ccam_
                         : *::VidCamera::internal_default_instance();
}
::VidCamera* LinkCamResp::mutable_ccam() {
  
  if (ccam_ == NULL) {
    ccam_ = new ::VidCamera;
  }
  // @@protoc_insertion_point(field_mutable:LinkCamResp.cCam)
  return ccam_;
}
::VidCamera* LinkCamResp::release_ccam() {
  // @@protoc_insertion_point(field_release:LinkCamResp.cCam)
  
  ::VidCamera* temp = ccam_;
  ccam_ = NULL;
  return temp;
}
void LinkCamResp::set_allocated_ccam(::VidCamera* ccam) {
  delete ccam_;
  ccam_ = ccam;
  if (ccam) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkCamResp.cCam)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkAddCamReq::kCCamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkAddCamReq::LinkAddCamReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkAddCamReq)
}
LinkAddCamReq::LinkAddCamReq(const LinkAddCamReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    ccam_ = new ::VidCamera(*from.ccam_);
  } else {
    ccam_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkAddCamReq)
}

void LinkAddCamReq::SharedCtor() {
  ccam_ = NULL;
  _cached_size_ = 0;
}

LinkAddCamReq::~LinkAddCamReq() {
  // @@protoc_insertion_point(destructor:LinkAddCamReq)
  SharedDtor();
}

void LinkAddCamReq::SharedDtor() {
  if (this != internal_default_instance()) {
    delete ccam_;
  }
}

void LinkAddCamReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkAddCamReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[10].descriptor;
}

const LinkAddCamReq& LinkAddCamReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkAddCamReq* LinkAddCamReq::New(::google::protobuf::Arena* arena) const {
  LinkAddCamReq* n = new LinkAddCamReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkAddCamReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkAddCamReq)
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) {
    delete ccam_;
  }
  ccam_ = NULL;
}

bool LinkAddCamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkAddCamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCamera cCam = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ccam()));
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
  // @@protoc_insertion_point(parse_success:LinkAddCamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkAddCamReq)
  return false;
#undef DO_
}

void LinkAddCamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkAddCamReq)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->ccam_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkAddCamReq)
}

::google::protobuf::uint8* LinkAddCamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkAddCamReq)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->ccam_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkAddCamReq)
  return target;
}

size_t LinkAddCamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkAddCamReq)
  size_t total_size = 0;

  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ccam_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkAddCamReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkAddCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkAddCamReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkAddCamReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkAddCamReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkAddCamReq)
    MergeFrom(*source);
  }
}

void LinkAddCamReq::MergeFrom(const LinkAddCamReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkAddCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    mutable_ccam()->::VidCamera::MergeFrom(from.ccam());
  }
}

void LinkAddCamReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkAddCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkAddCamReq::CopyFrom(const LinkAddCamReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkAddCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkAddCamReq::IsInitialized() const {
  return true;
}

void LinkAddCamReq::Swap(LinkAddCamReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkAddCamReq::InternalSwap(LinkAddCamReq* other) {
  std::swap(ccam_, other->ccam_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkAddCamReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[10];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkAddCamReq

// .VidCamera cCam = 1;
bool LinkAddCamReq::has_ccam() const {
  return this != internal_default_instance() && ccam_ != NULL;
}
void LinkAddCamReq::clear_ccam() {
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) delete ccam_;
  ccam_ = NULL;
}
const ::VidCamera& LinkAddCamReq::ccam() const {
  // @@protoc_insertion_point(field_get:LinkAddCamReq.cCam)
  return ccam_ != NULL ? *ccam_
                         : *::VidCamera::internal_default_instance();
}
::VidCamera* LinkAddCamReq::mutable_ccam() {
  
  if (ccam_ == NULL) {
    ccam_ = new ::VidCamera;
  }
  // @@protoc_insertion_point(field_mutable:LinkAddCamReq.cCam)
  return ccam_;
}
::VidCamera* LinkAddCamReq::release_ccam() {
  // @@protoc_insertion_point(field_release:LinkAddCamReq.cCam)
  
  ::VidCamera* temp = ccam_;
  ccam_ = NULL;
  return temp;
}
void LinkAddCamReq::set_allocated_ccam(::VidCamera* ccam) {
  delete ccam_;
  ccam_ = ccam;
  if (ccam) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkAddCamReq.cCam)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkAddCamResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkAddCamResp::LinkAddCamResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkAddCamResp)
}
LinkAddCamResp::LinkAddCamResp(const LinkAddCamResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkAddCamResp)
}

void LinkAddCamResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkAddCamResp::~LinkAddCamResp() {
  // @@protoc_insertion_point(destructor:LinkAddCamResp)
  SharedDtor();
}

void LinkAddCamResp::SharedDtor() {
}

void LinkAddCamResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkAddCamResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[11].descriptor;
}

const LinkAddCamResp& LinkAddCamResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkAddCamResp* LinkAddCamResp::New(::google::protobuf::Arena* arena) const {
  LinkAddCamResp* n = new LinkAddCamResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkAddCamResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkAddCamResp)
  bsuccess_ = false;
}

bool LinkAddCamResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkAddCamResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkAddCamResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkAddCamResp)
  return false;
#undef DO_
}

void LinkAddCamResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkAddCamResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkAddCamResp)
}

::google::protobuf::uint8* LinkAddCamResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkAddCamResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkAddCamResp)
  return target;
}

size_t LinkAddCamResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkAddCamResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkAddCamResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkAddCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkAddCamResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkAddCamResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkAddCamResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkAddCamResp)
    MergeFrom(*source);
  }
}

void LinkAddCamResp::MergeFrom(const LinkAddCamResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkAddCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkAddCamResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkAddCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkAddCamResp::CopyFrom(const LinkAddCamResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkAddCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkAddCamResp::IsInitialized() const {
  return true;
}

void LinkAddCamResp::Swap(LinkAddCamResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkAddCamResp::InternalSwap(LinkAddCamResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkAddCamResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[11];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkAddCamResp

// bool bSuccess = 1;
void LinkAddCamResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkAddCamResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkAddCamResp.bSuccess)
  return bsuccess_;
}
void LinkAddCamResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkAddCamResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkDelCamReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkDelCamReq::LinkDelCamReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkDelCamReq)
}
LinkDelCamReq::LinkDelCamReq(const LinkDelCamReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkDelCamReq)
}

void LinkDelCamReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkDelCamReq::~LinkDelCamReq() {
  // @@protoc_insertion_point(destructor:LinkDelCamReq)
  SharedDtor();
}

void LinkDelCamReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkDelCamReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkDelCamReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[12].descriptor;
}

const LinkDelCamReq& LinkDelCamReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkDelCamReq* LinkDelCamReq::New(::google::protobuf::Arena* arena) const {
  LinkDelCamReq* n = new LinkDelCamReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkDelCamReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkDelCamReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkDelCamReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkDelCamReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkDelCamReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkDelCamReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkDelCamReq)
  return false;
#undef DO_
}

void LinkDelCamReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkDelCamReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkDelCamReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkDelCamReq)
}

::google::protobuf::uint8* LinkDelCamReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkDelCamReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkDelCamReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkDelCamReq)
  return target;
}

size_t LinkDelCamReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkDelCamReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkDelCamReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkDelCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkDelCamReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkDelCamReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkDelCamReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkDelCamReq)
    MergeFrom(*source);
  }
}

void LinkDelCamReq::MergeFrom(const LinkDelCamReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkDelCamReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkDelCamReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkDelCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkDelCamReq::CopyFrom(const LinkDelCamReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkDelCamReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkDelCamReq::IsInitialized() const {
  return true;
}

void LinkDelCamReq::Swap(LinkDelCamReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkDelCamReq::InternalSwap(LinkDelCamReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkDelCamReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[12];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkDelCamReq

// string strId = 1;
void LinkDelCamReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkDelCamReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkDelCamReq.strId)
  return strid_.GetNoArena();
}
void LinkDelCamReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkDelCamReq.strId)
}
#if LANG_CXX11
void LinkDelCamReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkDelCamReq.strId)
}
#endif
void LinkDelCamReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkDelCamReq.strId)
}
void LinkDelCamReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkDelCamReq.strId)
}
::std::string* LinkDelCamReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkDelCamReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkDelCamReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkDelCamReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkDelCamReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkDelCamReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkDelCamResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkDelCamResp::LinkDelCamResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkDelCamResp)
}
LinkDelCamResp::LinkDelCamResp(const LinkDelCamResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkDelCamResp)
}

void LinkDelCamResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkDelCamResp::~LinkDelCamResp() {
  // @@protoc_insertion_point(destructor:LinkDelCamResp)
  SharedDtor();
}

void LinkDelCamResp::SharedDtor() {
}

void LinkDelCamResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkDelCamResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[13].descriptor;
}

const LinkDelCamResp& LinkDelCamResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkDelCamResp* LinkDelCamResp::New(::google::protobuf::Arena* arena) const {
  LinkDelCamResp* n = new LinkDelCamResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkDelCamResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkDelCamResp)
  bsuccess_ = false;
}

bool LinkDelCamResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkDelCamResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkDelCamResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkDelCamResp)
  return false;
#undef DO_
}

void LinkDelCamResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkDelCamResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkDelCamResp)
}

::google::protobuf::uint8* LinkDelCamResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkDelCamResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkDelCamResp)
  return target;
}

size_t LinkDelCamResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkDelCamResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkDelCamResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkDelCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkDelCamResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkDelCamResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkDelCamResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkDelCamResp)
    MergeFrom(*source);
  }
}

void LinkDelCamResp::MergeFrom(const LinkDelCamResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkDelCamResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkDelCamResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkDelCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkDelCamResp::CopyFrom(const LinkDelCamResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkDelCamResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkDelCamResp::IsInitialized() const {
  return true;
}

void LinkDelCamResp::Swap(LinkDelCamResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkDelCamResp::InternalSwap(LinkDelCamResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkDelCamResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[13];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkDelCamResp

// bool bSuccess = 1;
void LinkDelCamResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkDelCamResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkDelCamResp.bSuccess)
  return bsuccess_;
}
void LinkDelCamResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkDelCamResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkSetCamSchedReq::kCCamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkSetCamSchedReq::LinkSetCamSchedReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkSetCamSchedReq)
}
LinkSetCamSchedReq::LinkSetCamSchedReq(const LinkSetCamSchedReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    ccam_ = new ::VidCamera(*from.ccam_);
  } else {
    ccam_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkSetCamSchedReq)
}

void LinkSetCamSchedReq::SharedCtor() {
  ccam_ = NULL;
  _cached_size_ = 0;
}

LinkSetCamSchedReq::~LinkSetCamSchedReq() {
  // @@protoc_insertion_point(destructor:LinkSetCamSchedReq)
  SharedDtor();
}

void LinkSetCamSchedReq::SharedDtor() {
  if (this != internal_default_instance()) {
    delete ccam_;
  }
}

void LinkSetCamSchedReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkSetCamSchedReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[14].descriptor;
}

const LinkSetCamSchedReq& LinkSetCamSchedReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkSetCamSchedReq* LinkSetCamSchedReq::New(::google::protobuf::Arena* arena) const {
  LinkSetCamSchedReq* n = new LinkSetCamSchedReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkSetCamSchedReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkSetCamSchedReq)
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) {
    delete ccam_;
  }
  ccam_ = NULL;
}

bool LinkSetCamSchedReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkSetCamSchedReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCamera cCam = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ccam()));
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
  // @@protoc_insertion_point(parse_success:LinkSetCamSchedReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkSetCamSchedReq)
  return false;
#undef DO_
}

void LinkSetCamSchedReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkSetCamSchedReq)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->ccam_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkSetCamSchedReq)
}

::google::protobuf::uint8* LinkSetCamSchedReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkSetCamSchedReq)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->ccam_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkSetCamSchedReq)
  return target;
}

size_t LinkSetCamSchedReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkSetCamSchedReq)
  size_t total_size = 0;

  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ccam_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkSetCamSchedReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkSetCamSchedReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkSetCamSchedReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkSetCamSchedReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkSetCamSchedReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkSetCamSchedReq)
    MergeFrom(*source);
  }
}

void LinkSetCamSchedReq::MergeFrom(const LinkSetCamSchedReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkSetCamSchedReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    mutable_ccam()->::VidCamera::MergeFrom(from.ccam());
  }
}

void LinkSetCamSchedReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkSetCamSchedReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkSetCamSchedReq::CopyFrom(const LinkSetCamSchedReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkSetCamSchedReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkSetCamSchedReq::IsInitialized() const {
  return true;
}

void LinkSetCamSchedReq::Swap(LinkSetCamSchedReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkSetCamSchedReq::InternalSwap(LinkSetCamSchedReq* other) {
  std::swap(ccam_, other->ccam_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkSetCamSchedReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[14];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkSetCamSchedReq

// .VidCamera cCam = 1;
bool LinkSetCamSchedReq::has_ccam() const {
  return this != internal_default_instance() && ccam_ != NULL;
}
void LinkSetCamSchedReq::clear_ccam() {
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) delete ccam_;
  ccam_ = NULL;
}
const ::VidCamera& LinkSetCamSchedReq::ccam() const {
  // @@protoc_insertion_point(field_get:LinkSetCamSchedReq.cCam)
  return ccam_ != NULL ? *ccam_
                         : *::VidCamera::internal_default_instance();
}
::VidCamera* LinkSetCamSchedReq::mutable_ccam() {
  
  if (ccam_ == NULL) {
    ccam_ = new ::VidCamera;
  }
  // @@protoc_insertion_point(field_mutable:LinkSetCamSchedReq.cCam)
  return ccam_;
}
::VidCamera* LinkSetCamSchedReq::release_ccam() {
  // @@protoc_insertion_point(field_release:LinkSetCamSchedReq.cCam)
  
  ::VidCamera* temp = ccam_;
  ccam_ = NULL;
  return temp;
}
void LinkSetCamSchedReq::set_allocated_ccam(::VidCamera* ccam) {
  delete ccam_;
  ccam_ = ccam;
  if (ccam) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkSetCamSchedReq.cCam)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkSetCamSchedResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkSetCamSchedResp::LinkSetCamSchedResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkSetCamSchedResp)
}
LinkSetCamSchedResp::LinkSetCamSchedResp(const LinkSetCamSchedResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkSetCamSchedResp)
}

void LinkSetCamSchedResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkSetCamSchedResp::~LinkSetCamSchedResp() {
  // @@protoc_insertion_point(destructor:LinkSetCamSchedResp)
  SharedDtor();
}

void LinkSetCamSchedResp::SharedDtor() {
}

void LinkSetCamSchedResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkSetCamSchedResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[15].descriptor;
}

const LinkSetCamSchedResp& LinkSetCamSchedResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkSetCamSchedResp* LinkSetCamSchedResp::New(::google::protobuf::Arena* arena) const {
  LinkSetCamSchedResp* n = new LinkSetCamSchedResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkSetCamSchedResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkSetCamSchedResp)
  bsuccess_ = false;
}

bool LinkSetCamSchedResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkSetCamSchedResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkSetCamSchedResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkSetCamSchedResp)
  return false;
#undef DO_
}

void LinkSetCamSchedResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkSetCamSchedResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkSetCamSchedResp)
}

::google::protobuf::uint8* LinkSetCamSchedResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkSetCamSchedResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkSetCamSchedResp)
  return target;
}

size_t LinkSetCamSchedResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkSetCamSchedResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkSetCamSchedResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkSetCamSchedResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkSetCamSchedResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkSetCamSchedResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkSetCamSchedResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkSetCamSchedResp)
    MergeFrom(*source);
  }
}

void LinkSetCamSchedResp::MergeFrom(const LinkSetCamSchedResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkSetCamSchedResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkSetCamSchedResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkSetCamSchedResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkSetCamSchedResp::CopyFrom(const LinkSetCamSchedResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkSetCamSchedResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkSetCamSchedResp::IsInitialized() const {
  return true;
}

void LinkSetCamSchedResp::Swap(LinkSetCamSchedResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkSetCamSchedResp::InternalSwap(LinkSetCamSchedResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkSetCamSchedResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[15];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkSetCamSchedResp

// bool bSuccess = 1;
void LinkSetCamSchedResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkSetCamSchedResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkSetCamSchedResp.bSuccess)
  return bsuccess_;
}
void LinkSetCamSchedResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkSetCamSchedResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkGetStreamListReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkGetStreamListReq::LinkGetStreamListReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkGetStreamListReq)
}
LinkGetStreamListReq::LinkGetStreamListReq(const LinkGetStreamListReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkGetStreamListReq)
}

void LinkGetStreamListReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkGetStreamListReq::~LinkGetStreamListReq() {
  // @@protoc_insertion_point(destructor:LinkGetStreamListReq)
  SharedDtor();
}

void LinkGetStreamListReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkGetStreamListReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkGetStreamListReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[16].descriptor;
}

const LinkGetStreamListReq& LinkGetStreamListReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkGetStreamListReq* LinkGetStreamListReq::New(::google::protobuf::Arena* arena) const {
  LinkGetStreamListReq* n = new LinkGetStreamListReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkGetStreamListReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkGetStreamListReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkGetStreamListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkGetStreamListReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetStreamListReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkGetStreamListReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkGetStreamListReq)
  return false;
#undef DO_
}

void LinkGetStreamListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkGetStreamListReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetStreamListReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkGetStreamListReq)
}

::google::protobuf::uint8* LinkGetStreamListReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkGetStreamListReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetStreamListReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkGetStreamListReq)
  return target;
}

size_t LinkGetStreamListReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkGetStreamListReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkGetStreamListReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkGetStreamListReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkGetStreamListReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkGetStreamListReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkGetStreamListReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkGetStreamListReq)
    MergeFrom(*source);
  }
}

void LinkGetStreamListReq::MergeFrom(const LinkGetStreamListReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkGetStreamListReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkGetStreamListReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkGetStreamListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkGetStreamListReq::CopyFrom(const LinkGetStreamListReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkGetStreamListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkGetStreamListReq::IsInitialized() const {
  return true;
}

void LinkGetStreamListReq::Swap(LinkGetStreamListReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkGetStreamListReq::InternalSwap(LinkGetStreamListReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkGetStreamListReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[16];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkGetStreamListReq

// string strId = 1;
void LinkGetStreamListReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetStreamListReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkGetStreamListReq.strId)
  return strid_.GetNoArena();
}
void LinkGetStreamListReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetStreamListReq.strId)
}
#if LANG_CXX11
void LinkGetStreamListReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetStreamListReq.strId)
}
#endif
void LinkGetStreamListReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetStreamListReq.strId)
}
void LinkGetStreamListReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetStreamListReq.strId)
}
::std::string* LinkGetStreamListReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetStreamListReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetStreamListReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkGetStreamListReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetStreamListReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkGetStreamListReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkGetStreamListResp::kCListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkGetStreamListResp::LinkGetStreamListResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkGetStreamListResp)
}
LinkGetStreamListResp::LinkGetStreamListResp(const LinkGetStreamListResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clist()) {
    clist_ = new ::VidStreamList(*from.clist_);
  } else {
    clist_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkGetStreamListResp)
}

void LinkGetStreamListResp::SharedCtor() {
  clist_ = NULL;
  _cached_size_ = 0;
}

LinkGetStreamListResp::~LinkGetStreamListResp() {
  // @@protoc_insertion_point(destructor:LinkGetStreamListResp)
  SharedDtor();
}

void LinkGetStreamListResp::SharedDtor() {
  if (this != internal_default_instance()) {
    delete clist_;
  }
}

void LinkGetStreamListResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkGetStreamListResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[17].descriptor;
}

const LinkGetStreamListResp& LinkGetStreamListResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkGetStreamListResp* LinkGetStreamListResp::New(::google::protobuf::Arena* arena) const {
  LinkGetStreamListResp* n = new LinkGetStreamListResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkGetStreamListResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkGetStreamListResp)
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) {
    delete clist_;
  }
  clist_ = NULL;
}

bool LinkGetStreamListResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkGetStreamListResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidStreamList cList = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clist()));
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
  // @@protoc_insertion_point(parse_success:LinkGetStreamListResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkGetStreamListResp)
  return false;
#undef DO_
}

void LinkGetStreamListResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkGetStreamListResp)
  // .VidStreamList cList = 1;
  if (this->has_clist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->clist_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkGetStreamListResp)
}

::google::protobuf::uint8* LinkGetStreamListResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkGetStreamListResp)
  // .VidStreamList cList = 1;
  if (this->has_clist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->clist_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkGetStreamListResp)
  return target;
}

size_t LinkGetStreamListResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkGetStreamListResp)
  size_t total_size = 0;

  // .VidStreamList cList = 1;
  if (this->has_clist()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clist_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkGetStreamListResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkGetStreamListResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkGetStreamListResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkGetStreamListResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkGetStreamListResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkGetStreamListResp)
    MergeFrom(*source);
  }
}

void LinkGetStreamListResp::MergeFrom(const LinkGetStreamListResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkGetStreamListResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clist()) {
    mutable_clist()->::VidStreamList::MergeFrom(from.clist());
  }
}

void LinkGetStreamListResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkGetStreamListResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkGetStreamListResp::CopyFrom(const LinkGetStreamListResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkGetStreamListResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkGetStreamListResp::IsInitialized() const {
  return true;
}

void LinkGetStreamListResp::Swap(LinkGetStreamListResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkGetStreamListResp::InternalSwap(LinkGetStreamListResp* other) {
  std::swap(clist_, other->clist_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkGetStreamListResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[17];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkGetStreamListResp

// .VidStreamList cList = 1;
bool LinkGetStreamListResp::has_clist() const {
  return this != internal_default_instance() && clist_ != NULL;
}
void LinkGetStreamListResp::clear_clist() {
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) delete clist_;
  clist_ = NULL;
}
const ::VidStreamList& LinkGetStreamListResp::clist() const {
  // @@protoc_insertion_point(field_get:LinkGetStreamListResp.cList)
  return clist_ != NULL ? *clist_
                         : *::VidStreamList::internal_default_instance();
}
::VidStreamList* LinkGetStreamListResp::mutable_clist() {
  
  if (clist_ == NULL) {
    clist_ = new ::VidStreamList;
  }
  // @@protoc_insertion_point(field_mutable:LinkGetStreamListResp.cList)
  return clist_;
}
::VidStreamList* LinkGetStreamListResp::release_clist() {
  // @@protoc_insertion_point(field_release:LinkGetStreamListResp.cList)
  
  ::VidStreamList* temp = clist_;
  clist_ = NULL;
  return temp;
}
void LinkGetStreamListResp::set_allocated_clist(::VidStreamList* clist) {
  delete clist_;
  clist_ = clist;
  if (clist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkGetStreamListResp.cList)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkVidDiskListReq::kBAllFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkVidDiskListReq::LinkVidDiskListReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkVidDiskListReq)
}
LinkVidDiskListReq::LinkVidDiskListReq(const LinkVidDiskListReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ball_ = from.ball_;
  // @@protoc_insertion_point(copy_constructor:LinkVidDiskListReq)
}

void LinkVidDiskListReq::SharedCtor() {
  ball_ = false;
  _cached_size_ = 0;
}

LinkVidDiskListReq::~LinkVidDiskListReq() {
  // @@protoc_insertion_point(destructor:LinkVidDiskListReq)
  SharedDtor();
}

void LinkVidDiskListReq::SharedDtor() {
}

void LinkVidDiskListReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkVidDiskListReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[18].descriptor;
}

const LinkVidDiskListReq& LinkVidDiskListReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkVidDiskListReq* LinkVidDiskListReq::New(::google::protobuf::Arena* arena) const {
  LinkVidDiskListReq* n = new LinkVidDiskListReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkVidDiskListReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkVidDiskListReq)
  ball_ = false;
}

bool LinkVidDiskListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkVidDiskListReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bAll = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ball_)));
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
  // @@protoc_insertion_point(parse_success:LinkVidDiskListReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkVidDiskListReq)
  return false;
#undef DO_
}

void LinkVidDiskListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkVidDiskListReq)
  // bool bAll = 1;
  if (this->ball() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->ball(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkVidDiskListReq)
}

::google::protobuf::uint8* LinkVidDiskListReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkVidDiskListReq)
  // bool bAll = 1;
  if (this->ball() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->ball(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkVidDiskListReq)
  return target;
}

size_t LinkVidDiskListReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkVidDiskListReq)
  size_t total_size = 0;

  // bool bAll = 1;
  if (this->ball() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkVidDiskListReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkVidDiskListReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkVidDiskListReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkVidDiskListReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkVidDiskListReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkVidDiskListReq)
    MergeFrom(*source);
  }
}

void LinkVidDiskListReq::MergeFrom(const LinkVidDiskListReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkVidDiskListReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.ball() != 0) {
    set_ball(from.ball());
  }
}

void LinkVidDiskListReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkVidDiskListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkVidDiskListReq::CopyFrom(const LinkVidDiskListReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkVidDiskListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkVidDiskListReq::IsInitialized() const {
  return true;
}

void LinkVidDiskListReq::Swap(LinkVidDiskListReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkVidDiskListReq::InternalSwap(LinkVidDiskListReq* other) {
  std::swap(ball_, other->ball_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkVidDiskListReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[18];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkVidDiskListReq

// bool bAll = 1;
void LinkVidDiskListReq::clear_ball() {
  ball_ = false;
}
bool LinkVidDiskListReq::ball() const {
  // @@protoc_insertion_point(field_get:LinkVidDiskListReq.bAll)
  return ball_;
}
void LinkVidDiskListReq::set_ball(bool value) {
  
  ball_ = value;
  // @@protoc_insertion_point(field_set:LinkVidDiskListReq.bAll)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkVidDiskListResp::kCDiskFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkVidDiskListResp::LinkVidDiskListResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkVidDiskListResp)
}
LinkVidDiskListResp::LinkVidDiskListResp(const LinkVidDiskListResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cdisk()) {
    cdisk_ = new ::VidDiskList(*from.cdisk_);
  } else {
    cdisk_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkVidDiskListResp)
}

void LinkVidDiskListResp::SharedCtor() {
  cdisk_ = NULL;
  _cached_size_ = 0;
}

LinkVidDiskListResp::~LinkVidDiskListResp() {
  // @@protoc_insertion_point(destructor:LinkVidDiskListResp)
  SharedDtor();
}

void LinkVidDiskListResp::SharedDtor() {
  if (this != internal_default_instance()) {
    delete cdisk_;
  }
}

void LinkVidDiskListResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkVidDiskListResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[19].descriptor;
}

const LinkVidDiskListResp& LinkVidDiskListResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkVidDiskListResp* LinkVidDiskListResp::New(::google::protobuf::Arena* arena) const {
  LinkVidDiskListResp* n = new LinkVidDiskListResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkVidDiskListResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkVidDiskListResp)
  if (GetArenaNoVirtual() == NULL && cdisk_ != NULL) {
    delete cdisk_;
  }
  cdisk_ = NULL;
}

bool LinkVidDiskListResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkVidDiskListResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidDiskList cDisk = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cdisk()));
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
  // @@protoc_insertion_point(parse_success:LinkVidDiskListResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkVidDiskListResp)
  return false;
#undef DO_
}

void LinkVidDiskListResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkVidDiskListResp)
  // .VidDiskList cDisk = 1;
  if (this->has_cdisk()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cdisk_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkVidDiskListResp)
}

::google::protobuf::uint8* LinkVidDiskListResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkVidDiskListResp)
  // .VidDiskList cDisk = 1;
  if (this->has_cdisk()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cdisk_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkVidDiskListResp)
  return target;
}

size_t LinkVidDiskListResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkVidDiskListResp)
  size_t total_size = 0;

  // .VidDiskList cDisk = 1;
  if (this->has_cdisk()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cdisk_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkVidDiskListResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkVidDiskListResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkVidDiskListResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkVidDiskListResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkVidDiskListResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkVidDiskListResp)
    MergeFrom(*source);
  }
}

void LinkVidDiskListResp::MergeFrom(const LinkVidDiskListResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkVidDiskListResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cdisk()) {
    mutable_cdisk()->::VidDiskList::MergeFrom(from.cdisk());
  }
}

void LinkVidDiskListResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkVidDiskListResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkVidDiskListResp::CopyFrom(const LinkVidDiskListResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkVidDiskListResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkVidDiskListResp::IsInitialized() const {
  return true;
}

void LinkVidDiskListResp::Swap(LinkVidDiskListResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkVidDiskListResp::InternalSwap(LinkVidDiskListResp* other) {
  std::swap(cdisk_, other->cdisk_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkVidDiskListResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[19];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkVidDiskListResp

// .VidDiskList cDisk = 1;
bool LinkVidDiskListResp::has_cdisk() const {
  return this != internal_default_instance() && cdisk_ != NULL;
}
void LinkVidDiskListResp::clear_cdisk() {
  if (GetArenaNoVirtual() == NULL && cdisk_ != NULL) delete cdisk_;
  cdisk_ = NULL;
}
const ::VidDiskList& LinkVidDiskListResp::cdisk() const {
  // @@protoc_insertion_point(field_get:LinkVidDiskListResp.cDisk)
  return cdisk_ != NULL ? *cdisk_
                         : *::VidDiskList::internal_default_instance();
}
::VidDiskList* LinkVidDiskListResp::mutable_cdisk() {
  
  if (cdisk_ == NULL) {
    cdisk_ = new ::VidDiskList;
  }
  // @@protoc_insertion_point(field_mutable:LinkVidDiskListResp.cDisk)
  return cdisk_;
}
::VidDiskList* LinkVidDiskListResp::release_cdisk() {
  // @@protoc_insertion_point(field_release:LinkVidDiskListResp.cDisk)
  
  ::VidDiskList* temp = cdisk_;
  cdisk_ = NULL;
  return temp;
}
void LinkVidDiskListResp::set_allocated_cdisk(::VidDiskList* cdisk) {
  delete cdisk_;
  cdisk_ = cdisk;
  if (cdisk) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkVidDiskListResp.cDisk)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkSysVidDiskListReq::kBAllFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkSysVidDiskListReq::LinkSysVidDiskListReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkSysVidDiskListReq)
}
LinkSysVidDiskListReq::LinkSysVidDiskListReq(const LinkSysVidDiskListReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ball_ = from.ball_;
  // @@protoc_insertion_point(copy_constructor:LinkSysVidDiskListReq)
}

void LinkSysVidDiskListReq::SharedCtor() {
  ball_ = false;
  _cached_size_ = 0;
}

LinkSysVidDiskListReq::~LinkSysVidDiskListReq() {
  // @@protoc_insertion_point(destructor:LinkSysVidDiskListReq)
  SharedDtor();
}

void LinkSysVidDiskListReq::SharedDtor() {
}

void LinkSysVidDiskListReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkSysVidDiskListReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[20].descriptor;
}

const LinkSysVidDiskListReq& LinkSysVidDiskListReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkSysVidDiskListReq* LinkSysVidDiskListReq::New(::google::protobuf::Arena* arena) const {
  LinkSysVidDiskListReq* n = new LinkSysVidDiskListReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkSysVidDiskListReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkSysVidDiskListReq)
  ball_ = false;
}

bool LinkSysVidDiskListReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkSysVidDiskListReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bAll = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &ball_)));
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
  // @@protoc_insertion_point(parse_success:LinkSysVidDiskListReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkSysVidDiskListReq)
  return false;
#undef DO_
}

void LinkSysVidDiskListReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkSysVidDiskListReq)
  // bool bAll = 1;
  if (this->ball() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->ball(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkSysVidDiskListReq)
}

::google::protobuf::uint8* LinkSysVidDiskListReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkSysVidDiskListReq)
  // bool bAll = 1;
  if (this->ball() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->ball(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkSysVidDiskListReq)
  return target;
}

size_t LinkSysVidDiskListReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkSysVidDiskListReq)
  size_t total_size = 0;

  // bool bAll = 1;
  if (this->ball() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkSysVidDiskListReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkSysVidDiskListReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkSysVidDiskListReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkSysVidDiskListReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkSysVidDiskListReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkSysVidDiskListReq)
    MergeFrom(*source);
  }
}

void LinkSysVidDiskListReq::MergeFrom(const LinkSysVidDiskListReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkSysVidDiskListReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.ball() != 0) {
    set_ball(from.ball());
  }
}

void LinkSysVidDiskListReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkSysVidDiskListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkSysVidDiskListReq::CopyFrom(const LinkSysVidDiskListReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkSysVidDiskListReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkSysVidDiskListReq::IsInitialized() const {
  return true;
}

void LinkSysVidDiskListReq::Swap(LinkSysVidDiskListReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkSysVidDiskListReq::InternalSwap(LinkSysVidDiskListReq* other) {
  std::swap(ball_, other->ball_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkSysVidDiskListReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[20];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkSysVidDiskListReq

// bool bAll = 1;
void LinkSysVidDiskListReq::clear_ball() {
  ball_ = false;
}
bool LinkSysVidDiskListReq::ball() const {
  // @@protoc_insertion_point(field_get:LinkSysVidDiskListReq.bAll)
  return ball_;
}
void LinkSysVidDiskListReq::set_ball(bool value) {
  
  ball_ = value;
  // @@protoc_insertion_point(field_set:LinkSysVidDiskListReq.bAll)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkSysVidDiskListResp::kCDiskFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkSysVidDiskListResp::LinkSysVidDiskListResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkSysVidDiskListResp)
}
LinkSysVidDiskListResp::LinkSysVidDiskListResp(const LinkSysVidDiskListResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cdisk()) {
    cdisk_ = new ::VidDiskList(*from.cdisk_);
  } else {
    cdisk_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkSysVidDiskListResp)
}

void LinkSysVidDiskListResp::SharedCtor() {
  cdisk_ = NULL;
  _cached_size_ = 0;
}

LinkSysVidDiskListResp::~LinkSysVidDiskListResp() {
  // @@protoc_insertion_point(destructor:LinkSysVidDiskListResp)
  SharedDtor();
}

void LinkSysVidDiskListResp::SharedDtor() {
  if (this != internal_default_instance()) {
    delete cdisk_;
  }
}

void LinkSysVidDiskListResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkSysVidDiskListResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[21].descriptor;
}

const LinkSysVidDiskListResp& LinkSysVidDiskListResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkSysVidDiskListResp* LinkSysVidDiskListResp::New(::google::protobuf::Arena* arena) const {
  LinkSysVidDiskListResp* n = new LinkSysVidDiskListResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkSysVidDiskListResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkSysVidDiskListResp)
  if (GetArenaNoVirtual() == NULL && cdisk_ != NULL) {
    delete cdisk_;
  }
  cdisk_ = NULL;
}

bool LinkSysVidDiskListResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkSysVidDiskListResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidDiskList cDisk = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cdisk()));
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
  // @@protoc_insertion_point(parse_success:LinkSysVidDiskListResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkSysVidDiskListResp)
  return false;
#undef DO_
}

void LinkSysVidDiskListResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkSysVidDiskListResp)
  // .VidDiskList cDisk = 1;
  if (this->has_cdisk()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cdisk_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkSysVidDiskListResp)
}

::google::protobuf::uint8* LinkSysVidDiskListResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkSysVidDiskListResp)
  // .VidDiskList cDisk = 1;
  if (this->has_cdisk()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cdisk_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkSysVidDiskListResp)
  return target;
}

size_t LinkSysVidDiskListResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkSysVidDiskListResp)
  size_t total_size = 0;

  // .VidDiskList cDisk = 1;
  if (this->has_cdisk()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cdisk_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkSysVidDiskListResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkSysVidDiskListResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkSysVidDiskListResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkSysVidDiskListResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkSysVidDiskListResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkSysVidDiskListResp)
    MergeFrom(*source);
  }
}

void LinkSysVidDiskListResp::MergeFrom(const LinkSysVidDiskListResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkSysVidDiskListResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cdisk()) {
    mutable_cdisk()->::VidDiskList::MergeFrom(from.cdisk());
  }
}

void LinkSysVidDiskListResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkSysVidDiskListResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkSysVidDiskListResp::CopyFrom(const LinkSysVidDiskListResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkSysVidDiskListResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkSysVidDiskListResp::IsInitialized() const {
  return true;
}

void LinkSysVidDiskListResp::Swap(LinkSysVidDiskListResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkSysVidDiskListResp::InternalSwap(LinkSysVidDiskListResp* other) {
  std::swap(cdisk_, other->cdisk_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkSysVidDiskListResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[21];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkSysVidDiskListResp

// .VidDiskList cDisk = 1;
bool LinkSysVidDiskListResp::has_cdisk() const {
  return this != internal_default_instance() && cdisk_ != NULL;
}
void LinkSysVidDiskListResp::clear_cdisk() {
  if (GetArenaNoVirtual() == NULL && cdisk_ != NULL) delete cdisk_;
  cdisk_ = NULL;
}
const ::VidDiskList& LinkSysVidDiskListResp::cdisk() const {
  // @@protoc_insertion_point(field_get:LinkSysVidDiskListResp.cDisk)
  return cdisk_ != NULL ? *cdisk_
                         : *::VidDiskList::internal_default_instance();
}
::VidDiskList* LinkSysVidDiskListResp::mutable_cdisk() {
  
  if (cdisk_ == NULL) {
    cdisk_ = new ::VidDiskList;
  }
  // @@protoc_insertion_point(field_mutable:LinkSysVidDiskListResp.cDisk)
  return cdisk_;
}
::VidDiskList* LinkSysVidDiskListResp::release_cdisk() {
  // @@protoc_insertion_point(field_release:LinkSysVidDiskListResp.cDisk)
  
  ::VidDiskList* temp = cdisk_;
  cdisk_ = NULL;
  return temp;
}
void LinkSysVidDiskListResp::set_allocated_cdisk(::VidDiskList* cdisk) {
  delete cdisk_;
  cdisk_ = cdisk;
  if (cdisk) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkSysVidDiskListResp.cDisk)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkAddDiskReq::kCDiskFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkAddDiskReq::LinkAddDiskReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkAddDiskReq)
}
LinkAddDiskReq::LinkAddDiskReq(const LinkAddDiskReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cdisk()) {
    cdisk_ = new ::VidDisk(*from.cdisk_);
  } else {
    cdisk_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkAddDiskReq)
}

void LinkAddDiskReq::SharedCtor() {
  cdisk_ = NULL;
  _cached_size_ = 0;
}

LinkAddDiskReq::~LinkAddDiskReq() {
  // @@protoc_insertion_point(destructor:LinkAddDiskReq)
  SharedDtor();
}

void LinkAddDiskReq::SharedDtor() {
  if (this != internal_default_instance()) {
    delete cdisk_;
  }
}

void LinkAddDiskReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkAddDiskReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[22].descriptor;
}

const LinkAddDiskReq& LinkAddDiskReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkAddDiskReq* LinkAddDiskReq::New(::google::protobuf::Arena* arena) const {
  LinkAddDiskReq* n = new LinkAddDiskReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkAddDiskReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkAddDiskReq)
  if (GetArenaNoVirtual() == NULL && cdisk_ != NULL) {
    delete cdisk_;
  }
  cdisk_ = NULL;
}

bool LinkAddDiskReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkAddDiskReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidDisk cDisk = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cdisk()));
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
  // @@protoc_insertion_point(parse_success:LinkAddDiskReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkAddDiskReq)
  return false;
#undef DO_
}

void LinkAddDiskReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkAddDiskReq)
  // .VidDisk cDisk = 1;
  if (this->has_cdisk()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cdisk_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkAddDiskReq)
}

::google::protobuf::uint8* LinkAddDiskReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkAddDiskReq)
  // .VidDisk cDisk = 1;
  if (this->has_cdisk()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cdisk_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkAddDiskReq)
  return target;
}

size_t LinkAddDiskReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkAddDiskReq)
  size_t total_size = 0;

  // .VidDisk cDisk = 1;
  if (this->has_cdisk()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cdisk_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkAddDiskReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkAddDiskReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkAddDiskReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkAddDiskReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkAddDiskReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkAddDiskReq)
    MergeFrom(*source);
  }
}

void LinkAddDiskReq::MergeFrom(const LinkAddDiskReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkAddDiskReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cdisk()) {
    mutable_cdisk()->::VidDisk::MergeFrom(from.cdisk());
  }
}

void LinkAddDiskReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkAddDiskReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkAddDiskReq::CopyFrom(const LinkAddDiskReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkAddDiskReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkAddDiskReq::IsInitialized() const {
  return true;
}

void LinkAddDiskReq::Swap(LinkAddDiskReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkAddDiskReq::InternalSwap(LinkAddDiskReq* other) {
  std::swap(cdisk_, other->cdisk_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkAddDiskReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[22];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkAddDiskReq

// .VidDisk cDisk = 1;
bool LinkAddDiskReq::has_cdisk() const {
  return this != internal_default_instance() && cdisk_ != NULL;
}
void LinkAddDiskReq::clear_cdisk() {
  if (GetArenaNoVirtual() == NULL && cdisk_ != NULL) delete cdisk_;
  cdisk_ = NULL;
}
const ::VidDisk& LinkAddDiskReq::cdisk() const {
  // @@protoc_insertion_point(field_get:LinkAddDiskReq.cDisk)
  return cdisk_ != NULL ? *cdisk_
                         : *::VidDisk::internal_default_instance();
}
::VidDisk* LinkAddDiskReq::mutable_cdisk() {
  
  if (cdisk_ == NULL) {
    cdisk_ = new ::VidDisk;
  }
  // @@protoc_insertion_point(field_mutable:LinkAddDiskReq.cDisk)
  return cdisk_;
}
::VidDisk* LinkAddDiskReq::release_cdisk() {
  // @@protoc_insertion_point(field_release:LinkAddDiskReq.cDisk)
  
  ::VidDisk* temp = cdisk_;
  cdisk_ = NULL;
  return temp;
}
void LinkAddDiskReq::set_allocated_cdisk(::VidDisk* cdisk) {
  delete cdisk_;
  cdisk_ = cdisk;
  if (cdisk) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkAddDiskReq.cDisk)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkAddDiskResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkAddDiskResp::LinkAddDiskResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkAddDiskResp)
}
LinkAddDiskResp::LinkAddDiskResp(const LinkAddDiskResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkAddDiskResp)
}

void LinkAddDiskResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkAddDiskResp::~LinkAddDiskResp() {
  // @@protoc_insertion_point(destructor:LinkAddDiskResp)
  SharedDtor();
}

void LinkAddDiskResp::SharedDtor() {
}

void LinkAddDiskResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkAddDiskResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[23].descriptor;
}

const LinkAddDiskResp& LinkAddDiskResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkAddDiskResp* LinkAddDiskResp::New(::google::protobuf::Arena* arena) const {
  LinkAddDiskResp* n = new LinkAddDiskResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkAddDiskResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkAddDiskResp)
  bsuccess_ = false;
}

bool LinkAddDiskResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkAddDiskResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkAddDiskResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkAddDiskResp)
  return false;
#undef DO_
}

void LinkAddDiskResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkAddDiskResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkAddDiskResp)
}

::google::protobuf::uint8* LinkAddDiskResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkAddDiskResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkAddDiskResp)
  return target;
}

size_t LinkAddDiskResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkAddDiskResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkAddDiskResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkAddDiskResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkAddDiskResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkAddDiskResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkAddDiskResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkAddDiskResp)
    MergeFrom(*source);
  }
}

void LinkAddDiskResp::MergeFrom(const LinkAddDiskResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkAddDiskResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkAddDiskResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkAddDiskResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkAddDiskResp::CopyFrom(const LinkAddDiskResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkAddDiskResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkAddDiskResp::IsInitialized() const {
  return true;
}

void LinkAddDiskResp::Swap(LinkAddDiskResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkAddDiskResp::InternalSwap(LinkAddDiskResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkAddDiskResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[23];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkAddDiskResp

// bool bSuccess = 1;
void LinkAddDiskResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkAddDiskResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkAddDiskResp.bSuccess)
  return bsuccess_;
}
void LinkAddDiskResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkAddDiskResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkDelDiskReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkDelDiskReq::LinkDelDiskReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkDelDiskReq)
}
LinkDelDiskReq::LinkDelDiskReq(const LinkDelDiskReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkDelDiskReq)
}

void LinkDelDiskReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkDelDiskReq::~LinkDelDiskReq() {
  // @@protoc_insertion_point(destructor:LinkDelDiskReq)
  SharedDtor();
}

void LinkDelDiskReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkDelDiskReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkDelDiskReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[24].descriptor;
}

const LinkDelDiskReq& LinkDelDiskReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkDelDiskReq* LinkDelDiskReq::New(::google::protobuf::Arena* arena) const {
  LinkDelDiskReq* n = new LinkDelDiskReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkDelDiskReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkDelDiskReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkDelDiskReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkDelDiskReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkDelDiskReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkDelDiskReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkDelDiskReq)
  return false;
#undef DO_
}

void LinkDelDiskReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkDelDiskReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkDelDiskReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkDelDiskReq)
}

::google::protobuf::uint8* LinkDelDiskReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkDelDiskReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkDelDiskReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkDelDiskReq)
  return target;
}

size_t LinkDelDiskReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkDelDiskReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkDelDiskReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkDelDiskReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkDelDiskReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkDelDiskReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkDelDiskReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkDelDiskReq)
    MergeFrom(*source);
  }
}

void LinkDelDiskReq::MergeFrom(const LinkDelDiskReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkDelDiskReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkDelDiskReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkDelDiskReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkDelDiskReq::CopyFrom(const LinkDelDiskReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkDelDiskReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkDelDiskReq::IsInitialized() const {
  return true;
}

void LinkDelDiskReq::Swap(LinkDelDiskReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkDelDiskReq::InternalSwap(LinkDelDiskReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkDelDiskReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[24];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkDelDiskReq

// string strId = 1;
void LinkDelDiskReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkDelDiskReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkDelDiskReq.strId)
  return strid_.GetNoArena();
}
void LinkDelDiskReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkDelDiskReq.strId)
}
#if LANG_CXX11
void LinkDelDiskReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkDelDiskReq.strId)
}
#endif
void LinkDelDiskReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkDelDiskReq.strId)
}
void LinkDelDiskReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkDelDiskReq.strId)
}
::std::string* LinkDelDiskReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkDelDiskReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkDelDiskReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkDelDiskReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkDelDiskReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkDelDiskReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkDelDiskResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkDelDiskResp::LinkDelDiskResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkDelDiskResp)
}
LinkDelDiskResp::LinkDelDiskResp(const LinkDelDiskResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkDelDiskResp)
}

void LinkDelDiskResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkDelDiskResp::~LinkDelDiskResp() {
  // @@protoc_insertion_point(destructor:LinkDelDiskResp)
  SharedDtor();
}

void LinkDelDiskResp::SharedDtor() {
}

void LinkDelDiskResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkDelDiskResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[25].descriptor;
}

const LinkDelDiskResp& LinkDelDiskResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkDelDiskResp* LinkDelDiskResp::New(::google::protobuf::Arena* arena) const {
  LinkDelDiskResp* n = new LinkDelDiskResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkDelDiskResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkDelDiskResp)
  bsuccess_ = false;
}

bool LinkDelDiskResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkDelDiskResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkDelDiskResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkDelDiskResp)
  return false;
#undef DO_
}

void LinkDelDiskResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkDelDiskResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkDelDiskResp)
}

::google::protobuf::uint8* LinkDelDiskResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkDelDiskResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkDelDiskResp)
  return target;
}

size_t LinkDelDiskResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkDelDiskResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkDelDiskResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkDelDiskResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkDelDiskResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkDelDiskResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkDelDiskResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkDelDiskResp)
    MergeFrom(*source);
  }
}

void LinkDelDiskResp::MergeFrom(const LinkDelDiskResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkDelDiskResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkDelDiskResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkDelDiskResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkDelDiskResp::CopyFrom(const LinkDelDiskResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkDelDiskResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkDelDiskResp::IsInitialized() const {
  return true;
}

void LinkDelDiskResp::Swap(LinkDelDiskResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkDelDiskResp::InternalSwap(LinkDelDiskResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkDelDiskResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[25];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkDelDiskResp

// bool bSuccess = 1;
void LinkDelDiskResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkDelDiskResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkDelDiskResp.bSuccess)
  return bsuccess_;
}
void LinkDelDiskResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkDelDiskResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkUpdateDiskLimitReq::kStrIdFieldNumber;
const int LinkUpdateDiskLimitReq::kNLimitFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkUpdateDiskLimitReq::LinkUpdateDiskLimitReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkUpdateDiskLimitReq)
}
LinkUpdateDiskLimitReq::LinkUpdateDiskLimitReq(const LinkUpdateDiskLimitReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  nlimit_ = from.nlimit_;
  // @@protoc_insertion_point(copy_constructor:LinkUpdateDiskLimitReq)
}

void LinkUpdateDiskLimitReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nlimit_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

LinkUpdateDiskLimitReq::~LinkUpdateDiskLimitReq() {
  // @@protoc_insertion_point(destructor:LinkUpdateDiskLimitReq)
  SharedDtor();
}

void LinkUpdateDiskLimitReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkUpdateDiskLimitReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkUpdateDiskLimitReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[26].descriptor;
}

const LinkUpdateDiskLimitReq& LinkUpdateDiskLimitReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkUpdateDiskLimitReq* LinkUpdateDiskLimitReq::New(::google::protobuf::Arena* arena) const {
  LinkUpdateDiskLimitReq* n = new LinkUpdateDiskLimitReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkUpdateDiskLimitReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkUpdateDiskLimitReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nlimit_ = GOOGLE_LONGLONG(0);
}

bool LinkUpdateDiskLimitReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkUpdateDiskLimitReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkUpdateDiskLimitReq.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 nLimit = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nlimit_)));
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
  // @@protoc_insertion_point(parse_success:LinkUpdateDiskLimitReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkUpdateDiskLimitReq)
  return false;
#undef DO_
}

void LinkUpdateDiskLimitReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkUpdateDiskLimitReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkUpdateDiskLimitReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int64 nLimit = 2;
  if (this->nlimit() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->nlimit(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkUpdateDiskLimitReq)
}

::google::protobuf::uint8* LinkUpdateDiskLimitReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkUpdateDiskLimitReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkUpdateDiskLimitReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int64 nLimit = 2;
  if (this->nlimit() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->nlimit(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkUpdateDiskLimitReq)
  return target;
}

size_t LinkUpdateDiskLimitReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkUpdateDiskLimitReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int64 nLimit = 2;
  if (this->nlimit() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nlimit());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkUpdateDiskLimitReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkUpdateDiskLimitReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkUpdateDiskLimitReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkUpdateDiskLimitReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkUpdateDiskLimitReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkUpdateDiskLimitReq)
    MergeFrom(*source);
  }
}

void LinkUpdateDiskLimitReq::MergeFrom(const LinkUpdateDiskLimitReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkUpdateDiskLimitReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nlimit() != 0) {
    set_nlimit(from.nlimit());
  }
}

void LinkUpdateDiskLimitReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkUpdateDiskLimitReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkUpdateDiskLimitReq::CopyFrom(const LinkUpdateDiskLimitReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkUpdateDiskLimitReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkUpdateDiskLimitReq::IsInitialized() const {
  return true;
}

void LinkUpdateDiskLimitReq::Swap(LinkUpdateDiskLimitReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkUpdateDiskLimitReq::InternalSwap(LinkUpdateDiskLimitReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(nlimit_, other->nlimit_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkUpdateDiskLimitReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[26];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkUpdateDiskLimitReq

// string strId = 1;
void LinkUpdateDiskLimitReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkUpdateDiskLimitReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkUpdateDiskLimitReq.strId)
  return strid_.GetNoArena();
}
void LinkUpdateDiskLimitReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkUpdateDiskLimitReq.strId)
}
#if LANG_CXX11
void LinkUpdateDiskLimitReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkUpdateDiskLimitReq.strId)
}
#endif
void LinkUpdateDiskLimitReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkUpdateDiskLimitReq.strId)
}
void LinkUpdateDiskLimitReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkUpdateDiskLimitReq.strId)
}
::std::string* LinkUpdateDiskLimitReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkUpdateDiskLimitReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkUpdateDiskLimitReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkUpdateDiskLimitReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkUpdateDiskLimitReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkUpdateDiskLimitReq.strId)
}

// int64 nLimit = 2;
void LinkUpdateDiskLimitReq::clear_nlimit() {
  nlimit_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 LinkUpdateDiskLimitReq::nlimit() const {
  // @@protoc_insertion_point(field_get:LinkUpdateDiskLimitReq.nLimit)
  return nlimit_;
}
void LinkUpdateDiskLimitReq::set_nlimit(::google::protobuf::int64 value) {
  
  nlimit_ = value;
  // @@protoc_insertion_point(field_set:LinkUpdateDiskLimitReq.nLimit)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkUpdateDiskLimitResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkUpdateDiskLimitResp::LinkUpdateDiskLimitResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkUpdateDiskLimitResp)
}
LinkUpdateDiskLimitResp::LinkUpdateDiskLimitResp(const LinkUpdateDiskLimitResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkUpdateDiskLimitResp)
}

void LinkUpdateDiskLimitResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkUpdateDiskLimitResp::~LinkUpdateDiskLimitResp() {
  // @@protoc_insertion_point(destructor:LinkUpdateDiskLimitResp)
  SharedDtor();
}

void LinkUpdateDiskLimitResp::SharedDtor() {
}

void LinkUpdateDiskLimitResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkUpdateDiskLimitResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[27].descriptor;
}

const LinkUpdateDiskLimitResp& LinkUpdateDiskLimitResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkUpdateDiskLimitResp* LinkUpdateDiskLimitResp::New(::google::protobuf::Arena* arena) const {
  LinkUpdateDiskLimitResp* n = new LinkUpdateDiskLimitResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkUpdateDiskLimitResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkUpdateDiskLimitResp)
  bsuccess_ = false;
}

bool LinkUpdateDiskLimitResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkUpdateDiskLimitResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkUpdateDiskLimitResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkUpdateDiskLimitResp)
  return false;
#undef DO_
}

void LinkUpdateDiskLimitResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkUpdateDiskLimitResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkUpdateDiskLimitResp)
}

::google::protobuf::uint8* LinkUpdateDiskLimitResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkUpdateDiskLimitResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkUpdateDiskLimitResp)
  return target;
}

size_t LinkUpdateDiskLimitResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkUpdateDiskLimitResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkUpdateDiskLimitResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkUpdateDiskLimitResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkUpdateDiskLimitResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkUpdateDiskLimitResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkUpdateDiskLimitResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkUpdateDiskLimitResp)
    MergeFrom(*source);
  }
}

void LinkUpdateDiskLimitResp::MergeFrom(const LinkUpdateDiskLimitResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkUpdateDiskLimitResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkUpdateDiskLimitResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkUpdateDiskLimitResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkUpdateDiskLimitResp::CopyFrom(const LinkUpdateDiskLimitResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkUpdateDiskLimitResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkUpdateDiskLimitResp::IsInitialized() const {
  return true;
}

void LinkUpdateDiskLimitResp::Swap(LinkUpdateDiskLimitResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkUpdateDiskLimitResp::InternalSwap(LinkUpdateDiskLimitResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkUpdateDiskLimitResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[27];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkUpdateDiskLimitResp

// bool bSuccess = 1;
void LinkUpdateDiskLimitResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkUpdateDiskLimitResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkUpdateDiskLimitResp.bSuccess)
  return bsuccess_;
}
void LinkUpdateDiskLimitResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkUpdateDiskLimitResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkGetLicReq::kStrFakeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkGetLicReq::LinkGetLicReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkGetLicReq)
}
LinkGetLicReq::LinkGetLicReq(const LinkGetLicReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strfake().size() > 0) {
    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkGetLicReq)
}

void LinkGetLicReq::SharedCtor() {
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkGetLicReq::~LinkGetLicReq() {
  // @@protoc_insertion_point(destructor:LinkGetLicReq)
  SharedDtor();
}

void LinkGetLicReq::SharedDtor() {
  strfake_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkGetLicReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkGetLicReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[28].descriptor;
}

const LinkGetLicReq& LinkGetLicReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkGetLicReq* LinkGetLicReq::New(::google::protobuf::Arena* arena) const {
  LinkGetLicReq* n = new LinkGetLicReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkGetLicReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkGetLicReq)
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkGetLicReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkGetLicReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strFake = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strfake()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strfake().data(), this->strfake().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetLicReq.strFake"));
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
  // @@protoc_insertion_point(parse_success:LinkGetLicReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkGetLicReq)
  return false;
#undef DO_
}

void LinkGetLicReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkGetLicReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicReq.strFake");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strfake(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkGetLicReq)
}

::google::protobuf::uint8* LinkGetLicReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkGetLicReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicReq.strFake");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strfake(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkGetLicReq)
  return target;
}

size_t LinkGetLicReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkGetLicReq)
  size_t total_size = 0;

  // string strFake = 1;
  if (this->strfake().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strfake());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkGetLicReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkGetLicReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkGetLicReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkGetLicReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkGetLicReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkGetLicReq)
    MergeFrom(*source);
  }
}

void LinkGetLicReq::MergeFrom(const LinkGetLicReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkGetLicReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strfake().size() > 0) {

    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
}

void LinkGetLicReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkGetLicReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkGetLicReq::CopyFrom(const LinkGetLicReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkGetLicReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkGetLicReq::IsInitialized() const {
  return true;
}

void LinkGetLicReq::Swap(LinkGetLicReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkGetLicReq::InternalSwap(LinkGetLicReq* other) {
  strfake_.Swap(&other->strfake_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkGetLicReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[28];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkGetLicReq

// string strFake = 1;
void LinkGetLicReq::clear_strfake() {
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetLicReq::strfake() const {
  // @@protoc_insertion_point(field_get:LinkGetLicReq.strFake)
  return strfake_.GetNoArena();
}
void LinkGetLicReq::set_strfake(const ::std::string& value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetLicReq.strFake)
}
#if LANG_CXX11
void LinkGetLicReq::set_strfake(::std::string&& value) {
  
  strfake_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetLicReq.strFake)
}
#endif
void LinkGetLicReq::set_strfake(const char* value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetLicReq.strFake)
}
void LinkGetLicReq::set_strfake(const char* value, size_t size) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetLicReq.strFake)
}
::std::string* LinkGetLicReq::mutable_strfake() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetLicReq.strFake)
  return strfake_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetLicReq::release_strfake() {
  // @@protoc_insertion_point(field_release:LinkGetLicReq.strFake)
  
  return strfake_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetLicReq::set_allocated_strfake(::std::string* strfake) {
  if (strfake != NULL) {
    
  } else {
    
  }
  strfake_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strfake);
  // @@protoc_insertion_point(field_set_allocated:LinkGetLicReq.strFake)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkGetLicResp::kStrLicFieldNumber;
const int LinkGetLicResp::kStrHostIdFieldNumber;
const int LinkGetLicResp::kNChFieldNumber;
const int LinkGetLicResp::kStrTypeFieldNumber;
const int LinkGetLicResp::kStrStartTimeFieldNumber;
const int LinkGetLicResp::kStrExpireTimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkGetLicResp::LinkGetLicResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkGetLicResp)
}
LinkGetLicResp::LinkGetLicResp(const LinkGetLicResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strlic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strlic().size() > 0) {
    strlic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strlic_);
  }
  strhostid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strhostid().size() > 0) {
    strhostid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strhostid_);
  }
  strtype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strtype().size() > 0) {
    strtype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtype_);
  }
  strstarttime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strstarttime().size() > 0) {
    strstarttime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstarttime_);
  }
  strexpiretime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strexpiretime().size() > 0) {
    strexpiretime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strexpiretime_);
  }
  nch_ = from.nch_;
  // @@protoc_insertion_point(copy_constructor:LinkGetLicResp)
}

void LinkGetLicResp::SharedCtor() {
  strlic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strhostid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstarttime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strexpiretime_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nch_ = 0;
  _cached_size_ = 0;
}

LinkGetLicResp::~LinkGetLicResp() {
  // @@protoc_insertion_point(destructor:LinkGetLicResp)
  SharedDtor();
}

void LinkGetLicResp::SharedDtor() {
  strlic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strhostid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtype_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstarttime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strexpiretime_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkGetLicResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkGetLicResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[29].descriptor;
}

const LinkGetLicResp& LinkGetLicResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkGetLicResp* LinkGetLicResp::New(::google::protobuf::Arena* arena) const {
  LinkGetLicResp* n = new LinkGetLicResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkGetLicResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkGetLicResp)
  strlic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strhostid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strtype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strstarttime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strexpiretime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nch_ = 0;
}

bool LinkGetLicResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkGetLicResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strLic = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strlic()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strlic().data(), this->strlic().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetLicResp.strLic"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strHostId = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strhostid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strhostid().data(), this->strhostid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetLicResp.strHostId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nCh = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nch_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strType = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strtype()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strtype().data(), this->strtype().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetLicResp.strType"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strStartTime = 5;
      case 5: {
        if (tag == 42u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strstarttime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strstarttime().data(), this->strstarttime().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetLicResp.strStartTime"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strExpireTime = 6;
      case 6: {
        if (tag == 50u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strexpiretime()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strexpiretime().data(), this->strexpiretime().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetLicResp.strExpireTime"));
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
  // @@protoc_insertion_point(parse_success:LinkGetLicResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkGetLicResp)
  return false;
#undef DO_
}

void LinkGetLicResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkGetLicResp)
  // string strLic = 1;
  if (this->strlic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strlic().data(), this->strlic().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strLic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strlic(), output);
  }

  // string strHostId = 2;
  if (this->strhostid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strhostid().data(), this->strhostid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strHostId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strhostid(), output);
  }

  // int32 nCh = 3;
  if (this->nch() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nch(), output);
  }

  // string strType = 4;
  if (this->strtype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtype().data(), this->strtype().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strType");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->strtype(), output);
  }

  // string strStartTime = 5;
  if (this->strstarttime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstarttime().data(), this->strstarttime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strStartTime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->strstarttime(), output);
  }

  // string strExpireTime = 6;
  if (this->strexpiretime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strexpiretime().data(), this->strexpiretime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strExpireTime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->strexpiretime(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkGetLicResp)
}

::google::protobuf::uint8* LinkGetLicResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkGetLicResp)
  // string strLic = 1;
  if (this->strlic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strlic().data(), this->strlic().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strLic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strlic(), target);
  }

  // string strHostId = 2;
  if (this->strhostid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strhostid().data(), this->strhostid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strHostId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strhostid(), target);
  }

  // int32 nCh = 3;
  if (this->nch() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nch(), target);
  }

  // string strType = 4;
  if (this->strtype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strtype().data(), this->strtype().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strType");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->strtype(), target);
  }

  // string strStartTime = 5;
  if (this->strstarttime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strstarttime().data(), this->strstarttime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strStartTime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->strstarttime(), target);
  }

  // string strExpireTime = 6;
  if (this->strexpiretime().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strexpiretime().data(), this->strexpiretime().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetLicResp.strExpireTime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->strexpiretime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkGetLicResp)
  return target;
}

size_t LinkGetLicResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkGetLicResp)
  size_t total_size = 0;

  // string strLic = 1;
  if (this->strlic().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strlic());
  }

  // string strHostId = 2;
  if (this->strhostid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strhostid());
  }

  // string strType = 4;
  if (this->strtype().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strtype());
  }

  // string strStartTime = 5;
  if (this->strstarttime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strstarttime());
  }

  // string strExpireTime = 6;
  if (this->strexpiretime().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strexpiretime());
  }

  // int32 nCh = 3;
  if (this->nch() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nch());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkGetLicResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkGetLicResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkGetLicResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkGetLicResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkGetLicResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkGetLicResp)
    MergeFrom(*source);
  }
}

void LinkGetLicResp::MergeFrom(const LinkGetLicResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkGetLicResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strlic().size() > 0) {

    strlic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strlic_);
  }
  if (from.strhostid().size() > 0) {

    strhostid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strhostid_);
  }
  if (from.strtype().size() > 0) {

    strtype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strtype_);
  }
  if (from.strstarttime().size() > 0) {

    strstarttime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strstarttime_);
  }
  if (from.strexpiretime().size() > 0) {

    strexpiretime_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strexpiretime_);
  }
  if (from.nch() != 0) {
    set_nch(from.nch());
  }
}

void LinkGetLicResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkGetLicResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkGetLicResp::CopyFrom(const LinkGetLicResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkGetLicResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkGetLicResp::IsInitialized() const {
  return true;
}

void LinkGetLicResp::Swap(LinkGetLicResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkGetLicResp::InternalSwap(LinkGetLicResp* other) {
  strlic_.Swap(&other->strlic_);
  strhostid_.Swap(&other->strhostid_);
  strtype_.Swap(&other->strtype_);
  strstarttime_.Swap(&other->strstarttime_);
  strexpiretime_.Swap(&other->strexpiretime_);
  std::swap(nch_, other->nch_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkGetLicResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[29];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkGetLicResp

// string strLic = 1;
void LinkGetLicResp::clear_strlic() {
  strlic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetLicResp::strlic() const {
  // @@protoc_insertion_point(field_get:LinkGetLicResp.strLic)
  return strlic_.GetNoArena();
}
void LinkGetLicResp::set_strlic(const ::std::string& value) {
  
  strlic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetLicResp.strLic)
}
#if LANG_CXX11
void LinkGetLicResp::set_strlic(::std::string&& value) {
  
  strlic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetLicResp.strLic)
}
#endif
void LinkGetLicResp::set_strlic(const char* value) {
  
  strlic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetLicResp.strLic)
}
void LinkGetLicResp::set_strlic(const char* value, size_t size) {
  
  strlic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetLicResp.strLic)
}
::std::string* LinkGetLicResp::mutable_strlic() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetLicResp.strLic)
  return strlic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetLicResp::release_strlic() {
  // @@protoc_insertion_point(field_release:LinkGetLicResp.strLic)
  
  return strlic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetLicResp::set_allocated_strlic(::std::string* strlic) {
  if (strlic != NULL) {
    
  } else {
    
  }
  strlic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strlic);
  // @@protoc_insertion_point(field_set_allocated:LinkGetLicResp.strLic)
}

// string strHostId = 2;
void LinkGetLicResp::clear_strhostid() {
  strhostid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetLicResp::strhostid() const {
  // @@protoc_insertion_point(field_get:LinkGetLicResp.strHostId)
  return strhostid_.GetNoArena();
}
void LinkGetLicResp::set_strhostid(const ::std::string& value) {
  
  strhostid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetLicResp.strHostId)
}
#if LANG_CXX11
void LinkGetLicResp::set_strhostid(::std::string&& value) {
  
  strhostid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetLicResp.strHostId)
}
#endif
void LinkGetLicResp::set_strhostid(const char* value) {
  
  strhostid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetLicResp.strHostId)
}
void LinkGetLicResp::set_strhostid(const char* value, size_t size) {
  
  strhostid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetLicResp.strHostId)
}
::std::string* LinkGetLicResp::mutable_strhostid() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetLicResp.strHostId)
  return strhostid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetLicResp::release_strhostid() {
  // @@protoc_insertion_point(field_release:LinkGetLicResp.strHostId)
  
  return strhostid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetLicResp::set_allocated_strhostid(::std::string* strhostid) {
  if (strhostid != NULL) {
    
  } else {
    
  }
  strhostid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strhostid);
  // @@protoc_insertion_point(field_set_allocated:LinkGetLicResp.strHostId)
}

// int32 nCh = 3;
void LinkGetLicResp::clear_nch() {
  nch_ = 0;
}
::google::protobuf::int32 LinkGetLicResp::nch() const {
  // @@protoc_insertion_point(field_get:LinkGetLicResp.nCh)
  return nch_;
}
void LinkGetLicResp::set_nch(::google::protobuf::int32 value) {
  
  nch_ = value;
  // @@protoc_insertion_point(field_set:LinkGetLicResp.nCh)
}

// string strType = 4;
void LinkGetLicResp::clear_strtype() {
  strtype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetLicResp::strtype() const {
  // @@protoc_insertion_point(field_get:LinkGetLicResp.strType)
  return strtype_.GetNoArena();
}
void LinkGetLicResp::set_strtype(const ::std::string& value) {
  
  strtype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetLicResp.strType)
}
#if LANG_CXX11
void LinkGetLicResp::set_strtype(::std::string&& value) {
  
  strtype_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetLicResp.strType)
}
#endif
void LinkGetLicResp::set_strtype(const char* value) {
  
  strtype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetLicResp.strType)
}
void LinkGetLicResp::set_strtype(const char* value, size_t size) {
  
  strtype_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetLicResp.strType)
}
::std::string* LinkGetLicResp::mutable_strtype() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetLicResp.strType)
  return strtype_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetLicResp::release_strtype() {
  // @@protoc_insertion_point(field_release:LinkGetLicResp.strType)
  
  return strtype_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetLicResp::set_allocated_strtype(::std::string* strtype) {
  if (strtype != NULL) {
    
  } else {
    
  }
  strtype_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strtype);
  // @@protoc_insertion_point(field_set_allocated:LinkGetLicResp.strType)
}

// string strStartTime = 5;
void LinkGetLicResp::clear_strstarttime() {
  strstarttime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetLicResp::strstarttime() const {
  // @@protoc_insertion_point(field_get:LinkGetLicResp.strStartTime)
  return strstarttime_.GetNoArena();
}
void LinkGetLicResp::set_strstarttime(const ::std::string& value) {
  
  strstarttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetLicResp.strStartTime)
}
#if LANG_CXX11
void LinkGetLicResp::set_strstarttime(::std::string&& value) {
  
  strstarttime_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetLicResp.strStartTime)
}
#endif
void LinkGetLicResp::set_strstarttime(const char* value) {
  
  strstarttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetLicResp.strStartTime)
}
void LinkGetLicResp::set_strstarttime(const char* value, size_t size) {
  
  strstarttime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetLicResp.strStartTime)
}
::std::string* LinkGetLicResp::mutable_strstarttime() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetLicResp.strStartTime)
  return strstarttime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetLicResp::release_strstarttime() {
  // @@protoc_insertion_point(field_release:LinkGetLicResp.strStartTime)
  
  return strstarttime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetLicResp::set_allocated_strstarttime(::std::string* strstarttime) {
  if (strstarttime != NULL) {
    
  } else {
    
  }
  strstarttime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strstarttime);
  // @@protoc_insertion_point(field_set_allocated:LinkGetLicResp.strStartTime)
}

// string strExpireTime = 6;
void LinkGetLicResp::clear_strexpiretime() {
  strexpiretime_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetLicResp::strexpiretime() const {
  // @@protoc_insertion_point(field_get:LinkGetLicResp.strExpireTime)
  return strexpiretime_.GetNoArena();
}
void LinkGetLicResp::set_strexpiretime(const ::std::string& value) {
  
  strexpiretime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetLicResp.strExpireTime)
}
#if LANG_CXX11
void LinkGetLicResp::set_strexpiretime(::std::string&& value) {
  
  strexpiretime_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetLicResp.strExpireTime)
}
#endif
void LinkGetLicResp::set_strexpiretime(const char* value) {
  
  strexpiretime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetLicResp.strExpireTime)
}
void LinkGetLicResp::set_strexpiretime(const char* value, size_t size) {
  
  strexpiretime_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetLicResp.strExpireTime)
}
::std::string* LinkGetLicResp::mutable_strexpiretime() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetLicResp.strExpireTime)
  return strexpiretime_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetLicResp::release_strexpiretime() {
  // @@protoc_insertion_point(field_release:LinkGetLicResp.strExpireTime)
  
  return strexpiretime_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetLicResp::set_allocated_strexpiretime(::std::string* strexpiretime) {
  if (strexpiretime != NULL) {
    
  } else {
    
  }
  strexpiretime_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strexpiretime);
  // @@protoc_insertion_point(field_set_allocated:LinkGetLicResp.strExpireTime)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkGetVerReq::kStrFakeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkGetVerReq::LinkGetVerReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkGetVerReq)
}
LinkGetVerReq::LinkGetVerReq(const LinkGetVerReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strfake().size() > 0) {
    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkGetVerReq)
}

void LinkGetVerReq::SharedCtor() {
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkGetVerReq::~LinkGetVerReq() {
  // @@protoc_insertion_point(destructor:LinkGetVerReq)
  SharedDtor();
}

void LinkGetVerReq::SharedDtor() {
  strfake_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkGetVerReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkGetVerReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[30].descriptor;
}

const LinkGetVerReq& LinkGetVerReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkGetVerReq* LinkGetVerReq::New(::google::protobuf::Arena* arena) const {
  LinkGetVerReq* n = new LinkGetVerReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkGetVerReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkGetVerReq)
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkGetVerReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkGetVerReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strFake = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strfake()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strfake().data(), this->strfake().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetVerReq.strFake"));
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
  // @@protoc_insertion_point(parse_success:LinkGetVerReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkGetVerReq)
  return false;
#undef DO_
}

void LinkGetVerReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkGetVerReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetVerReq.strFake");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strfake(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkGetVerReq)
}

::google::protobuf::uint8* LinkGetVerReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkGetVerReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetVerReq.strFake");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strfake(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkGetVerReq)
  return target;
}

size_t LinkGetVerReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkGetVerReq)
  size_t total_size = 0;

  // string strFake = 1;
  if (this->strfake().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strfake());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkGetVerReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkGetVerReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkGetVerReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkGetVerReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkGetVerReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkGetVerReq)
    MergeFrom(*source);
  }
}

void LinkGetVerReq::MergeFrom(const LinkGetVerReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkGetVerReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strfake().size() > 0) {

    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
}

void LinkGetVerReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkGetVerReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkGetVerReq::CopyFrom(const LinkGetVerReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkGetVerReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkGetVerReq::IsInitialized() const {
  return true;
}

void LinkGetVerReq::Swap(LinkGetVerReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkGetVerReq::InternalSwap(LinkGetVerReq* other) {
  strfake_.Swap(&other->strfake_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkGetVerReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[30];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkGetVerReq

// string strFake = 1;
void LinkGetVerReq::clear_strfake() {
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetVerReq::strfake() const {
  // @@protoc_insertion_point(field_get:LinkGetVerReq.strFake)
  return strfake_.GetNoArena();
}
void LinkGetVerReq::set_strfake(const ::std::string& value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetVerReq.strFake)
}
#if LANG_CXX11
void LinkGetVerReq::set_strfake(::std::string&& value) {
  
  strfake_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetVerReq.strFake)
}
#endif
void LinkGetVerReq::set_strfake(const char* value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetVerReq.strFake)
}
void LinkGetVerReq::set_strfake(const char* value, size_t size) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetVerReq.strFake)
}
::std::string* LinkGetVerReq::mutable_strfake() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetVerReq.strFake)
  return strfake_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetVerReq::release_strfake() {
  // @@protoc_insertion_point(field_release:LinkGetVerReq.strFake)
  
  return strfake_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetVerReq::set_allocated_strfake(::std::string* strfake) {
  if (strfake != NULL) {
    
  } else {
    
  }
  strfake_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strfake);
  // @@protoc_insertion_point(field_set_allocated:LinkGetVerReq.strFake)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkGetVerResp::kStrVerFieldNumber;
const int LinkGetVerResp::kStrInfoFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkGetVerResp::LinkGetVerResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkGetVerResp)
}
LinkGetVerResp::LinkGetVerResp(const LinkGetVerResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strver_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strver().size() > 0) {
    strver_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strver_);
  }
  strinfo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strinfo().size() > 0) {
    strinfo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strinfo_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkGetVerResp)
}

void LinkGetVerResp::SharedCtor() {
  strver_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strinfo_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkGetVerResp::~LinkGetVerResp() {
  // @@protoc_insertion_point(destructor:LinkGetVerResp)
  SharedDtor();
}

void LinkGetVerResp::SharedDtor() {
  strver_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strinfo_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkGetVerResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkGetVerResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[31].descriptor;
}

const LinkGetVerResp& LinkGetVerResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkGetVerResp* LinkGetVerResp::New(::google::protobuf::Arena* arena) const {
  LinkGetVerResp* n = new LinkGetVerResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkGetVerResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkGetVerResp)
  strver_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strinfo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkGetVerResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkGetVerResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strVer = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strver()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strver().data(), this->strver().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetVerResp.strVer"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strInfo = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strinfo()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strinfo().data(), this->strinfo().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkGetVerResp.strInfo"));
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
  // @@protoc_insertion_point(parse_success:LinkGetVerResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkGetVerResp)
  return false;
#undef DO_
}

void LinkGetVerResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkGetVerResp)
  // string strVer = 1;
  if (this->strver().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strver().data(), this->strver().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetVerResp.strVer");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strver(), output);
  }

  // string strInfo = 2;
  if (this->strinfo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strinfo().data(), this->strinfo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetVerResp.strInfo");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strinfo(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkGetVerResp)
}

::google::protobuf::uint8* LinkGetVerResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkGetVerResp)
  // string strVer = 1;
  if (this->strver().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strver().data(), this->strver().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetVerResp.strVer");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strver(), target);
  }

  // string strInfo = 2;
  if (this->strinfo().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strinfo().data(), this->strinfo().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkGetVerResp.strInfo");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strinfo(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkGetVerResp)
  return target;
}

size_t LinkGetVerResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkGetVerResp)
  size_t total_size = 0;

  // string strVer = 1;
  if (this->strver().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strver());
  }

  // string strInfo = 2;
  if (this->strinfo().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strinfo());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkGetVerResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkGetVerResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkGetVerResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkGetVerResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkGetVerResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkGetVerResp)
    MergeFrom(*source);
  }
}

void LinkGetVerResp::MergeFrom(const LinkGetVerResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkGetVerResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strver().size() > 0) {

    strver_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strver_);
  }
  if (from.strinfo().size() > 0) {

    strinfo_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strinfo_);
  }
}

void LinkGetVerResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkGetVerResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkGetVerResp::CopyFrom(const LinkGetVerResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkGetVerResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkGetVerResp::IsInitialized() const {
  return true;
}

void LinkGetVerResp::Swap(LinkGetVerResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkGetVerResp::InternalSwap(LinkGetVerResp* other) {
  strver_.Swap(&other->strver_);
  strinfo_.Swap(&other->strinfo_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkGetVerResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[31];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkGetVerResp

// string strVer = 1;
void LinkGetVerResp::clear_strver() {
  strver_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetVerResp::strver() const {
  // @@protoc_insertion_point(field_get:LinkGetVerResp.strVer)
  return strver_.GetNoArena();
}
void LinkGetVerResp::set_strver(const ::std::string& value) {
  
  strver_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetVerResp.strVer)
}
#if LANG_CXX11
void LinkGetVerResp::set_strver(::std::string&& value) {
  
  strver_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetVerResp.strVer)
}
#endif
void LinkGetVerResp::set_strver(const char* value) {
  
  strver_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetVerResp.strVer)
}
void LinkGetVerResp::set_strver(const char* value, size_t size) {
  
  strver_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetVerResp.strVer)
}
::std::string* LinkGetVerResp::mutable_strver() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetVerResp.strVer)
  return strver_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetVerResp::release_strver() {
  // @@protoc_insertion_point(field_release:LinkGetVerResp.strVer)
  
  return strver_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetVerResp::set_allocated_strver(::std::string* strver) {
  if (strver != NULL) {
    
  } else {
    
  }
  strver_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strver);
  // @@protoc_insertion_point(field_set_allocated:LinkGetVerResp.strVer)
}

// string strInfo = 2;
void LinkGetVerResp::clear_strinfo() {
  strinfo_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkGetVerResp::strinfo() const {
  // @@protoc_insertion_point(field_get:LinkGetVerResp.strInfo)
  return strinfo_.GetNoArena();
}
void LinkGetVerResp::set_strinfo(const ::std::string& value) {
  
  strinfo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkGetVerResp.strInfo)
}
#if LANG_CXX11
void LinkGetVerResp::set_strinfo(::std::string&& value) {
  
  strinfo_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkGetVerResp.strInfo)
}
#endif
void LinkGetVerResp::set_strinfo(const char* value) {
  
  strinfo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkGetVerResp.strInfo)
}
void LinkGetVerResp::set_strinfo(const char* value, size_t size) {
  
  strinfo_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkGetVerResp.strInfo)
}
::std::string* LinkGetVerResp::mutable_strinfo() {
  
  // @@protoc_insertion_point(field_mutable:LinkGetVerResp.strInfo)
  return strinfo_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkGetVerResp::release_strinfo() {
  // @@protoc_insertion_point(field_release:LinkGetVerResp.strInfo)
  
  return strinfo_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkGetVerResp::set_allocated_strinfo(::std::string* strinfo) {
  if (strinfo != NULL) {
    
  } else {
    
  }
  strinfo_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strinfo);
  // @@protoc_insertion_point(field_set_allocated:LinkGetVerResp.strInfo)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkConfLicReq::kStrLicFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkConfLicReq::LinkConfLicReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkConfLicReq)
}
LinkConfLicReq::LinkConfLicReq(const LinkConfLicReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strlic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strlic().size() > 0) {
    strlic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strlic_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkConfLicReq)
}

void LinkConfLicReq::SharedCtor() {
  strlic_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkConfLicReq::~LinkConfLicReq() {
  // @@protoc_insertion_point(destructor:LinkConfLicReq)
  SharedDtor();
}

void LinkConfLicReq::SharedDtor() {
  strlic_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkConfLicReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkConfLicReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[32].descriptor;
}

const LinkConfLicReq& LinkConfLicReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkConfLicReq* LinkConfLicReq::New(::google::protobuf::Arena* arena) const {
  LinkConfLicReq* n = new LinkConfLicReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkConfLicReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkConfLicReq)
  strlic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkConfLicReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkConfLicReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strLic = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strlic()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strlic().data(), this->strlic().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkConfLicReq.strLic"));
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
  // @@protoc_insertion_point(parse_success:LinkConfLicReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkConfLicReq)
  return false;
#undef DO_
}

void LinkConfLicReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkConfLicReq)
  // string strLic = 1;
  if (this->strlic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strlic().data(), this->strlic().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkConfLicReq.strLic");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strlic(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkConfLicReq)
}

::google::protobuf::uint8* LinkConfLicReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkConfLicReq)
  // string strLic = 1;
  if (this->strlic().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strlic().data(), this->strlic().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkConfLicReq.strLic");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strlic(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkConfLicReq)
  return target;
}

size_t LinkConfLicReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkConfLicReq)
  size_t total_size = 0;

  // string strLic = 1;
  if (this->strlic().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strlic());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkConfLicReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkConfLicReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkConfLicReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkConfLicReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkConfLicReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkConfLicReq)
    MergeFrom(*source);
  }
}

void LinkConfLicReq::MergeFrom(const LinkConfLicReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkConfLicReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strlic().size() > 0) {

    strlic_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strlic_);
  }
}

void LinkConfLicReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkConfLicReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkConfLicReq::CopyFrom(const LinkConfLicReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkConfLicReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkConfLicReq::IsInitialized() const {
  return true;
}

void LinkConfLicReq::Swap(LinkConfLicReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkConfLicReq::InternalSwap(LinkConfLicReq* other) {
  strlic_.Swap(&other->strlic_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkConfLicReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[32];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkConfLicReq

// string strLic = 1;
void LinkConfLicReq::clear_strlic() {
  strlic_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkConfLicReq::strlic() const {
  // @@protoc_insertion_point(field_get:LinkConfLicReq.strLic)
  return strlic_.GetNoArena();
}
void LinkConfLicReq::set_strlic(const ::std::string& value) {
  
  strlic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkConfLicReq.strLic)
}
#if LANG_CXX11
void LinkConfLicReq::set_strlic(::std::string&& value) {
  
  strlic_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkConfLicReq.strLic)
}
#endif
void LinkConfLicReq::set_strlic(const char* value) {
  
  strlic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkConfLicReq.strLic)
}
void LinkConfLicReq::set_strlic(const char* value, size_t size) {
  
  strlic_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkConfLicReq.strLic)
}
::std::string* LinkConfLicReq::mutable_strlic() {
  
  // @@protoc_insertion_point(field_mutable:LinkConfLicReq.strLic)
  return strlic_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkConfLicReq::release_strlic() {
  // @@protoc_insertion_point(field_release:LinkConfLicReq.strLic)
  
  return strlic_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkConfLicReq::set_allocated_strlic(::std::string* strlic) {
  if (strlic != NULL) {
    
  } else {
    
  }
  strlic_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strlic);
  // @@protoc_insertion_point(field_set_allocated:LinkConfLicReq.strLic)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkConfLicResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkConfLicResp::LinkConfLicResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkConfLicResp)
}
LinkConfLicResp::LinkConfLicResp(const LinkConfLicResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkConfLicResp)
}

void LinkConfLicResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkConfLicResp::~LinkConfLicResp() {
  // @@protoc_insertion_point(destructor:LinkConfLicResp)
  SharedDtor();
}

void LinkConfLicResp::SharedDtor() {
}

void LinkConfLicResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkConfLicResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[33].descriptor;
}

const LinkConfLicResp& LinkConfLicResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkConfLicResp* LinkConfLicResp::New(::google::protobuf::Arena* arena) const {
  LinkConfLicResp* n = new LinkConfLicResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkConfLicResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkConfLicResp)
  bsuccess_ = false;
}

bool LinkConfLicResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkConfLicResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkConfLicResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkConfLicResp)
  return false;
#undef DO_
}

void LinkConfLicResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkConfLicResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkConfLicResp)
}

::google::protobuf::uint8* LinkConfLicResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkConfLicResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkConfLicResp)
  return target;
}

size_t LinkConfLicResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkConfLicResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkConfLicResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkConfLicResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkConfLicResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkConfLicResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkConfLicResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkConfLicResp)
    MergeFrom(*source);
  }
}

void LinkConfLicResp::MergeFrom(const LinkConfLicResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkConfLicResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkConfLicResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkConfLicResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkConfLicResp::CopyFrom(const LinkConfLicResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkConfLicResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkConfLicResp::IsInitialized() const {
  return true;
}

void LinkConfLicResp::Swap(LinkConfLicResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkConfLicResp::InternalSwap(LinkConfLicResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkConfLicResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[33];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkConfLicResp

// bool bSuccess = 1;
void LinkConfLicResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkConfLicResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkConfLicResp.bSuccess)
  return bsuccess_;
}
void LinkConfLicResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkConfLicResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkAddUserReq::kStrUserFieldNumber;
const int LinkAddUserReq::kStrPasswdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkAddUserReq::LinkAddUserReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkAddUserReq)
}
LinkAddUserReq::LinkAddUserReq(const LinkAddUserReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.struser().size() > 0) {
    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strpasswd().size() > 0) {
    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkAddUserReq)
}

void LinkAddUserReq::SharedCtor() {
  struser_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkAddUserReq::~LinkAddUserReq() {
  // @@protoc_insertion_point(destructor:LinkAddUserReq)
  SharedDtor();
}

void LinkAddUserReq::SharedDtor() {
  struser_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkAddUserReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkAddUserReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[34].descriptor;
}

const LinkAddUserReq& LinkAddUserReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkAddUserReq* LinkAddUserReq::New(::google::protobuf::Arena* arena) const {
  LinkAddUserReq* n = new LinkAddUserReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkAddUserReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkAddUserReq)
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkAddUserReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkAddUserReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strUser = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_struser()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->struser().data(), this->struser().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkAddUserReq.strUser"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPasswd = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strpasswd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strpasswd().data(), this->strpasswd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkAddUserReq.strPasswd"));
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
  // @@protoc_insertion_point(parse_success:LinkAddUserReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkAddUserReq)
  return false;
#undef DO_
}

void LinkAddUserReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkAddUserReq)
  // string strUser = 1;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkAddUserReq.strUser");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->struser(), output);
  }

  // string strPasswd = 2;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkAddUserReq.strPasswd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strpasswd(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkAddUserReq)
}

::google::protobuf::uint8* LinkAddUserReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkAddUserReq)
  // string strUser = 1;
  if (this->struser().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->struser().data(), this->struser().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkAddUserReq.strUser");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->struser(), target);
  }

  // string strPasswd = 2;
  if (this->strpasswd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strpasswd().data(), this->strpasswd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkAddUserReq.strPasswd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strpasswd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkAddUserReq)
  return target;
}

size_t LinkAddUserReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkAddUserReq)
  size_t total_size = 0;

  // string strUser = 1;
  if (this->struser().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->struser());
  }

  // string strPasswd = 2;
  if (this->strpasswd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strpasswd());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkAddUserReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkAddUserReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkAddUserReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkAddUserReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkAddUserReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkAddUserReq)
    MergeFrom(*source);
  }
}

void LinkAddUserReq::MergeFrom(const LinkAddUserReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkAddUserReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.struser().size() > 0) {

    struser_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.struser_);
  }
  if (from.strpasswd().size() > 0) {

    strpasswd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strpasswd_);
  }
}

void LinkAddUserReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkAddUserReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkAddUserReq::CopyFrom(const LinkAddUserReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkAddUserReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkAddUserReq::IsInitialized() const {
  return true;
}

void LinkAddUserReq::Swap(LinkAddUserReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkAddUserReq::InternalSwap(LinkAddUserReq* other) {
  struser_.Swap(&other->struser_);
  strpasswd_.Swap(&other->strpasswd_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkAddUserReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[34];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkAddUserReq

// string strUser = 1;
void LinkAddUserReq::clear_struser() {
  struser_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkAddUserReq::struser() const {
  // @@protoc_insertion_point(field_get:LinkAddUserReq.strUser)
  return struser_.GetNoArena();
}
void LinkAddUserReq::set_struser(const ::std::string& value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkAddUserReq.strUser)
}
#if LANG_CXX11
void LinkAddUserReq::set_struser(::std::string&& value) {
  
  struser_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkAddUserReq.strUser)
}
#endif
void LinkAddUserReq::set_struser(const char* value) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkAddUserReq.strUser)
}
void LinkAddUserReq::set_struser(const char* value, size_t size) {
  
  struser_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkAddUserReq.strUser)
}
::std::string* LinkAddUserReq::mutable_struser() {
  
  // @@protoc_insertion_point(field_mutable:LinkAddUserReq.strUser)
  return struser_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkAddUserReq::release_struser() {
  // @@protoc_insertion_point(field_release:LinkAddUserReq.strUser)
  
  return struser_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkAddUserReq::set_allocated_struser(::std::string* struser) {
  if (struser != NULL) {
    
  } else {
    
  }
  struser_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), struser);
  // @@protoc_insertion_point(field_set_allocated:LinkAddUserReq.strUser)
}

// string strPasswd = 2;
void LinkAddUserReq::clear_strpasswd() {
  strpasswd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkAddUserReq::strpasswd() const {
  // @@protoc_insertion_point(field_get:LinkAddUserReq.strPasswd)
  return strpasswd_.GetNoArena();
}
void LinkAddUserReq::set_strpasswd(const ::std::string& value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkAddUserReq.strPasswd)
}
#if LANG_CXX11
void LinkAddUserReq::set_strpasswd(::std::string&& value) {
  
  strpasswd_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkAddUserReq.strPasswd)
}
#endif
void LinkAddUserReq::set_strpasswd(const char* value) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkAddUserReq.strPasswd)
}
void LinkAddUserReq::set_strpasswd(const char* value, size_t size) {
  
  strpasswd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkAddUserReq.strPasswd)
}
::std::string* LinkAddUserReq::mutable_strpasswd() {
  
  // @@protoc_insertion_point(field_mutable:LinkAddUserReq.strPasswd)
  return strpasswd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkAddUserReq::release_strpasswd() {
  // @@protoc_insertion_point(field_release:LinkAddUserReq.strPasswd)
  
  return strpasswd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkAddUserReq::set_allocated_strpasswd(::std::string* strpasswd) {
  if (strpasswd != NULL) {
    
  } else {
    
  }
  strpasswd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strpasswd);
  // @@protoc_insertion_point(field_set_allocated:LinkAddUserReq.strPasswd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkAddUserResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkAddUserResp::LinkAddUserResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkAddUserResp)
}
LinkAddUserResp::LinkAddUserResp(const LinkAddUserResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkAddUserResp)
}

void LinkAddUserResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkAddUserResp::~LinkAddUserResp() {
  // @@protoc_insertion_point(destructor:LinkAddUserResp)
  SharedDtor();
}

void LinkAddUserResp::SharedDtor() {
}

void LinkAddUserResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkAddUserResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[35].descriptor;
}

const LinkAddUserResp& LinkAddUserResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkAddUserResp* LinkAddUserResp::New(::google::protobuf::Arena* arena) const {
  LinkAddUserResp* n = new LinkAddUserResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkAddUserResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkAddUserResp)
  bsuccess_ = false;
}

bool LinkAddUserResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkAddUserResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkAddUserResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkAddUserResp)
  return false;
#undef DO_
}

void LinkAddUserResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkAddUserResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkAddUserResp)
}

::google::protobuf::uint8* LinkAddUserResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkAddUserResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkAddUserResp)
  return target;
}

size_t LinkAddUserResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkAddUserResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkAddUserResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkAddUserResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkAddUserResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkAddUserResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkAddUserResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkAddUserResp)
    MergeFrom(*source);
  }
}

void LinkAddUserResp::MergeFrom(const LinkAddUserResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkAddUserResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkAddUserResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkAddUserResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkAddUserResp::CopyFrom(const LinkAddUserResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkAddUserResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkAddUserResp::IsInitialized() const {
  return true;
}

void LinkAddUserResp::Swap(LinkAddUserResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkAddUserResp::InternalSwap(LinkAddUserResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkAddUserResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[35];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkAddUserResp

// bool bSuccess = 1;
void LinkAddUserResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkAddUserResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkAddUserResp.bSuccess)
  return bsuccess_;
}
void LinkAddUserResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkAddUserResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkHasRecordItem::kNIdFieldNumber;
const int LinkHasRecordItem::kNStartFieldNumber;
const int LinkHasRecordItem::kNEndFieldNumber;
const int LinkHasRecordItem::kNTypeFieldNumber;
const int LinkHasRecordItem::kBHasFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkHasRecordItem::LinkHasRecordItem()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkHasRecordItem)
}
LinkHasRecordItem::LinkHasRecordItem(const LinkHasRecordItem& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&nid_, &from.nid_,
    reinterpret_cast<char*>(&bhas_) -
    reinterpret_cast<char*>(&nid_) + sizeof(bhas_));
  // @@protoc_insertion_point(copy_constructor:LinkHasRecordItem)
}

void LinkHasRecordItem::SharedCtor() {
  ::memset(&nid_, 0, reinterpret_cast<char*>(&bhas_) -
    reinterpret_cast<char*>(&nid_) + sizeof(bhas_));
  _cached_size_ = 0;
}

LinkHasRecordItem::~LinkHasRecordItem() {
  // @@protoc_insertion_point(destructor:LinkHasRecordItem)
  SharedDtor();
}

void LinkHasRecordItem::SharedDtor() {
}

void LinkHasRecordItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkHasRecordItem::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[36].descriptor;
}

const LinkHasRecordItem& LinkHasRecordItem::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkHasRecordItem* LinkHasRecordItem::New(::google::protobuf::Arena* arena) const {
  LinkHasRecordItem* n = new LinkHasRecordItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkHasRecordItem::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkHasRecordItem)
  ::memset(&nid_, 0, reinterpret_cast<char*>(&bhas_) -
    reinterpret_cast<char*>(&nid_) + sizeof(bhas_));
}

bool LinkHasRecordItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkHasRecordItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 nId = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nStart = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nstart_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nEnd = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nend_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nType = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ntype_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool bHas = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bhas_)));
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
  // @@protoc_insertion_point(parse_success:LinkHasRecordItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkHasRecordItem)
  return false;
#undef DO_
}

void LinkHasRecordItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkHasRecordItem)
  // int64 nId = 1;
  if (this->nid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->nid(), output);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nstart(), output);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nend(), output);
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->ntype(), output);
  }

  // bool bHas = 5;
  if (this->bhas() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->bhas(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkHasRecordItem)
}

::google::protobuf::uint8* LinkHasRecordItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkHasRecordItem)
  // int64 nId = 1;
  if (this->nid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->nid(), target);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nstart(), target);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nend(), target);
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->ntype(), target);
  }

  // bool bHas = 5;
  if (this->bhas() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->bhas(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkHasRecordItem)
  return target;
}

size_t LinkHasRecordItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkHasRecordItem)
  size_t total_size = 0;

  // int64 nId = 1;
  if (this->nid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nid());
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nstart());
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nend());
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ntype());
  }

  // bool bHas = 5;
  if (this->bhas() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkHasRecordItem::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkHasRecordItem)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkHasRecordItem* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkHasRecordItem>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkHasRecordItem)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkHasRecordItem)
    MergeFrom(*source);
  }
}

void LinkHasRecordItem::MergeFrom(const LinkHasRecordItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkHasRecordItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.nid() != 0) {
    set_nid(from.nid());
  }
  if (from.nstart() != 0) {
    set_nstart(from.nstart());
  }
  if (from.nend() != 0) {
    set_nend(from.nend());
  }
  if (from.ntype() != 0) {
    set_ntype(from.ntype());
  }
  if (from.bhas() != 0) {
    set_bhas(from.bhas());
  }
}

void LinkHasRecordItem::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkHasRecordItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkHasRecordItem::CopyFrom(const LinkHasRecordItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkHasRecordItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkHasRecordItem::IsInitialized() const {
  return true;
}

void LinkHasRecordItem::Swap(LinkHasRecordItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkHasRecordItem::InternalSwap(LinkHasRecordItem* other) {
  std::swap(nid_, other->nid_);
  std::swap(nstart_, other->nstart_);
  std::swap(nend_, other->nend_);
  std::swap(ntype_, other->ntype_);
  std::swap(bhas_, other->bhas_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkHasRecordItem::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[36];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkHasRecordItem

// int64 nId = 1;
void LinkHasRecordItem::clear_nid() {
  nid_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 LinkHasRecordItem::nid() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordItem.nId)
  return nid_;
}
void LinkHasRecordItem::set_nid(::google::protobuf::int64 value) {
  
  nid_ = value;
  // @@protoc_insertion_point(field_set:LinkHasRecordItem.nId)
}

// int32 nStart = 2;
void LinkHasRecordItem::clear_nstart() {
  nstart_ = 0;
}
::google::protobuf::int32 LinkHasRecordItem::nstart() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordItem.nStart)
  return nstart_;
}
void LinkHasRecordItem::set_nstart(::google::protobuf::int32 value) {
  
  nstart_ = value;
  // @@protoc_insertion_point(field_set:LinkHasRecordItem.nStart)
}

// int32 nEnd = 3;
void LinkHasRecordItem::clear_nend() {
  nend_ = 0;
}
::google::protobuf::int32 LinkHasRecordItem::nend() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordItem.nEnd)
  return nend_;
}
void LinkHasRecordItem::set_nend(::google::protobuf::int32 value) {
  
  nend_ = value;
  // @@protoc_insertion_point(field_set:LinkHasRecordItem.nEnd)
}

// int32 nType = 4;
void LinkHasRecordItem::clear_ntype() {
  ntype_ = 0;
}
::google::protobuf::int32 LinkHasRecordItem::ntype() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordItem.nType)
  return ntype_;
}
void LinkHasRecordItem::set_ntype(::google::protobuf::int32 value) {
  
  ntype_ = value;
  // @@protoc_insertion_point(field_set:LinkHasRecordItem.nType)
}

// bool bHas = 5;
void LinkHasRecordItem::clear_bhas() {
  bhas_ = false;
}
bool LinkHasRecordItem::bhas() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordItem.bHas)
  return bhas_;
}
void LinkHasRecordItem::set_bhas(bool value) {
  
  bhas_ = value;
  // @@protoc_insertion_point(field_set:LinkHasRecordItem.bHas)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkHasRecordList::kCHasRecFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkHasRecordList::LinkHasRecordList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkHasRecordList)
}
LinkHasRecordList::LinkHasRecordList(const LinkHasRecordList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      chasrec_(from.chasrec_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:LinkHasRecordList)
}

void LinkHasRecordList::SharedCtor() {
  _cached_size_ = 0;
}

LinkHasRecordList::~LinkHasRecordList() {
  // @@protoc_insertion_point(destructor:LinkHasRecordList)
  SharedDtor();
}

void LinkHasRecordList::SharedDtor() {
}

void LinkHasRecordList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkHasRecordList::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[37].descriptor;
}

const LinkHasRecordList& LinkHasRecordList::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkHasRecordList* LinkHasRecordList::New(::google::protobuf::Arena* arena) const {
  LinkHasRecordList* n = new LinkHasRecordList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkHasRecordList::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkHasRecordList)
  chasrec_.Clear();
}

bool LinkHasRecordList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkHasRecordList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .LinkHasRecordItem cHasRec = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_chasrec()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:LinkHasRecordList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkHasRecordList)
  return false;
#undef DO_
}

void LinkHasRecordList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkHasRecordList)
  // repeated .LinkHasRecordItem cHasRec = 1;
  for (unsigned int i = 0, n = this->chasrec_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->chasrec(i), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkHasRecordList)
}

::google::protobuf::uint8* LinkHasRecordList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkHasRecordList)
  // repeated .LinkHasRecordItem cHasRec = 1;
  for (unsigned int i = 0, n = this->chasrec_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->chasrec(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkHasRecordList)
  return target;
}

size_t LinkHasRecordList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkHasRecordList)
  size_t total_size = 0;

  // repeated .LinkHasRecordItem cHasRec = 1;
  {
    unsigned int count = this->chasrec_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->chasrec(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkHasRecordList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkHasRecordList)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkHasRecordList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkHasRecordList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkHasRecordList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkHasRecordList)
    MergeFrom(*source);
  }
}

void LinkHasRecordList::MergeFrom(const LinkHasRecordList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkHasRecordList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  chasrec_.MergeFrom(from.chasrec_);
}

void LinkHasRecordList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkHasRecordList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkHasRecordList::CopyFrom(const LinkHasRecordList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkHasRecordList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkHasRecordList::IsInitialized() const {
  return true;
}

void LinkHasRecordList::Swap(LinkHasRecordList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkHasRecordList::InternalSwap(LinkHasRecordList* other) {
  chasrec_.UnsafeArenaSwap(&other->chasrec_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkHasRecordList::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[37];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkHasRecordList

// repeated .LinkHasRecordItem cHasRec = 1;
int LinkHasRecordList::chasrec_size() const {
  return chasrec_.size();
}
void LinkHasRecordList::clear_chasrec() {
  chasrec_.Clear();
}
const ::LinkHasRecordItem& LinkHasRecordList::chasrec(int index) const {
  // @@protoc_insertion_point(field_get:LinkHasRecordList.cHasRec)
  return chasrec_.Get(index);
}
::LinkHasRecordItem* LinkHasRecordList::mutable_chasrec(int index) {
  // @@protoc_insertion_point(field_mutable:LinkHasRecordList.cHasRec)
  return chasrec_.Mutable(index);
}
::LinkHasRecordItem* LinkHasRecordList::add_chasrec() {
  // @@protoc_insertion_point(field_add:LinkHasRecordList.cHasRec)
  return chasrec_.Add();
}
::google::protobuf::RepeatedPtrField< ::LinkHasRecordItem >*
LinkHasRecordList::mutable_chasrec() {
  // @@protoc_insertion_point(field_mutable_list:LinkHasRecordList.cHasRec)
  return &chasrec_;
}
const ::google::protobuf::RepeatedPtrField< ::LinkHasRecordItem >&
LinkHasRecordList::chasrec() const {
  // @@protoc_insertion_point(field_list:LinkHasRecordList.cHasRec)
  return chasrec_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkHasRecordReq::kStrIdFieldNumber;
const int LinkHasRecordReq::kCListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkHasRecordReq::LinkHasRecordReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkHasRecordReq)
}
LinkHasRecordReq::LinkHasRecordReq(const LinkHasRecordReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.has_clist()) {
    clist_ = new ::LinkHasRecordList(*from.clist_);
  } else {
    clist_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkHasRecordReq)
}

void LinkHasRecordReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clist_ = NULL;
  _cached_size_ = 0;
}

LinkHasRecordReq::~LinkHasRecordReq() {
  // @@protoc_insertion_point(destructor:LinkHasRecordReq)
  SharedDtor();
}

void LinkHasRecordReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete clist_;
  }
}

void LinkHasRecordReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkHasRecordReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[38].descriptor;
}

const LinkHasRecordReq& LinkHasRecordReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkHasRecordReq* LinkHasRecordReq::New(::google::protobuf::Arena* arena) const {
  LinkHasRecordReq* n = new LinkHasRecordReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkHasRecordReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkHasRecordReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) {
    delete clist_;
  }
  clist_ = NULL;
}

bool LinkHasRecordReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkHasRecordReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkHasRecordReq.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkHasRecordList cList = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clist()));
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
  // @@protoc_insertion_point(parse_success:LinkHasRecordReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkHasRecordReq)
  return false;
#undef DO_
}

void LinkHasRecordReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkHasRecordReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkHasRecordReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // .LinkHasRecordList cList = 2;
  if (this->has_clist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->clist_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkHasRecordReq)
}

::google::protobuf::uint8* LinkHasRecordReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkHasRecordReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkHasRecordReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // .LinkHasRecordList cList = 2;
  if (this->has_clist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->clist_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkHasRecordReq)
  return target;
}

size_t LinkHasRecordReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkHasRecordReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // .LinkHasRecordList cList = 2;
  if (this->has_clist()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clist_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkHasRecordReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkHasRecordReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkHasRecordReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkHasRecordReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkHasRecordReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkHasRecordReq)
    MergeFrom(*source);
  }
}

void LinkHasRecordReq::MergeFrom(const LinkHasRecordReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkHasRecordReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.has_clist()) {
    mutable_clist()->::LinkHasRecordList::MergeFrom(from.clist());
  }
}

void LinkHasRecordReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkHasRecordReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkHasRecordReq::CopyFrom(const LinkHasRecordReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkHasRecordReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkHasRecordReq::IsInitialized() const {
  return true;
}

void LinkHasRecordReq::Swap(LinkHasRecordReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkHasRecordReq::InternalSwap(LinkHasRecordReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(clist_, other->clist_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkHasRecordReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[38];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkHasRecordReq

// string strId = 1;
void LinkHasRecordReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkHasRecordReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordReq.strId)
  return strid_.GetNoArena();
}
void LinkHasRecordReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkHasRecordReq.strId)
}
#if LANG_CXX11
void LinkHasRecordReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkHasRecordReq.strId)
}
#endif
void LinkHasRecordReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkHasRecordReq.strId)
}
void LinkHasRecordReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkHasRecordReq.strId)
}
::std::string* LinkHasRecordReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkHasRecordReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkHasRecordReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkHasRecordReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkHasRecordReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkHasRecordReq.strId)
}

// .LinkHasRecordList cList = 2;
bool LinkHasRecordReq::has_clist() const {
  return this != internal_default_instance() && clist_ != NULL;
}
void LinkHasRecordReq::clear_clist() {
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) delete clist_;
  clist_ = NULL;
}
const ::LinkHasRecordList& LinkHasRecordReq::clist() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordReq.cList)
  return clist_ != NULL ? *clist_
                         : *::LinkHasRecordList::internal_default_instance();
}
::LinkHasRecordList* LinkHasRecordReq::mutable_clist() {
  
  if (clist_ == NULL) {
    clist_ = new ::LinkHasRecordList;
  }
  // @@protoc_insertion_point(field_mutable:LinkHasRecordReq.cList)
  return clist_;
}
::LinkHasRecordList* LinkHasRecordReq::release_clist() {
  // @@protoc_insertion_point(field_release:LinkHasRecordReq.cList)
  
  ::LinkHasRecordList* temp = clist_;
  clist_ = NULL;
  return temp;
}
void LinkHasRecordReq::set_allocated_clist(::LinkHasRecordList* clist) {
  delete clist_;
  clist_ = clist;
  if (clist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkHasRecordReq.cList)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkHasRecordResp::kCListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkHasRecordResp::LinkHasRecordResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkHasRecordResp)
}
LinkHasRecordResp::LinkHasRecordResp(const LinkHasRecordResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clist()) {
    clist_ = new ::LinkHasRecordList(*from.clist_);
  } else {
    clist_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkHasRecordResp)
}

void LinkHasRecordResp::SharedCtor() {
  clist_ = NULL;
  _cached_size_ = 0;
}

LinkHasRecordResp::~LinkHasRecordResp() {
  // @@protoc_insertion_point(destructor:LinkHasRecordResp)
  SharedDtor();
}

void LinkHasRecordResp::SharedDtor() {
  if (this != internal_default_instance()) {
    delete clist_;
  }
}

void LinkHasRecordResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkHasRecordResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[39].descriptor;
}

const LinkHasRecordResp& LinkHasRecordResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkHasRecordResp* LinkHasRecordResp::New(::google::protobuf::Arena* arena) const {
  LinkHasRecordResp* n = new LinkHasRecordResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkHasRecordResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkHasRecordResp)
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) {
    delete clist_;
  }
  clist_ = NULL;
}

bool LinkHasRecordResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkHasRecordResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .LinkHasRecordList cList = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clist()));
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
  // @@protoc_insertion_point(parse_success:LinkHasRecordResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkHasRecordResp)
  return false;
#undef DO_
}

void LinkHasRecordResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkHasRecordResp)
  // .LinkHasRecordList cList = 1;
  if (this->has_clist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->clist_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkHasRecordResp)
}

::google::protobuf::uint8* LinkHasRecordResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkHasRecordResp)
  // .LinkHasRecordList cList = 1;
  if (this->has_clist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->clist_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkHasRecordResp)
  return target;
}

size_t LinkHasRecordResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkHasRecordResp)
  size_t total_size = 0;

  // .LinkHasRecordList cList = 1;
  if (this->has_clist()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clist_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkHasRecordResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkHasRecordResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkHasRecordResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkHasRecordResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkHasRecordResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkHasRecordResp)
    MergeFrom(*source);
  }
}

void LinkHasRecordResp::MergeFrom(const LinkHasRecordResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkHasRecordResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_clist()) {
    mutable_clist()->::LinkHasRecordList::MergeFrom(from.clist());
  }
}

void LinkHasRecordResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkHasRecordResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkHasRecordResp::CopyFrom(const LinkHasRecordResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkHasRecordResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkHasRecordResp::IsInitialized() const {
  return true;
}

void LinkHasRecordResp::Swap(LinkHasRecordResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkHasRecordResp::InternalSwap(LinkHasRecordResp* other) {
  std::swap(clist_, other->clist_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkHasRecordResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[39];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkHasRecordResp

// .LinkHasRecordList cList = 1;
bool LinkHasRecordResp::has_clist() const {
  return this != internal_default_instance() && clist_ != NULL;
}
void LinkHasRecordResp::clear_clist() {
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) delete clist_;
  clist_ = NULL;
}
const ::LinkHasRecordList& LinkHasRecordResp::clist() const {
  // @@protoc_insertion_point(field_get:LinkHasRecordResp.cList)
  return clist_ != NULL ? *clist_
                         : *::LinkHasRecordList::internal_default_instance();
}
::LinkHasRecordList* LinkHasRecordResp::mutable_clist() {
  
  if (clist_ == NULL) {
    clist_ = new ::LinkHasRecordList;
  }
  // @@protoc_insertion_point(field_mutable:LinkHasRecordResp.cList)
  return clist_;
}
::LinkHasRecordList* LinkHasRecordResp::release_clist() {
  // @@protoc_insertion_point(field_release:LinkHasRecordResp.cList)
  
  ::LinkHasRecordList* temp = clist_;
  clist_ = NULL;
  return temp;
}
void LinkHasRecordResp::set_allocated_clist(::LinkHasRecordList* clist) {
  delete clist_;
  clist_ = clist;
  if (clist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkHasRecordResp.cList)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkRecordItem::kNIdFieldNumber;
const int LinkRecordItem::kNStartFieldNumber;
const int LinkRecordItem::kNEndFieldNumber;
const int LinkRecordItem::kNTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkRecordItem::LinkRecordItem()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkRecordItem)
}
LinkRecordItem::LinkRecordItem(const LinkRecordItem& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&nid_, &from.nid_,
    reinterpret_cast<char*>(&ntype_) -
    reinterpret_cast<char*>(&nid_) + sizeof(ntype_));
  // @@protoc_insertion_point(copy_constructor:LinkRecordItem)
}

void LinkRecordItem::SharedCtor() {
  ::memset(&nid_, 0, reinterpret_cast<char*>(&ntype_) -
    reinterpret_cast<char*>(&nid_) + sizeof(ntype_));
  _cached_size_ = 0;
}

LinkRecordItem::~LinkRecordItem() {
  // @@protoc_insertion_point(destructor:LinkRecordItem)
  SharedDtor();
}

void LinkRecordItem::SharedDtor() {
}

void LinkRecordItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkRecordItem::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[40].descriptor;
}

const LinkRecordItem& LinkRecordItem::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkRecordItem* LinkRecordItem::New(::google::protobuf::Arena* arena) const {
  LinkRecordItem* n = new LinkRecordItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkRecordItem::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkRecordItem)
  ::memset(&nid_, 0, reinterpret_cast<char*>(&ntype_) -
    reinterpret_cast<char*>(&nid_) + sizeof(ntype_));
}

bool LinkRecordItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkRecordItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 nId = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &nid_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nStart = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nstart_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nEnd = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nend_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nType = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ntype_)));
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
  // @@protoc_insertion_point(parse_success:LinkRecordItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkRecordItem)
  return false;
#undef DO_
}

void LinkRecordItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkRecordItem)
  // int64 nId = 1;
  if (this->nid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->nid(), output);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nstart(), output);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nend(), output);
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->ntype(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkRecordItem)
}

::google::protobuf::uint8* LinkRecordItem::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkRecordItem)
  // int64 nId = 1;
  if (this->nid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->nid(), target);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nstart(), target);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nend(), target);
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->ntype(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkRecordItem)
  return target;
}

size_t LinkRecordItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkRecordItem)
  size_t total_size = 0;

  // int64 nId = 1;
  if (this->nid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->nid());
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nstart());
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nend());
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ntype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkRecordItem::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkRecordItem)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkRecordItem* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkRecordItem>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkRecordItem)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkRecordItem)
    MergeFrom(*source);
  }
}

void LinkRecordItem::MergeFrom(const LinkRecordItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkRecordItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.nid() != 0) {
    set_nid(from.nid());
  }
  if (from.nstart() != 0) {
    set_nstart(from.nstart());
  }
  if (from.nend() != 0) {
    set_nend(from.nend());
  }
  if (from.ntype() != 0) {
    set_ntype(from.ntype());
  }
}

void LinkRecordItem::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkRecordItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkRecordItem::CopyFrom(const LinkRecordItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkRecordItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkRecordItem::IsInitialized() const {
  return true;
}

void LinkRecordItem::Swap(LinkRecordItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkRecordItem::InternalSwap(LinkRecordItem* other) {
  std::swap(nid_, other->nid_);
  std::swap(nstart_, other->nstart_);
  std::swap(nend_, other->nend_);
  std::swap(ntype_, other->ntype_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkRecordItem::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[40];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkRecordItem

// int64 nId = 1;
void LinkRecordItem::clear_nid() {
  nid_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 LinkRecordItem::nid() const {
  // @@protoc_insertion_point(field_get:LinkRecordItem.nId)
  return nid_;
}
void LinkRecordItem::set_nid(::google::protobuf::int64 value) {
  
  nid_ = value;
  // @@protoc_insertion_point(field_set:LinkRecordItem.nId)
}

// int32 nStart = 2;
void LinkRecordItem::clear_nstart() {
  nstart_ = 0;
}
::google::protobuf::int32 LinkRecordItem::nstart() const {
  // @@protoc_insertion_point(field_get:LinkRecordItem.nStart)
  return nstart_;
}
void LinkRecordItem::set_nstart(::google::protobuf::int32 value) {
  
  nstart_ = value;
  // @@protoc_insertion_point(field_set:LinkRecordItem.nStart)
}

// int32 nEnd = 3;
void LinkRecordItem::clear_nend() {
  nend_ = 0;
}
::google::protobuf::int32 LinkRecordItem::nend() const {
  // @@protoc_insertion_point(field_get:LinkRecordItem.nEnd)
  return nend_;
}
void LinkRecordItem::set_nend(::google::protobuf::int32 value) {
  
  nend_ = value;
  // @@protoc_insertion_point(field_set:LinkRecordItem.nEnd)
}

// int32 nType = 4;
void LinkRecordItem::clear_ntype() {
  ntype_ = 0;
}
::google::protobuf::int32 LinkRecordItem::ntype() const {
  // @@protoc_insertion_point(field_get:LinkRecordItem.nType)
  return ntype_;
}
void LinkRecordItem::set_ntype(::google::protobuf::int32 value) {
  
  ntype_ = value;
  // @@protoc_insertion_point(field_set:LinkRecordItem.nType)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkRecordList::kCListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkRecordList::LinkRecordList()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkRecordList)
}
LinkRecordList::LinkRecordList(const LinkRecordList& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      clist_(from.clist_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:LinkRecordList)
}

void LinkRecordList::SharedCtor() {
  _cached_size_ = 0;
}

LinkRecordList::~LinkRecordList() {
  // @@protoc_insertion_point(destructor:LinkRecordList)
  SharedDtor();
}

void LinkRecordList::SharedDtor() {
}

void LinkRecordList::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkRecordList::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[41].descriptor;
}

const LinkRecordList& LinkRecordList::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkRecordList* LinkRecordList::New(::google::protobuf::Arena* arena) const {
  LinkRecordList* n = new LinkRecordList;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkRecordList::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkRecordList)
  clist_.Clear();
}

bool LinkRecordList::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkRecordList)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .LinkRecordItem cList = 1;
      case 1: {
        if (tag == 10u) {
          DO_(input->IncrementRecursionDepth());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_clist()));
        } else {
          goto handle_unusual;
        }
        input->UnsafeDecrementRecursionDepth();
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
  // @@protoc_insertion_point(parse_success:LinkRecordList)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkRecordList)
  return false;
#undef DO_
}

void LinkRecordList::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkRecordList)
  // repeated .LinkRecordItem cList = 1;
  for (unsigned int i = 0, n = this->clist_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->clist(i), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkRecordList)
}

::google::protobuf::uint8* LinkRecordList::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkRecordList)
  // repeated .LinkRecordItem cList = 1;
  for (unsigned int i = 0, n = this->clist_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, this->clist(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkRecordList)
  return target;
}

size_t LinkRecordList::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkRecordList)
  size_t total_size = 0;

  // repeated .LinkRecordItem cList = 1;
  {
    unsigned int count = this->clist_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->clist(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkRecordList::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkRecordList)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkRecordList* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkRecordList>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkRecordList)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkRecordList)
    MergeFrom(*source);
  }
}

void LinkRecordList::MergeFrom(const LinkRecordList& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkRecordList)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  clist_.MergeFrom(from.clist_);
}

void LinkRecordList::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkRecordList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkRecordList::CopyFrom(const LinkRecordList& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkRecordList)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkRecordList::IsInitialized() const {
  return true;
}

void LinkRecordList::Swap(LinkRecordList* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkRecordList::InternalSwap(LinkRecordList* other) {
  clist_.UnsafeArenaSwap(&other->clist_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkRecordList::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[41];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkRecordList

// repeated .LinkRecordItem cList = 1;
int LinkRecordList::clist_size() const {
  return clist_.size();
}
void LinkRecordList::clear_clist() {
  clist_.Clear();
}
const ::LinkRecordItem& LinkRecordList::clist(int index) const {
  // @@protoc_insertion_point(field_get:LinkRecordList.cList)
  return clist_.Get(index);
}
::LinkRecordItem* LinkRecordList::mutable_clist(int index) {
  // @@protoc_insertion_point(field_mutable:LinkRecordList.cList)
  return clist_.Mutable(index);
}
::LinkRecordItem* LinkRecordList::add_clist() {
  // @@protoc_insertion_point(field_add:LinkRecordList.cList)
  return clist_.Add();
}
::google::protobuf::RepeatedPtrField< ::LinkRecordItem >*
LinkRecordList::mutable_clist() {
  // @@protoc_insertion_point(field_mutable_list:LinkRecordList.cList)
  return &clist_;
}
const ::google::protobuf::RepeatedPtrField< ::LinkRecordItem >&
LinkRecordList::clist() const {
  // @@protoc_insertion_point(field_list:LinkRecordList.cList)
  return clist_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkSearchRecordReq::kStrIdFieldNumber;
const int LinkSearchRecordReq::kNStartFieldNumber;
const int LinkSearchRecordReq::kNEndFieldNumber;
const int LinkSearchRecordReq::kNTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkSearchRecordReq::LinkSearchRecordReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkSearchRecordReq)
}
LinkSearchRecordReq::LinkSearchRecordReq(const LinkSearchRecordReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  ::memcpy(&nstart_, &from.nstart_,
    reinterpret_cast<char*>(&ntype_) -
    reinterpret_cast<char*>(&nstart_) + sizeof(ntype_));
  // @@protoc_insertion_point(copy_constructor:LinkSearchRecordReq)
}

void LinkSearchRecordReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nstart_, 0, reinterpret_cast<char*>(&ntype_) -
    reinterpret_cast<char*>(&nstart_) + sizeof(ntype_));
  _cached_size_ = 0;
}

LinkSearchRecordReq::~LinkSearchRecordReq() {
  // @@protoc_insertion_point(destructor:LinkSearchRecordReq)
  SharedDtor();
}

void LinkSearchRecordReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkSearchRecordReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkSearchRecordReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[42].descriptor;
}

const LinkSearchRecordReq& LinkSearchRecordReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkSearchRecordReq* LinkSearchRecordReq::New(::google::protobuf::Arena* arena) const {
  LinkSearchRecordReq* n = new LinkSearchRecordReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkSearchRecordReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkSearchRecordReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nstart_, 0, reinterpret_cast<char*>(&ntype_) -
    reinterpret_cast<char*>(&nstart_) + sizeof(ntype_));
}

bool LinkSearchRecordReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkSearchRecordReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkSearchRecordReq.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nStart = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nstart_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nEnd = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nend_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nType = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ntype_)));
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
  // @@protoc_insertion_point(parse_success:LinkSearchRecordReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkSearchRecordReq)
  return false;
#undef DO_
}

void LinkSearchRecordReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkSearchRecordReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkSearchRecordReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nstart(), output);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nend(), output);
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->ntype(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkSearchRecordReq)
}

::google::protobuf::uint8* LinkSearchRecordReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkSearchRecordReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkSearchRecordReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nstart(), target);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nend(), target);
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->ntype(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkSearchRecordReq)
  return target;
}

size_t LinkSearchRecordReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkSearchRecordReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nstart());
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nend());
  }

  // int32 nType = 4;
  if (this->ntype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->ntype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkSearchRecordReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkSearchRecordReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkSearchRecordReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkSearchRecordReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkSearchRecordReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkSearchRecordReq)
    MergeFrom(*source);
  }
}

void LinkSearchRecordReq::MergeFrom(const LinkSearchRecordReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkSearchRecordReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nstart() != 0) {
    set_nstart(from.nstart());
  }
  if (from.nend() != 0) {
    set_nend(from.nend());
  }
  if (from.ntype() != 0) {
    set_ntype(from.ntype());
  }
}

void LinkSearchRecordReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkSearchRecordReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkSearchRecordReq::CopyFrom(const LinkSearchRecordReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkSearchRecordReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkSearchRecordReq::IsInitialized() const {
  return true;
}

void LinkSearchRecordReq::Swap(LinkSearchRecordReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkSearchRecordReq::InternalSwap(LinkSearchRecordReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(nstart_, other->nstart_);
  std::swap(nend_, other->nend_);
  std::swap(ntype_, other->ntype_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkSearchRecordReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[42];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkSearchRecordReq

// string strId = 1;
void LinkSearchRecordReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkSearchRecordReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkSearchRecordReq.strId)
  return strid_.GetNoArena();
}
void LinkSearchRecordReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkSearchRecordReq.strId)
}
#if LANG_CXX11
void LinkSearchRecordReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkSearchRecordReq.strId)
}
#endif
void LinkSearchRecordReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkSearchRecordReq.strId)
}
void LinkSearchRecordReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkSearchRecordReq.strId)
}
::std::string* LinkSearchRecordReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkSearchRecordReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkSearchRecordReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkSearchRecordReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkSearchRecordReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkSearchRecordReq.strId)
}

// int32 nStart = 2;
void LinkSearchRecordReq::clear_nstart() {
  nstart_ = 0;
}
::google::protobuf::int32 LinkSearchRecordReq::nstart() const {
  // @@protoc_insertion_point(field_get:LinkSearchRecordReq.nStart)
  return nstart_;
}
void LinkSearchRecordReq::set_nstart(::google::protobuf::int32 value) {
  
  nstart_ = value;
  // @@protoc_insertion_point(field_set:LinkSearchRecordReq.nStart)
}

// int32 nEnd = 3;
void LinkSearchRecordReq::clear_nend() {
  nend_ = 0;
}
::google::protobuf::int32 LinkSearchRecordReq::nend() const {
  // @@protoc_insertion_point(field_get:LinkSearchRecordReq.nEnd)
  return nend_;
}
void LinkSearchRecordReq::set_nend(::google::protobuf::int32 value) {
  
  nend_ = value;
  // @@protoc_insertion_point(field_set:LinkSearchRecordReq.nEnd)
}

// int32 nType = 4;
void LinkSearchRecordReq::clear_ntype() {
  ntype_ = 0;
}
::google::protobuf::int32 LinkSearchRecordReq::ntype() const {
  // @@protoc_insertion_point(field_get:LinkSearchRecordReq.nType)
  return ntype_;
}
void LinkSearchRecordReq::set_ntype(::google::protobuf::int32 value) {
  
  ntype_ = value;
  // @@protoc_insertion_point(field_set:LinkSearchRecordReq.nType)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkSearchRecordResp::kStrIdFieldNumber;
const int LinkSearchRecordResp::kCListFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkSearchRecordResp::LinkSearchRecordResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkSearchRecordResp)
}
LinkSearchRecordResp::LinkSearchRecordResp(const LinkSearchRecordResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.has_clist()) {
    clist_ = new ::LinkRecordList(*from.clist_);
  } else {
    clist_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkSearchRecordResp)
}

void LinkSearchRecordResp::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clist_ = NULL;
  _cached_size_ = 0;
}

LinkSearchRecordResp::~LinkSearchRecordResp() {
  // @@protoc_insertion_point(destructor:LinkSearchRecordResp)
  SharedDtor();
}

void LinkSearchRecordResp::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) {
    delete clist_;
  }
}

void LinkSearchRecordResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkSearchRecordResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[43].descriptor;
}

const LinkSearchRecordResp& LinkSearchRecordResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkSearchRecordResp* LinkSearchRecordResp::New(::google::protobuf::Arena* arena) const {
  LinkSearchRecordResp* n = new LinkSearchRecordResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkSearchRecordResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkSearchRecordResp)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) {
    delete clist_;
  }
  clist_ = NULL;
}

bool LinkSearchRecordResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkSearchRecordResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkSearchRecordResp.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .LinkRecordList cList = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_clist()));
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
  // @@protoc_insertion_point(parse_success:LinkSearchRecordResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkSearchRecordResp)
  return false;
#undef DO_
}

void LinkSearchRecordResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkSearchRecordResp)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkSearchRecordResp.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // .LinkRecordList cList = 2;
  if (this->has_clist()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->clist_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkSearchRecordResp)
}

::google::protobuf::uint8* LinkSearchRecordResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkSearchRecordResp)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkSearchRecordResp.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // .LinkRecordList cList = 2;
  if (this->has_clist()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        2, *this->clist_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkSearchRecordResp)
  return target;
}

size_t LinkSearchRecordResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkSearchRecordResp)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // .LinkRecordList cList = 2;
  if (this->has_clist()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->clist_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkSearchRecordResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkSearchRecordResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkSearchRecordResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkSearchRecordResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkSearchRecordResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkSearchRecordResp)
    MergeFrom(*source);
  }
}

void LinkSearchRecordResp::MergeFrom(const LinkSearchRecordResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkSearchRecordResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.has_clist()) {
    mutable_clist()->::LinkRecordList::MergeFrom(from.clist());
  }
}

void LinkSearchRecordResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkSearchRecordResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkSearchRecordResp::CopyFrom(const LinkSearchRecordResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkSearchRecordResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkSearchRecordResp::IsInitialized() const {
  return true;
}

void LinkSearchRecordResp::Swap(LinkSearchRecordResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkSearchRecordResp::InternalSwap(LinkSearchRecordResp* other) {
  strid_.Swap(&other->strid_);
  std::swap(clist_, other->clist_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkSearchRecordResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[43];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkSearchRecordResp

// string strId = 1;
void LinkSearchRecordResp::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkSearchRecordResp::strid() const {
  // @@protoc_insertion_point(field_get:LinkSearchRecordResp.strId)
  return strid_.GetNoArena();
}
void LinkSearchRecordResp::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkSearchRecordResp.strId)
}
#if LANG_CXX11
void LinkSearchRecordResp::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkSearchRecordResp.strId)
}
#endif
void LinkSearchRecordResp::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkSearchRecordResp.strId)
}
void LinkSearchRecordResp::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkSearchRecordResp.strId)
}
::std::string* LinkSearchRecordResp::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkSearchRecordResp.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkSearchRecordResp::release_strid() {
  // @@protoc_insertion_point(field_release:LinkSearchRecordResp.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkSearchRecordResp::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkSearchRecordResp.strId)
}

// .LinkRecordList cList = 2;
bool LinkSearchRecordResp::has_clist() const {
  return this != internal_default_instance() && clist_ != NULL;
}
void LinkSearchRecordResp::clear_clist() {
  if (GetArenaNoVirtual() == NULL && clist_ != NULL) delete clist_;
  clist_ = NULL;
}
const ::LinkRecordList& LinkSearchRecordResp::clist() const {
  // @@protoc_insertion_point(field_get:LinkSearchRecordResp.cList)
  return clist_ != NULL ? *clist_
                         : *::LinkRecordList::internal_default_instance();
}
::LinkRecordList* LinkSearchRecordResp::mutable_clist() {
  
  if (clist_ == NULL) {
    clist_ = new ::LinkRecordList;
  }
  // @@protoc_insertion_point(field_mutable:LinkSearchRecordResp.cList)
  return clist_;
}
::LinkRecordList* LinkSearchRecordResp::release_clist() {
  // @@protoc_insertion_point(field_release:LinkSearchRecordResp.cList)
  
  ::LinkRecordList* temp = clist_;
  clist_ = NULL;
  return temp;
}
void LinkSearchRecordResp::set_allocated_clist(::LinkRecordList* clist) {
  delete clist_;
  clist_ = clist;
  if (clist) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkSearchRecordResp.cList)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkStartLiveCmd::kStrIdFieldNumber;
const int LinkStartLiveCmd::kNStreamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkStartLiveCmd::LinkStartLiveCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkStartLiveCmd)
}
LinkStartLiveCmd::LinkStartLiveCmd(const LinkStartLiveCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  nstream_ = from.nstream_;
  // @@protoc_insertion_point(copy_constructor:LinkStartLiveCmd)
}

void LinkStartLiveCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nstream_ = 0;
  _cached_size_ = 0;
}

LinkStartLiveCmd::~LinkStartLiveCmd() {
  // @@protoc_insertion_point(destructor:LinkStartLiveCmd)
  SharedDtor();
}

void LinkStartLiveCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkStartLiveCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkStartLiveCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[44].descriptor;
}

const LinkStartLiveCmd& LinkStartLiveCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkStartLiveCmd* LinkStartLiveCmd::New(::google::protobuf::Arena* arena) const {
  LinkStartLiveCmd* n = new LinkStartLiveCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkStartLiveCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkStartLiveCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nstream_ = 0;
}

bool LinkStartLiveCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkStartLiveCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkStartLiveCmd.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nStream = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nstream_)));
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
  // @@protoc_insertion_point(parse_success:LinkStartLiveCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkStartLiveCmd)
  return false;
#undef DO_
}

void LinkStartLiveCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkStartLiveCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkStartLiveCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nStream = 2;
  if (this->nstream() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nstream(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkStartLiveCmd)
}

::google::protobuf::uint8* LinkStartLiveCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkStartLiveCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkStartLiveCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nStream = 2;
  if (this->nstream() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nstream(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkStartLiveCmd)
  return target;
}

size_t LinkStartLiveCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkStartLiveCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int32 nStream = 2;
  if (this->nstream() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nstream());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkStartLiveCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkStartLiveCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkStartLiveCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkStartLiveCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkStartLiveCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkStartLiveCmd)
    MergeFrom(*source);
  }
}

void LinkStartLiveCmd::MergeFrom(const LinkStartLiveCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkStartLiveCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nstream() != 0) {
    set_nstream(from.nstream());
  }
}

void LinkStartLiveCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkStartLiveCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkStartLiveCmd::CopyFrom(const LinkStartLiveCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkStartLiveCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkStartLiveCmd::IsInitialized() const {
  return true;
}

void LinkStartLiveCmd::Swap(LinkStartLiveCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkStartLiveCmd::InternalSwap(LinkStartLiveCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(nstream_, other->nstream_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkStartLiveCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[44];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkStartLiveCmd

// string strId = 1;
void LinkStartLiveCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkStartLiveCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkStartLiveCmd.strId)
  return strid_.GetNoArena();
}
void LinkStartLiveCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkStartLiveCmd.strId)
}
#if LANG_CXX11
void LinkStartLiveCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkStartLiveCmd.strId)
}
#endif
void LinkStartLiveCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkStartLiveCmd.strId)
}
void LinkStartLiveCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkStartLiveCmd.strId)
}
::std::string* LinkStartLiveCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkStartLiveCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkStartLiveCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkStartLiveCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkStartLiveCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkStartLiveCmd.strId)
}

// int32 nStream = 2;
void LinkStartLiveCmd::clear_nstream() {
  nstream_ = 0;
}
::google::protobuf::int32 LinkStartLiveCmd::nstream() const {
  // @@protoc_insertion_point(field_get:LinkStartLiveCmd.nStream)
  return nstream_;
}
void LinkStartLiveCmd::set_nstream(::google::protobuf::int32 value) {
  
  nstream_ = value;
  // @@protoc_insertion_point(field_set:LinkStartLiveCmd.nStream)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkStopLiveCmd::kStrIdFieldNumber;
const int LinkStopLiveCmd::kNStreamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkStopLiveCmd::LinkStopLiveCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkStopLiveCmd)
}
LinkStopLiveCmd::LinkStopLiveCmd(const LinkStopLiveCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  nstream_ = from.nstream_;
  // @@protoc_insertion_point(copy_constructor:LinkStopLiveCmd)
}

void LinkStopLiveCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nstream_ = 0;
  _cached_size_ = 0;
}

LinkStopLiveCmd::~LinkStopLiveCmd() {
  // @@protoc_insertion_point(destructor:LinkStopLiveCmd)
  SharedDtor();
}

void LinkStopLiveCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkStopLiveCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkStopLiveCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[45].descriptor;
}

const LinkStopLiveCmd& LinkStopLiveCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkStopLiveCmd* LinkStopLiveCmd::New(::google::protobuf::Arena* arena) const {
  LinkStopLiveCmd* n = new LinkStopLiveCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkStopLiveCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkStopLiveCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nstream_ = 0;
}

bool LinkStopLiveCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkStopLiveCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkStopLiveCmd.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nStream = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nstream_)));
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
  // @@protoc_insertion_point(parse_success:LinkStopLiveCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkStopLiveCmd)
  return false;
#undef DO_
}

void LinkStopLiveCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkStopLiveCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkStopLiveCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nStream = 2;
  if (this->nstream() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nstream(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkStopLiveCmd)
}

::google::protobuf::uint8* LinkStopLiveCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkStopLiveCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkStopLiveCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nStream = 2;
  if (this->nstream() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nstream(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkStopLiveCmd)
  return target;
}

size_t LinkStopLiveCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkStopLiveCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int32 nStream = 2;
  if (this->nstream() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nstream());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkStopLiveCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkStopLiveCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkStopLiveCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkStopLiveCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkStopLiveCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkStopLiveCmd)
    MergeFrom(*source);
  }
}

void LinkStopLiveCmd::MergeFrom(const LinkStopLiveCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkStopLiveCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nstream() != 0) {
    set_nstream(from.nstream());
  }
}

void LinkStopLiveCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkStopLiveCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkStopLiveCmd::CopyFrom(const LinkStopLiveCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkStopLiveCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkStopLiveCmd::IsInitialized() const {
  return true;
}

void LinkStopLiveCmd::Swap(LinkStopLiveCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkStopLiveCmd::InternalSwap(LinkStopLiveCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(nstream_, other->nstream_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkStopLiveCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[45];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkStopLiveCmd

// string strId = 1;
void LinkStopLiveCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkStopLiveCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkStopLiveCmd.strId)
  return strid_.GetNoArena();
}
void LinkStopLiveCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkStopLiveCmd.strId)
}
#if LANG_CXX11
void LinkStopLiveCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkStopLiveCmd.strId)
}
#endif
void LinkStopLiveCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkStopLiveCmd.strId)
}
void LinkStopLiveCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkStopLiveCmd.strId)
}
::std::string* LinkStopLiveCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkStopLiveCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkStopLiveCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkStopLiveCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkStopLiveCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkStopLiveCmd.strId)
}

// int32 nStream = 2;
void LinkStopLiveCmd::clear_nstream() {
  nstream_ = 0;
}
::google::protobuf::int32 LinkStopLiveCmd::nstream() const {
  // @@protoc_insertion_point(field_get:LinkStopLiveCmd.nStream)
  return nstream_;
}
void LinkStopLiveCmd::set_nstream(::google::protobuf::int32 value) {
  
  nstream_ = value;
  // @@protoc_insertion_point(field_set:LinkStopLiveCmd.nStream)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkPlayBackCmd::kStrIdFieldNumber;
const int LinkPlayBackCmd::kNPlaytimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkPlayBackCmd::LinkPlayBackCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkPlayBackCmd)
}
LinkPlayBackCmd::LinkPlayBackCmd(const LinkPlayBackCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  nplaytime_ = from.nplaytime_;
  // @@protoc_insertion_point(copy_constructor:LinkPlayBackCmd)
}

void LinkPlayBackCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nplaytime_ = 0;
  _cached_size_ = 0;
}

LinkPlayBackCmd::~LinkPlayBackCmd() {
  // @@protoc_insertion_point(destructor:LinkPlayBackCmd)
  SharedDtor();
}

void LinkPlayBackCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkPlayBackCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkPlayBackCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[46].descriptor;
}

const LinkPlayBackCmd& LinkPlayBackCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkPlayBackCmd* LinkPlayBackCmd::New(::google::protobuf::Arena* arena) const {
  LinkPlayBackCmd* n = new LinkPlayBackCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkPlayBackCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkPlayBackCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nplaytime_ = 0;
}

bool LinkPlayBackCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkPlayBackCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkPlayBackCmd.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nPlaytime = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nplaytime_)));
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
  // @@protoc_insertion_point(parse_success:LinkPlayBackCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkPlayBackCmd)
  return false;
#undef DO_
}

void LinkPlayBackCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkPlayBackCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayBackCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nPlaytime = 2;
  if (this->nplaytime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nplaytime(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkPlayBackCmd)
}

::google::protobuf::uint8* LinkPlayBackCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkPlayBackCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayBackCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nPlaytime = 2;
  if (this->nplaytime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nplaytime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkPlayBackCmd)
  return target;
}

size_t LinkPlayBackCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkPlayBackCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int32 nPlaytime = 2;
  if (this->nplaytime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nplaytime());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkPlayBackCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkPlayBackCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkPlayBackCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkPlayBackCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkPlayBackCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkPlayBackCmd)
    MergeFrom(*source);
  }
}

void LinkPlayBackCmd::MergeFrom(const LinkPlayBackCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkPlayBackCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nplaytime() != 0) {
    set_nplaytime(from.nplaytime());
  }
}

void LinkPlayBackCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkPlayBackCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkPlayBackCmd::CopyFrom(const LinkPlayBackCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkPlayBackCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkPlayBackCmd::IsInitialized() const {
  return true;
}

void LinkPlayBackCmd::Swap(LinkPlayBackCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkPlayBackCmd::InternalSwap(LinkPlayBackCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(nplaytime_, other->nplaytime_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkPlayBackCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[46];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkPlayBackCmd

// string strId = 1;
void LinkPlayBackCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkPlayBackCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkPlayBackCmd.strId)
  return strid_.GetNoArena();
}
void LinkPlayBackCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkPlayBackCmd.strId)
}
#if LANG_CXX11
void LinkPlayBackCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkPlayBackCmd.strId)
}
#endif
void LinkPlayBackCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkPlayBackCmd.strId)
}
void LinkPlayBackCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkPlayBackCmd.strId)
}
::std::string* LinkPlayBackCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkPlayBackCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkPlayBackCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkPlayBackCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkPlayBackCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkPlayBackCmd.strId)
}

// int32 nPlaytime = 2;
void LinkPlayBackCmd::clear_nplaytime() {
  nplaytime_ = 0;
}
::google::protobuf::int32 LinkPlayBackCmd::nplaytime() const {
  // @@protoc_insertion_point(field_get:LinkPlayBackCmd.nPlaytime)
  return nplaytime_;
}
void LinkPlayBackCmd::set_nplaytime(::google::protobuf::int32 value) {
  
  nplaytime_ = value;
  // @@protoc_insertion_point(field_set:LinkPlayBackCmd.nPlaytime)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkPlayPauseCmd::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkPlayPauseCmd::LinkPlayPauseCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkPlayPauseCmd)
}
LinkPlayPauseCmd::LinkPlayPauseCmd(const LinkPlayPauseCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkPlayPauseCmd)
}

void LinkPlayPauseCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkPlayPauseCmd::~LinkPlayPauseCmd() {
  // @@protoc_insertion_point(destructor:LinkPlayPauseCmd)
  SharedDtor();
}

void LinkPlayPauseCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkPlayPauseCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkPlayPauseCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[47].descriptor;
}

const LinkPlayPauseCmd& LinkPlayPauseCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkPlayPauseCmd* LinkPlayPauseCmd::New(::google::protobuf::Arena* arena) const {
  LinkPlayPauseCmd* n = new LinkPlayPauseCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkPlayPauseCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkPlayPauseCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkPlayPauseCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkPlayPauseCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkPlayPauseCmd.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkPlayPauseCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkPlayPauseCmd)
  return false;
#undef DO_
}

void LinkPlayPauseCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkPlayPauseCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayPauseCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkPlayPauseCmd)
}

::google::protobuf::uint8* LinkPlayPauseCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkPlayPauseCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayPauseCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkPlayPauseCmd)
  return target;
}

size_t LinkPlayPauseCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkPlayPauseCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkPlayPauseCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkPlayPauseCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkPlayPauseCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkPlayPauseCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkPlayPauseCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkPlayPauseCmd)
    MergeFrom(*source);
  }
}

void LinkPlayPauseCmd::MergeFrom(const LinkPlayPauseCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkPlayPauseCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkPlayPauseCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkPlayPauseCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkPlayPauseCmd::CopyFrom(const LinkPlayPauseCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkPlayPauseCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkPlayPauseCmd::IsInitialized() const {
  return true;
}

void LinkPlayPauseCmd::Swap(LinkPlayPauseCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkPlayPauseCmd::InternalSwap(LinkPlayPauseCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkPlayPauseCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[47];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkPlayPauseCmd

// string strId = 1;
void LinkPlayPauseCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkPlayPauseCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkPlayPauseCmd.strId)
  return strid_.GetNoArena();
}
void LinkPlayPauseCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkPlayPauseCmd.strId)
}
#if LANG_CXX11
void LinkPlayPauseCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkPlayPauseCmd.strId)
}
#endif
void LinkPlayPauseCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkPlayPauseCmd.strId)
}
void LinkPlayPauseCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkPlayPauseCmd.strId)
}
::std::string* LinkPlayPauseCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkPlayPauseCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkPlayPauseCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkPlayPauseCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkPlayPauseCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkPlayPauseCmd.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkPlayResumeCmd::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkPlayResumeCmd::LinkPlayResumeCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkPlayResumeCmd)
}
LinkPlayResumeCmd::LinkPlayResumeCmd(const LinkPlayResumeCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkPlayResumeCmd)
}

void LinkPlayResumeCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkPlayResumeCmd::~LinkPlayResumeCmd() {
  // @@protoc_insertion_point(destructor:LinkPlayResumeCmd)
  SharedDtor();
}

void LinkPlayResumeCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkPlayResumeCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkPlayResumeCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[48].descriptor;
}

const LinkPlayResumeCmd& LinkPlayResumeCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkPlayResumeCmd* LinkPlayResumeCmd::New(::google::protobuf::Arena* arena) const {
  LinkPlayResumeCmd* n = new LinkPlayResumeCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkPlayResumeCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkPlayResumeCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkPlayResumeCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkPlayResumeCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkPlayResumeCmd.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkPlayResumeCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkPlayResumeCmd)
  return false;
#undef DO_
}

void LinkPlayResumeCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkPlayResumeCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayResumeCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkPlayResumeCmd)
}

::google::protobuf::uint8* LinkPlayResumeCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkPlayResumeCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayResumeCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkPlayResumeCmd)
  return target;
}

size_t LinkPlayResumeCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkPlayResumeCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkPlayResumeCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkPlayResumeCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkPlayResumeCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkPlayResumeCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkPlayResumeCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkPlayResumeCmd)
    MergeFrom(*source);
  }
}

void LinkPlayResumeCmd::MergeFrom(const LinkPlayResumeCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkPlayResumeCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkPlayResumeCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkPlayResumeCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkPlayResumeCmd::CopyFrom(const LinkPlayResumeCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkPlayResumeCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkPlayResumeCmd::IsInitialized() const {
  return true;
}

void LinkPlayResumeCmd::Swap(LinkPlayResumeCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkPlayResumeCmd::InternalSwap(LinkPlayResumeCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkPlayResumeCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[48];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkPlayResumeCmd

// string strId = 1;
void LinkPlayResumeCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkPlayResumeCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkPlayResumeCmd.strId)
  return strid_.GetNoArena();
}
void LinkPlayResumeCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkPlayResumeCmd.strId)
}
#if LANG_CXX11
void LinkPlayResumeCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkPlayResumeCmd.strId)
}
#endif
void LinkPlayResumeCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkPlayResumeCmd.strId)
}
void LinkPlayResumeCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkPlayResumeCmd.strId)
}
::std::string* LinkPlayResumeCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkPlayResumeCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkPlayResumeCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkPlayResumeCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkPlayResumeCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkPlayResumeCmd.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkPlaySeekCmd::kStrIdFieldNumber;
const int LinkPlaySeekCmd::kNPlaytimeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkPlaySeekCmd::LinkPlaySeekCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkPlaySeekCmd)
}
LinkPlaySeekCmd::LinkPlaySeekCmd(const LinkPlaySeekCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  nplaytime_ = from.nplaytime_;
  // @@protoc_insertion_point(copy_constructor:LinkPlaySeekCmd)
}

void LinkPlaySeekCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nplaytime_ = 0;
  _cached_size_ = 0;
}

LinkPlaySeekCmd::~LinkPlaySeekCmd() {
  // @@protoc_insertion_point(destructor:LinkPlaySeekCmd)
  SharedDtor();
}

void LinkPlaySeekCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkPlaySeekCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkPlaySeekCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[49].descriptor;
}

const LinkPlaySeekCmd& LinkPlaySeekCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkPlaySeekCmd* LinkPlaySeekCmd::New(::google::protobuf::Arena* arena) const {
  LinkPlaySeekCmd* n = new LinkPlaySeekCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkPlaySeekCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkPlaySeekCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  nplaytime_ = 0;
}

bool LinkPlaySeekCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkPlaySeekCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkPlaySeekCmd.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nPlaytime = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nplaytime_)));
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
  // @@protoc_insertion_point(parse_success:LinkPlaySeekCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkPlaySeekCmd)
  return false;
#undef DO_
}

void LinkPlaySeekCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkPlaySeekCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlaySeekCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nPlaytime = 2;
  if (this->nplaytime() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nplaytime(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkPlaySeekCmd)
}

::google::protobuf::uint8* LinkPlaySeekCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkPlaySeekCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlaySeekCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nPlaytime = 2;
  if (this->nplaytime() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nplaytime(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkPlaySeekCmd)
  return target;
}

size_t LinkPlaySeekCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkPlaySeekCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int32 nPlaytime = 2;
  if (this->nplaytime() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nplaytime());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkPlaySeekCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkPlaySeekCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkPlaySeekCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkPlaySeekCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkPlaySeekCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkPlaySeekCmd)
    MergeFrom(*source);
  }
}

void LinkPlaySeekCmd::MergeFrom(const LinkPlaySeekCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkPlaySeekCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nplaytime() != 0) {
    set_nplaytime(from.nplaytime());
  }
}

void LinkPlaySeekCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkPlaySeekCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkPlaySeekCmd::CopyFrom(const LinkPlaySeekCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkPlaySeekCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkPlaySeekCmd::IsInitialized() const {
  return true;
}

void LinkPlaySeekCmd::Swap(LinkPlaySeekCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkPlaySeekCmd::InternalSwap(LinkPlaySeekCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(nplaytime_, other->nplaytime_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkPlaySeekCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[49];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkPlaySeekCmd

// string strId = 1;
void LinkPlaySeekCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkPlaySeekCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkPlaySeekCmd.strId)
  return strid_.GetNoArena();
}
void LinkPlaySeekCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkPlaySeekCmd.strId)
}
#if LANG_CXX11
void LinkPlaySeekCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkPlaySeekCmd.strId)
}
#endif
void LinkPlaySeekCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkPlaySeekCmd.strId)
}
void LinkPlaySeekCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkPlaySeekCmd.strId)
}
::std::string* LinkPlaySeekCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkPlaySeekCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkPlaySeekCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkPlaySeekCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkPlaySeekCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkPlaySeekCmd.strId)
}

// int32 nPlaytime = 2;
void LinkPlaySeekCmd::clear_nplaytime() {
  nplaytime_ = 0;
}
::google::protobuf::int32 LinkPlaySeekCmd::nplaytime() const {
  // @@protoc_insertion_point(field_get:LinkPlaySeekCmd.nPlaytime)
  return nplaytime_;
}
void LinkPlaySeekCmd::set_nplaytime(::google::protobuf::int32 value) {
  
  nplaytime_ = value;
  // @@protoc_insertion_point(field_set:LinkPlaySeekCmd.nPlaytime)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkPlayStopCmd::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkPlayStopCmd::LinkPlayStopCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkPlayStopCmd)
}
LinkPlayStopCmd::LinkPlayStopCmd(const LinkPlayStopCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkPlayStopCmd)
}

void LinkPlayStopCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkPlayStopCmd::~LinkPlayStopCmd() {
  // @@protoc_insertion_point(destructor:LinkPlayStopCmd)
  SharedDtor();
}

void LinkPlayStopCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkPlayStopCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkPlayStopCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[50].descriptor;
}

const LinkPlayStopCmd& LinkPlayStopCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkPlayStopCmd* LinkPlayStopCmd::New(::google::protobuf::Arena* arena) const {
  LinkPlayStopCmd* n = new LinkPlayStopCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkPlayStopCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkPlayStopCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkPlayStopCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkPlayStopCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkPlayStopCmd.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkPlayStopCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkPlayStopCmd)
  return false;
#undef DO_
}

void LinkPlayStopCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkPlayStopCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayStopCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkPlayStopCmd)
}

::google::protobuf::uint8* LinkPlayStopCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkPlayStopCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPlayStopCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkPlayStopCmd)
  return target;
}

size_t LinkPlayStopCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkPlayStopCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkPlayStopCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkPlayStopCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkPlayStopCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkPlayStopCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkPlayStopCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkPlayStopCmd)
    MergeFrom(*source);
  }
}

void LinkPlayStopCmd::MergeFrom(const LinkPlayStopCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkPlayStopCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkPlayStopCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkPlayStopCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkPlayStopCmd::CopyFrom(const LinkPlayStopCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkPlayStopCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkPlayStopCmd::IsInitialized() const {
  return true;
}

void LinkPlayStopCmd::Swap(LinkPlayStopCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkPlayStopCmd::InternalSwap(LinkPlayStopCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkPlayStopCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[50];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkPlayStopCmd

// string strId = 1;
void LinkPlayStopCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkPlayStopCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkPlayStopCmd.strId)
  return strid_.GetNoArena();
}
void LinkPlayStopCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkPlayStopCmd.strId)
}
#if LANG_CXX11
void LinkPlayStopCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkPlayStopCmd.strId)
}
#endif
void LinkPlayStopCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkPlayStopCmd.strId)
}
void LinkPlayStopCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkPlayStopCmd.strId)
}
::std::string* LinkPlayStopCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkPlayStopCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkPlayStopCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkPlayStopCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkPlayStopCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkPlayStopCmd.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkPtzCmd::kStrIdFieldNumber;
const int LinkPtzCmd::kNActionFieldNumber;
const int LinkPtzCmd::kNParamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkPtzCmd::LinkPtzCmd()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkPtzCmd)
}
LinkPtzCmd::LinkPtzCmd(const LinkPtzCmd& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  ::memcpy(&nparam_, &from.nparam_,
    reinterpret_cast<char*>(&naction_) -
    reinterpret_cast<char*>(&nparam_) + sizeof(naction_));
  // @@protoc_insertion_point(copy_constructor:LinkPtzCmd)
}

void LinkPtzCmd::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nparam_, 0, reinterpret_cast<char*>(&naction_) -
    reinterpret_cast<char*>(&nparam_) + sizeof(naction_));
  _cached_size_ = 0;
}

LinkPtzCmd::~LinkPtzCmd() {
  // @@protoc_insertion_point(destructor:LinkPtzCmd)
  SharedDtor();
}

void LinkPtzCmd::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkPtzCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkPtzCmd::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[51].descriptor;
}

const LinkPtzCmd& LinkPtzCmd::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkPtzCmd* LinkPtzCmd::New(::google::protobuf::Arena* arena) const {
  LinkPtzCmd* n = new LinkPtzCmd;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkPtzCmd::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkPtzCmd)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nparam_, 0, reinterpret_cast<char*>(&naction_) -
    reinterpret_cast<char*>(&nparam_) + sizeof(naction_));
}

bool LinkPtzCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkPtzCmd)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkPtzCmd.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nAction = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &naction_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double nParam = 3;
      case 3: {
        if (tag == 25u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &nparam_)));
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
  // @@protoc_insertion_point(parse_success:LinkPtzCmd)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkPtzCmd)
  return false;
#undef DO_
}

void LinkPtzCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkPtzCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPtzCmd.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nAction = 2;
  if (this->naction() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->naction(), output);
  }

  // double nParam = 3;
  if (this->nparam() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->nparam(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkPtzCmd)
}

::google::protobuf::uint8* LinkPtzCmd::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkPtzCmd)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkPtzCmd.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nAction = 2;
  if (this->naction() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->naction(), target);
  }

  // double nParam = 3;
  if (this->nparam() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->nparam(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkPtzCmd)
  return target;
}

size_t LinkPtzCmd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkPtzCmd)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // double nParam = 3;
  if (this->nparam() != 0) {
    total_size += 1 + 8;
  }

  // int32 nAction = 2;
  if (this->naction() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->naction());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkPtzCmd::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkPtzCmd)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkPtzCmd* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkPtzCmd>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkPtzCmd)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkPtzCmd)
    MergeFrom(*source);
  }
}

void LinkPtzCmd::MergeFrom(const LinkPtzCmd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkPtzCmd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nparam() != 0) {
    set_nparam(from.nparam());
  }
  if (from.naction() != 0) {
    set_naction(from.naction());
  }
}

void LinkPtzCmd::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkPtzCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkPtzCmd::CopyFrom(const LinkPtzCmd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkPtzCmd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkPtzCmd::IsInitialized() const {
  return true;
}

void LinkPtzCmd::Swap(LinkPtzCmd* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkPtzCmd::InternalSwap(LinkPtzCmd* other) {
  strid_.Swap(&other->strid_);
  std::swap(nparam_, other->nparam_);
  std::swap(naction_, other->naction_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkPtzCmd::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[51];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkPtzCmd

// string strId = 1;
void LinkPtzCmd::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkPtzCmd::strid() const {
  // @@protoc_insertion_point(field_get:LinkPtzCmd.strId)
  return strid_.GetNoArena();
}
void LinkPtzCmd::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkPtzCmd.strId)
}
#if LANG_CXX11
void LinkPtzCmd::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkPtzCmd.strId)
}
#endif
void LinkPtzCmd::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkPtzCmd.strId)
}
void LinkPtzCmd::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkPtzCmd.strId)
}
::std::string* LinkPtzCmd::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkPtzCmd.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkPtzCmd::release_strid() {
  // @@protoc_insertion_point(field_release:LinkPtzCmd.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkPtzCmd::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkPtzCmd.strId)
}

// int32 nAction = 2;
void LinkPtzCmd::clear_naction() {
  naction_ = 0;
}
::google::protobuf::int32 LinkPtzCmd::naction() const {
  // @@protoc_insertion_point(field_get:LinkPtzCmd.nAction)
  return naction_;
}
void LinkPtzCmd::set_naction(::google::protobuf::int32 value) {
  
  naction_ = value;
  // @@protoc_insertion_point(field_set:LinkPtzCmd.nAction)
}

// double nParam = 3;
void LinkPtzCmd::clear_nparam() {
  nparam_ = 0;
}
double LinkPtzCmd::nparam() const {
  // @@protoc_insertion_point(field_get:LinkPtzCmd.nParam)
  return nparam_;
}
void LinkPtzCmd::set_nparam(double value) {
  
  nparam_ = value;
  // @@protoc_insertion_point(field_set:LinkPtzCmd.nParam)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamSearchStartReq::kStrFakeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamSearchStartReq::LinkCamSearchStartReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamSearchStartReq)
}
LinkCamSearchStartReq::LinkCamSearchStartReq(const LinkCamSearchStartReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strfake().size() > 0) {
    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamSearchStartReq)
}

void LinkCamSearchStartReq::SharedCtor() {
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkCamSearchStartReq::~LinkCamSearchStartReq() {
  // @@protoc_insertion_point(destructor:LinkCamSearchStartReq)
  SharedDtor();
}

void LinkCamSearchStartReq::SharedDtor() {
  strfake_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkCamSearchStartReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamSearchStartReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[52].descriptor;
}

const LinkCamSearchStartReq& LinkCamSearchStartReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamSearchStartReq* LinkCamSearchStartReq::New(::google::protobuf::Arena* arena) const {
  LinkCamSearchStartReq* n = new LinkCamSearchStartReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamSearchStartReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamSearchStartReq)
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkCamSearchStartReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamSearchStartReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strFake = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strfake()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strfake().data(), this->strfake().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamSearchStartReq.strFake"));
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
  // @@protoc_insertion_point(parse_success:LinkCamSearchStartReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamSearchStartReq)
  return false;
#undef DO_
}

void LinkCamSearchStartReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamSearchStartReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchStartReq.strFake");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strfake(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamSearchStartReq)
}

::google::protobuf::uint8* LinkCamSearchStartReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamSearchStartReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchStartReq.strFake");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strfake(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamSearchStartReq)
  return target;
}

size_t LinkCamSearchStartReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamSearchStartReq)
  size_t total_size = 0;

  // string strFake = 1;
  if (this->strfake().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strfake());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamSearchStartReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamSearchStartReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamSearchStartReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamSearchStartReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamSearchStartReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamSearchStartReq)
    MergeFrom(*source);
  }
}

void LinkCamSearchStartReq::MergeFrom(const LinkCamSearchStartReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamSearchStartReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strfake().size() > 0) {

    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
}

void LinkCamSearchStartReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamSearchStartReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamSearchStartReq::CopyFrom(const LinkCamSearchStartReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamSearchStartReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamSearchStartReq::IsInitialized() const {
  return true;
}

void LinkCamSearchStartReq::Swap(LinkCamSearchStartReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamSearchStartReq::InternalSwap(LinkCamSearchStartReq* other) {
  strfake_.Swap(&other->strfake_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamSearchStartReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[52];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamSearchStartReq

// string strFake = 1;
void LinkCamSearchStartReq::clear_strfake() {
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamSearchStartReq::strfake() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchStartReq.strFake)
  return strfake_.GetNoArena();
}
void LinkCamSearchStartReq::set_strfake(const ::std::string& value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamSearchStartReq.strFake)
}
#if LANG_CXX11
void LinkCamSearchStartReq::set_strfake(::std::string&& value) {
  
  strfake_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamSearchStartReq.strFake)
}
#endif
void LinkCamSearchStartReq::set_strfake(const char* value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamSearchStartReq.strFake)
}
void LinkCamSearchStartReq::set_strfake(const char* value, size_t size) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamSearchStartReq.strFake)
}
::std::string* LinkCamSearchStartReq::mutable_strfake() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamSearchStartReq.strFake)
  return strfake_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamSearchStartReq::release_strfake() {
  // @@protoc_insertion_point(field_release:LinkCamSearchStartReq.strFake)
  
  return strfake_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamSearchStartReq::set_allocated_strfake(::std::string* strfake) {
  if (strfake != NULL) {
    
  } else {
    
  }
  strfake_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strfake);
  // @@protoc_insertion_point(field_set_allocated:LinkCamSearchStartReq.strFake)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamSearchStartResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamSearchStartResp::LinkCamSearchStartResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamSearchStartResp)
}
LinkCamSearchStartResp::LinkCamSearchStartResp(const LinkCamSearchStartResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkCamSearchStartResp)
}

void LinkCamSearchStartResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkCamSearchStartResp::~LinkCamSearchStartResp() {
  // @@protoc_insertion_point(destructor:LinkCamSearchStartResp)
  SharedDtor();
}

void LinkCamSearchStartResp::SharedDtor() {
}

void LinkCamSearchStartResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamSearchStartResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[53].descriptor;
}

const LinkCamSearchStartResp& LinkCamSearchStartResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamSearchStartResp* LinkCamSearchStartResp::New(::google::protobuf::Arena* arena) const {
  LinkCamSearchStartResp* n = new LinkCamSearchStartResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamSearchStartResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamSearchStartResp)
  bsuccess_ = false;
}

bool LinkCamSearchStartResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamSearchStartResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkCamSearchStartResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamSearchStartResp)
  return false;
#undef DO_
}

void LinkCamSearchStartResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamSearchStartResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamSearchStartResp)
}

::google::protobuf::uint8* LinkCamSearchStartResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamSearchStartResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamSearchStartResp)
  return target;
}

size_t LinkCamSearchStartResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamSearchStartResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamSearchStartResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamSearchStartResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamSearchStartResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamSearchStartResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamSearchStartResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamSearchStartResp)
    MergeFrom(*source);
  }
}

void LinkCamSearchStartResp::MergeFrom(const LinkCamSearchStartResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamSearchStartResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkCamSearchStartResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamSearchStartResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamSearchStartResp::CopyFrom(const LinkCamSearchStartResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamSearchStartResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamSearchStartResp::IsInitialized() const {
  return true;
}

void LinkCamSearchStartResp::Swap(LinkCamSearchStartResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamSearchStartResp::InternalSwap(LinkCamSearchStartResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamSearchStartResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[53];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamSearchStartResp

// bool bSuccess = 1;
void LinkCamSearchStartResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkCamSearchStartResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchStartResp.bSuccess)
  return bsuccess_;
}
void LinkCamSearchStartResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkCamSearchStartResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamSearchStopReq::kStrFakeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamSearchStopReq::LinkCamSearchStopReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamSearchStopReq)
}
LinkCamSearchStopReq::LinkCamSearchStopReq(const LinkCamSearchStopReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strfake().size() > 0) {
    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamSearchStopReq)
}

void LinkCamSearchStopReq::SharedCtor() {
  strfake_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkCamSearchStopReq::~LinkCamSearchStopReq() {
  // @@protoc_insertion_point(destructor:LinkCamSearchStopReq)
  SharedDtor();
}

void LinkCamSearchStopReq::SharedDtor() {
  strfake_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkCamSearchStopReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamSearchStopReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[54].descriptor;
}

const LinkCamSearchStopReq& LinkCamSearchStopReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamSearchStopReq* LinkCamSearchStopReq::New(::google::protobuf::Arena* arena) const {
  LinkCamSearchStopReq* n = new LinkCamSearchStopReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamSearchStopReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamSearchStopReq)
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkCamSearchStopReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamSearchStopReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strFake = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strfake()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strfake().data(), this->strfake().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamSearchStopReq.strFake"));
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
  // @@protoc_insertion_point(parse_success:LinkCamSearchStopReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamSearchStopReq)
  return false;
#undef DO_
}

void LinkCamSearchStopReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamSearchStopReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchStopReq.strFake");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strfake(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamSearchStopReq)
}

::google::protobuf::uint8* LinkCamSearchStopReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamSearchStopReq)
  // string strFake = 1;
  if (this->strfake().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strfake().data(), this->strfake().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchStopReq.strFake");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strfake(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamSearchStopReq)
  return target;
}

size_t LinkCamSearchStopReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamSearchStopReq)
  size_t total_size = 0;

  // string strFake = 1;
  if (this->strfake().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strfake());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamSearchStopReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamSearchStopReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamSearchStopReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamSearchStopReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamSearchStopReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamSearchStopReq)
    MergeFrom(*source);
  }
}

void LinkCamSearchStopReq::MergeFrom(const LinkCamSearchStopReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamSearchStopReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strfake().size() > 0) {

    strfake_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strfake_);
  }
}

void LinkCamSearchStopReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamSearchStopReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamSearchStopReq::CopyFrom(const LinkCamSearchStopReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamSearchStopReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamSearchStopReq::IsInitialized() const {
  return true;
}

void LinkCamSearchStopReq::Swap(LinkCamSearchStopReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamSearchStopReq::InternalSwap(LinkCamSearchStopReq* other) {
  strfake_.Swap(&other->strfake_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamSearchStopReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[54];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamSearchStopReq

// string strFake = 1;
void LinkCamSearchStopReq::clear_strfake() {
  strfake_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamSearchStopReq::strfake() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchStopReq.strFake)
  return strfake_.GetNoArena();
}
void LinkCamSearchStopReq::set_strfake(const ::std::string& value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamSearchStopReq.strFake)
}
#if LANG_CXX11
void LinkCamSearchStopReq::set_strfake(::std::string&& value) {
  
  strfake_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamSearchStopReq.strFake)
}
#endif
void LinkCamSearchStopReq::set_strfake(const char* value) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamSearchStopReq.strFake)
}
void LinkCamSearchStopReq::set_strfake(const char* value, size_t size) {
  
  strfake_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamSearchStopReq.strFake)
}
::std::string* LinkCamSearchStopReq::mutable_strfake() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamSearchStopReq.strFake)
  return strfake_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamSearchStopReq::release_strfake() {
  // @@protoc_insertion_point(field_release:LinkCamSearchStopReq.strFake)
  
  return strfake_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamSearchStopReq::set_allocated_strfake(::std::string* strfake) {
  if (strfake != NULL) {
    
  } else {
    
  }
  strfake_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strfake);
  // @@protoc_insertion_point(field_set_allocated:LinkCamSearchStopReq.strFake)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamSearchStopResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamSearchStopResp::LinkCamSearchStopResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamSearchStopResp)
}
LinkCamSearchStopResp::LinkCamSearchStopResp(const LinkCamSearchStopResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkCamSearchStopResp)
}

void LinkCamSearchStopResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkCamSearchStopResp::~LinkCamSearchStopResp() {
  // @@protoc_insertion_point(destructor:LinkCamSearchStopResp)
  SharedDtor();
}

void LinkCamSearchStopResp::SharedDtor() {
}

void LinkCamSearchStopResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamSearchStopResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[55].descriptor;
}

const LinkCamSearchStopResp& LinkCamSearchStopResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamSearchStopResp* LinkCamSearchStopResp::New(::google::protobuf::Arena* arena) const {
  LinkCamSearchStopResp* n = new LinkCamSearchStopResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamSearchStopResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamSearchStopResp)
  bsuccess_ = false;
}

bool LinkCamSearchStopResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamSearchStopResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkCamSearchStopResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamSearchStopResp)
  return false;
#undef DO_
}

void LinkCamSearchStopResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamSearchStopResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamSearchStopResp)
}

::google::protobuf::uint8* LinkCamSearchStopResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamSearchStopResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamSearchStopResp)
  return target;
}

size_t LinkCamSearchStopResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamSearchStopResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamSearchStopResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamSearchStopResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamSearchStopResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamSearchStopResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamSearchStopResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamSearchStopResp)
    MergeFrom(*source);
  }
}

void LinkCamSearchStopResp::MergeFrom(const LinkCamSearchStopResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamSearchStopResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkCamSearchStopResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamSearchStopResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamSearchStopResp::CopyFrom(const LinkCamSearchStopResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamSearchStopResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamSearchStopResp::IsInitialized() const {
  return true;
}

void LinkCamSearchStopResp::Swap(LinkCamSearchStopResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamSearchStopResp::InternalSwap(LinkCamSearchStopResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamSearchStopResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[55];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamSearchStopResp

// bool bSuccess = 1;
void LinkCamSearchStopResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkCamSearchStopResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchStopResp.bSuccess)
  return bsuccess_;
}
void LinkCamSearchStopResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkCamSearchStopResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkRegEventReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkRegEventReq::LinkRegEventReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkRegEventReq)
}
LinkRegEventReq::LinkRegEventReq(const LinkRegEventReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkRegEventReq)
}

void LinkRegEventReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkRegEventReq::~LinkRegEventReq() {
  // @@protoc_insertion_point(destructor:LinkRegEventReq)
  SharedDtor();
}

void LinkRegEventReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkRegEventReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkRegEventReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[56].descriptor;
}

const LinkRegEventReq& LinkRegEventReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkRegEventReq* LinkRegEventReq::New(::google::protobuf::Arena* arena) const {
  LinkRegEventReq* n = new LinkRegEventReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkRegEventReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkRegEventReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkRegEventReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkRegEventReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkRegEventReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkRegEventReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkRegEventReq)
  return false;
#undef DO_
}

void LinkRegEventReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkRegEventReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkRegEventReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkRegEventReq)
}

::google::protobuf::uint8* LinkRegEventReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkRegEventReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkRegEventReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkRegEventReq)
  return target;
}

size_t LinkRegEventReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkRegEventReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkRegEventReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkRegEventReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkRegEventReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkRegEventReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkRegEventReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkRegEventReq)
    MergeFrom(*source);
  }
}

void LinkRegEventReq::MergeFrom(const LinkRegEventReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkRegEventReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkRegEventReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkRegEventReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkRegEventReq::CopyFrom(const LinkRegEventReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkRegEventReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkRegEventReq::IsInitialized() const {
  return true;
}

void LinkRegEventReq::Swap(LinkRegEventReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkRegEventReq::InternalSwap(LinkRegEventReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkRegEventReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[56];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkRegEventReq

// string strId = 1;
void LinkRegEventReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkRegEventReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkRegEventReq.strId)
  return strid_.GetNoArena();
}
void LinkRegEventReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkRegEventReq.strId)
}
#if LANG_CXX11
void LinkRegEventReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkRegEventReq.strId)
}
#endif
void LinkRegEventReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkRegEventReq.strId)
}
void LinkRegEventReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkRegEventReq.strId)
}
::std::string* LinkRegEventReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkRegEventReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkRegEventReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkRegEventReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkRegEventReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkRegEventReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkRegEventResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkRegEventResp::LinkRegEventResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkRegEventResp)
}
LinkRegEventResp::LinkRegEventResp(const LinkRegEventResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkRegEventResp)
}

void LinkRegEventResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkRegEventResp::~LinkRegEventResp() {
  // @@protoc_insertion_point(destructor:LinkRegEventResp)
  SharedDtor();
}

void LinkRegEventResp::SharedDtor() {
}

void LinkRegEventResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkRegEventResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[57].descriptor;
}

const LinkRegEventResp& LinkRegEventResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkRegEventResp* LinkRegEventResp::New(::google::protobuf::Arena* arena) const {
  LinkRegEventResp* n = new LinkRegEventResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkRegEventResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkRegEventResp)
  bsuccess_ = false;
}

bool LinkRegEventResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkRegEventResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkRegEventResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkRegEventResp)
  return false;
#undef DO_
}

void LinkRegEventResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkRegEventResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkRegEventResp)
}

::google::protobuf::uint8* LinkRegEventResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkRegEventResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkRegEventResp)
  return target;
}

size_t LinkRegEventResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkRegEventResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkRegEventResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkRegEventResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkRegEventResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkRegEventResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkRegEventResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkRegEventResp)
    MergeFrom(*source);
  }
}

void LinkRegEventResp::MergeFrom(const LinkRegEventResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkRegEventResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkRegEventResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkRegEventResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkRegEventResp::CopyFrom(const LinkRegEventResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkRegEventResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkRegEventResp::IsInitialized() const {
  return true;
}

void LinkRegEventResp::Swap(LinkRegEventResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkRegEventResp::InternalSwap(LinkRegEventResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkRegEventResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[57];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkRegEventResp

// bool bSuccess = 1;
void LinkRegEventResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkRegEventResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkRegEventResp.bSuccess)
  return bsuccess_;
}
void LinkRegEventResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkRegEventResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkUnRegEventReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkUnRegEventReq::LinkUnRegEventReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkUnRegEventReq)
}
LinkUnRegEventReq::LinkUnRegEventReq(const LinkUnRegEventReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkUnRegEventReq)
}

void LinkUnRegEventReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkUnRegEventReq::~LinkUnRegEventReq() {
  // @@protoc_insertion_point(destructor:LinkUnRegEventReq)
  SharedDtor();
}

void LinkUnRegEventReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkUnRegEventReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkUnRegEventReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[58].descriptor;
}

const LinkUnRegEventReq& LinkUnRegEventReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkUnRegEventReq* LinkUnRegEventReq::New(::google::protobuf::Arena* arena) const {
  LinkUnRegEventReq* n = new LinkUnRegEventReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkUnRegEventReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkUnRegEventReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkUnRegEventReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkUnRegEventReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkUnRegEventReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkUnRegEventReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkUnRegEventReq)
  return false;
#undef DO_
}

void LinkUnRegEventReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkUnRegEventReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkUnRegEventReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkUnRegEventReq)
}

::google::protobuf::uint8* LinkUnRegEventReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkUnRegEventReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkUnRegEventReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkUnRegEventReq)
  return target;
}

size_t LinkUnRegEventReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkUnRegEventReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkUnRegEventReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkUnRegEventReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkUnRegEventReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkUnRegEventReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkUnRegEventReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkUnRegEventReq)
    MergeFrom(*source);
  }
}

void LinkUnRegEventReq::MergeFrom(const LinkUnRegEventReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkUnRegEventReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkUnRegEventReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkUnRegEventReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkUnRegEventReq::CopyFrom(const LinkUnRegEventReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkUnRegEventReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkUnRegEventReq::IsInitialized() const {
  return true;
}

void LinkUnRegEventReq::Swap(LinkUnRegEventReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkUnRegEventReq::InternalSwap(LinkUnRegEventReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkUnRegEventReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[58];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkUnRegEventReq

// string strId = 1;
void LinkUnRegEventReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkUnRegEventReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkUnRegEventReq.strId)
  return strid_.GetNoArena();
}
void LinkUnRegEventReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkUnRegEventReq.strId)
}
#if LANG_CXX11
void LinkUnRegEventReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkUnRegEventReq.strId)
}
#endif
void LinkUnRegEventReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkUnRegEventReq.strId)
}
void LinkUnRegEventReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkUnRegEventReq.strId)
}
::std::string* LinkUnRegEventReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkUnRegEventReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkUnRegEventReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkUnRegEventReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkUnRegEventReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkUnRegEventReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkUnRegEventResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkUnRegEventResp::LinkUnRegEventResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkUnRegEventResp)
}
LinkUnRegEventResp::LinkUnRegEventResp(const LinkUnRegEventResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkUnRegEventResp)
}

void LinkUnRegEventResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkUnRegEventResp::~LinkUnRegEventResp() {
  // @@protoc_insertion_point(destructor:LinkUnRegEventResp)
  SharedDtor();
}

void LinkUnRegEventResp::SharedDtor() {
}

void LinkUnRegEventResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkUnRegEventResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[59].descriptor;
}

const LinkUnRegEventResp& LinkUnRegEventResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkUnRegEventResp* LinkUnRegEventResp::New(::google::protobuf::Arena* arena) const {
  LinkUnRegEventResp* n = new LinkUnRegEventResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkUnRegEventResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkUnRegEventResp)
  bsuccess_ = false;
}

bool LinkUnRegEventResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkUnRegEventResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkUnRegEventResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkUnRegEventResp)
  return false;
#undef DO_
}

void LinkUnRegEventResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkUnRegEventResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkUnRegEventResp)
}

::google::protobuf::uint8* LinkUnRegEventResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkUnRegEventResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkUnRegEventResp)
  return target;
}

size_t LinkUnRegEventResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkUnRegEventResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkUnRegEventResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkUnRegEventResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkUnRegEventResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkUnRegEventResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkUnRegEventResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkUnRegEventResp)
    MergeFrom(*source);
  }
}

void LinkUnRegEventResp::MergeFrom(const LinkUnRegEventResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkUnRegEventResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkUnRegEventResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkUnRegEventResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkUnRegEventResp::CopyFrom(const LinkUnRegEventResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkUnRegEventResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkUnRegEventResp::IsInitialized() const {
  return true;
}

void LinkUnRegEventResp::Swap(LinkUnRegEventResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkUnRegEventResp::InternalSwap(LinkUnRegEventResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkUnRegEventResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[59];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkUnRegEventResp

// bool bSuccess = 1;
void LinkUnRegEventResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkUnRegEventResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkUnRegEventResp.bSuccess)
  return bsuccess_;
}
void LinkUnRegEventResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkUnRegEventResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkEventSearchReq::kStrIdFieldNumber;
const int LinkEventSearchReq::kNStartFieldNumber;
const int LinkEventSearchReq::kNEndFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkEventSearchReq::LinkEventSearchReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkEventSearchReq)
}
LinkEventSearchReq::LinkEventSearchReq(const LinkEventSearchReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  ::memcpy(&nstart_, &from.nstart_,
    reinterpret_cast<char*>(&nend_) -
    reinterpret_cast<char*>(&nstart_) + sizeof(nend_));
  // @@protoc_insertion_point(copy_constructor:LinkEventSearchReq)
}

void LinkEventSearchReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nstart_, 0, reinterpret_cast<char*>(&nend_) -
    reinterpret_cast<char*>(&nstart_) + sizeof(nend_));
  _cached_size_ = 0;
}

LinkEventSearchReq::~LinkEventSearchReq() {
  // @@protoc_insertion_point(destructor:LinkEventSearchReq)
  SharedDtor();
}

void LinkEventSearchReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkEventSearchReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkEventSearchReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[60].descriptor;
}

const LinkEventSearchReq& LinkEventSearchReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkEventSearchReq* LinkEventSearchReq::New(::google::protobuf::Arena* arena) const {
  LinkEventSearchReq* n = new LinkEventSearchReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkEventSearchReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkEventSearchReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&nstart_, 0, reinterpret_cast<char*>(&nend_) -
    reinterpret_cast<char*>(&nstart_) + sizeof(nend_));
}

bool LinkEventSearchReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkEventSearchReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkEventSearchReq.strId"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nStart = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nstart_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 nEnd = 3;
      case 3: {
        if (tag == 24u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &nend_)));
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
  // @@protoc_insertion_point(parse_success:LinkEventSearchReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkEventSearchReq)
  return false;
#undef DO_
}

void LinkEventSearchReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkEventSearchReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkEventSearchReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->nstart(), output);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->nend(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkEventSearchReq)
}

::google::protobuf::uint8* LinkEventSearchReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkEventSearchReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkEventSearchReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->nstart(), target);
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->nend(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkEventSearchReq)
  return target;
}

size_t LinkEventSearchReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkEventSearchReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  // int32 nStart = 2;
  if (this->nstart() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nstart());
  }

  // int32 nEnd = 3;
  if (this->nend() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->nend());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkEventSearchReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkEventSearchReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkEventSearchReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkEventSearchReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkEventSearchReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkEventSearchReq)
    MergeFrom(*source);
  }
}

void LinkEventSearchReq::MergeFrom(const LinkEventSearchReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkEventSearchReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  if (from.nstart() != 0) {
    set_nstart(from.nstart());
  }
  if (from.nend() != 0) {
    set_nend(from.nend());
  }
}

void LinkEventSearchReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkEventSearchReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkEventSearchReq::CopyFrom(const LinkEventSearchReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkEventSearchReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkEventSearchReq::IsInitialized() const {
  return true;
}

void LinkEventSearchReq::Swap(LinkEventSearchReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkEventSearchReq::InternalSwap(LinkEventSearchReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(nstart_, other->nstart_);
  std::swap(nend_, other->nend_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkEventSearchReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[60];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkEventSearchReq

// string strId = 1;
void LinkEventSearchReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkEventSearchReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkEventSearchReq.strId)
  return strid_.GetNoArena();
}
void LinkEventSearchReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkEventSearchReq.strId)
}
#if LANG_CXX11
void LinkEventSearchReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkEventSearchReq.strId)
}
#endif
void LinkEventSearchReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkEventSearchReq.strId)
}
void LinkEventSearchReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkEventSearchReq.strId)
}
::std::string* LinkEventSearchReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkEventSearchReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkEventSearchReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkEventSearchReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkEventSearchReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkEventSearchReq.strId)
}

// int32 nStart = 2;
void LinkEventSearchReq::clear_nstart() {
  nstart_ = 0;
}
::google::protobuf::int32 LinkEventSearchReq::nstart() const {
  // @@protoc_insertion_point(field_get:LinkEventSearchReq.nStart)
  return nstart_;
}
void LinkEventSearchReq::set_nstart(::google::protobuf::int32 value) {
  
  nstart_ = value;
  // @@protoc_insertion_point(field_set:LinkEventSearchReq.nStart)
}

// int32 nEnd = 3;
void LinkEventSearchReq::clear_nend() {
  nend_ = 0;
}
::google::protobuf::int32 LinkEventSearchReq::nend() const {
  // @@protoc_insertion_point(field_get:LinkEventSearchReq.nEnd)
  return nend_;
}
void LinkEventSearchReq::set_nend(::google::protobuf::int32 value) {
  
  nend_ = value;
  // @@protoc_insertion_point(field_set:LinkEventSearchReq.nEnd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkEventSearchResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkEventSearchResp::LinkEventSearchResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkEventSearchResp)
}
LinkEventSearchResp::LinkEventSearchResp(const LinkEventSearchResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkEventSearchResp)
}

void LinkEventSearchResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkEventSearchResp::~LinkEventSearchResp() {
  // @@protoc_insertion_point(destructor:LinkEventSearchResp)
  SharedDtor();
}

void LinkEventSearchResp::SharedDtor() {
}

void LinkEventSearchResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkEventSearchResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[61].descriptor;
}

const LinkEventSearchResp& LinkEventSearchResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkEventSearchResp* LinkEventSearchResp::New(::google::protobuf::Arena* arena) const {
  LinkEventSearchResp* n = new LinkEventSearchResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkEventSearchResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkEventSearchResp)
  bsuccess_ = false;
}

bool LinkEventSearchResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkEventSearchResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkEventSearchResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkEventSearchResp)
  return false;
#undef DO_
}

void LinkEventSearchResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkEventSearchResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkEventSearchResp)
}

::google::protobuf::uint8* LinkEventSearchResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkEventSearchResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkEventSearchResp)
  return target;
}

size_t LinkEventSearchResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkEventSearchResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkEventSearchResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkEventSearchResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkEventSearchResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkEventSearchResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkEventSearchResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkEventSearchResp)
    MergeFrom(*source);
  }
}

void LinkEventSearchResp::MergeFrom(const LinkEventSearchResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkEventSearchResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkEventSearchResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkEventSearchResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkEventSearchResp::CopyFrom(const LinkEventSearchResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkEventSearchResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkEventSearchResp::IsInitialized() const {
  return true;
}

void LinkEventSearchResp::Swap(LinkEventSearchResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkEventSearchResp::InternalSwap(LinkEventSearchResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkEventSearchResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[61];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkEventSearchResp

// bool bSuccess = 1;
void LinkEventSearchResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkEventSearchResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkEventSearchResp.bSuccess)
  return bsuccess_;
}
void LinkEventSearchResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkEventSearchResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkHandleEventReq::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkHandleEventReq::LinkHandleEventReq()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkHandleEventReq)
}
LinkHandleEventReq::LinkHandleEventReq(const LinkHandleEventReq& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkHandleEventReq)
}

void LinkHandleEventReq::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkHandleEventReq::~LinkHandleEventReq() {
  // @@protoc_insertion_point(destructor:LinkHandleEventReq)
  SharedDtor();
}

void LinkHandleEventReq::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkHandleEventReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkHandleEventReq::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[62].descriptor;
}

const LinkHandleEventReq& LinkHandleEventReq::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkHandleEventReq* LinkHandleEventReq::New(::google::protobuf::Arena* arena) const {
  LinkHandleEventReq* n = new LinkHandleEventReq;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkHandleEventReq::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkHandleEventReq)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkHandleEventReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkHandleEventReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkHandleEventReq.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkHandleEventReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkHandleEventReq)
  return false;
#undef DO_
}

void LinkHandleEventReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkHandleEventReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkHandleEventReq.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkHandleEventReq)
}

::google::protobuf::uint8* LinkHandleEventReq::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkHandleEventReq)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkHandleEventReq.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkHandleEventReq)
  return target;
}

size_t LinkHandleEventReq::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkHandleEventReq)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkHandleEventReq::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkHandleEventReq)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkHandleEventReq* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkHandleEventReq>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkHandleEventReq)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkHandleEventReq)
    MergeFrom(*source);
  }
}

void LinkHandleEventReq::MergeFrom(const LinkHandleEventReq& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkHandleEventReq)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkHandleEventReq::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkHandleEventReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkHandleEventReq::CopyFrom(const LinkHandleEventReq& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkHandleEventReq)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkHandleEventReq::IsInitialized() const {
  return true;
}

void LinkHandleEventReq::Swap(LinkHandleEventReq* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkHandleEventReq::InternalSwap(LinkHandleEventReq* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkHandleEventReq::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[62];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkHandleEventReq

// string strId = 1;
void LinkHandleEventReq::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkHandleEventReq::strid() const {
  // @@protoc_insertion_point(field_get:LinkHandleEventReq.strId)
  return strid_.GetNoArena();
}
void LinkHandleEventReq::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkHandleEventReq.strId)
}
#if LANG_CXX11
void LinkHandleEventReq::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkHandleEventReq.strId)
}
#endif
void LinkHandleEventReq::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkHandleEventReq.strId)
}
void LinkHandleEventReq::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkHandleEventReq.strId)
}
::std::string* LinkHandleEventReq::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkHandleEventReq.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkHandleEventReq::release_strid() {
  // @@protoc_insertion_point(field_release:LinkHandleEventReq.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkHandleEventReq::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkHandleEventReq.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkHandleEventResp::kBSuccessFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkHandleEventResp::LinkHandleEventResp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkHandleEventResp)
}
LinkHandleEventResp::LinkHandleEventResp(const LinkHandleEventResp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  bsuccess_ = from.bsuccess_;
  // @@protoc_insertion_point(copy_constructor:LinkHandleEventResp)
}

void LinkHandleEventResp::SharedCtor() {
  bsuccess_ = false;
  _cached_size_ = 0;
}

LinkHandleEventResp::~LinkHandleEventResp() {
  // @@protoc_insertion_point(destructor:LinkHandleEventResp)
  SharedDtor();
}

void LinkHandleEventResp::SharedDtor() {
}

void LinkHandleEventResp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkHandleEventResp::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[63].descriptor;
}

const LinkHandleEventResp& LinkHandleEventResp::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkHandleEventResp* LinkHandleEventResp::New(::google::protobuf::Arena* arena) const {
  LinkHandleEventResp* n = new LinkHandleEventResp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkHandleEventResp::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkHandleEventResp)
  bsuccess_ = false;
}

bool LinkHandleEventResp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkHandleEventResp)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bool bSuccess = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bsuccess_)));
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
  // @@protoc_insertion_point(parse_success:LinkHandleEventResp)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkHandleEventResp)
  return false;
#undef DO_
}

void LinkHandleEventResp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkHandleEventResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->bsuccess(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkHandleEventResp)
}

::google::protobuf::uint8* LinkHandleEventResp::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkHandleEventResp)
  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->bsuccess(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkHandleEventResp)
  return target;
}

size_t LinkHandleEventResp::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkHandleEventResp)
  size_t total_size = 0;

  // bool bSuccess = 1;
  if (this->bsuccess() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkHandleEventResp::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkHandleEventResp)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkHandleEventResp* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkHandleEventResp>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkHandleEventResp)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkHandleEventResp)
    MergeFrom(*source);
  }
}

void LinkHandleEventResp::MergeFrom(const LinkHandleEventResp& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkHandleEventResp)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.bsuccess() != 0) {
    set_bsuccess(from.bsuccess());
  }
}

void LinkHandleEventResp::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkHandleEventResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkHandleEventResp::CopyFrom(const LinkHandleEventResp& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkHandleEventResp)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkHandleEventResp::IsInitialized() const {
  return true;
}

void LinkHandleEventResp::Swap(LinkHandleEventResp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkHandleEventResp::InternalSwap(LinkHandleEventResp* other) {
  std::swap(bsuccess_, other->bsuccess_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkHandleEventResp::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[63];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkHandleEventResp

// bool bSuccess = 1;
void LinkHandleEventResp::clear_bsuccess() {
  bsuccess_ = false;
}
bool LinkHandleEventResp::bsuccess() const {
  // @@protoc_insertion_point(field_get:LinkHandleEventResp.bSuccess)
  return bsuccess_;
}
void LinkHandleEventResp::set_bsuccess(bool value) {
  
  bsuccess_ = value;
  // @@protoc_insertion_point(field_set:LinkHandleEventResp.bSuccess)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamAddNotify::kCCamFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamAddNotify::LinkCamAddNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamAddNotify)
}
LinkCamAddNotify::LinkCamAddNotify(const LinkCamAddNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    ccam_ = new ::VidCamera(*from.ccam_);
  } else {
    ccam_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamAddNotify)
}

void LinkCamAddNotify::SharedCtor() {
  ccam_ = NULL;
  _cached_size_ = 0;
}

LinkCamAddNotify::~LinkCamAddNotify() {
  // @@protoc_insertion_point(destructor:LinkCamAddNotify)
  SharedDtor();
}

void LinkCamAddNotify::SharedDtor() {
  if (this != internal_default_instance()) {
    delete ccam_;
  }
}

void LinkCamAddNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamAddNotify::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[64].descriptor;
}

const LinkCamAddNotify& LinkCamAddNotify::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamAddNotify* LinkCamAddNotify::New(::google::protobuf::Arena* arena) const {
  LinkCamAddNotify* n = new LinkCamAddNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamAddNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamAddNotify)
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) {
    delete ccam_;
  }
  ccam_ = NULL;
}

bool LinkCamAddNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamAddNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidCamera cCam = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ccam()));
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
  // @@protoc_insertion_point(parse_success:LinkCamAddNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamAddNotify)
  return false;
#undef DO_
}

void LinkCamAddNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamAddNotify)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->ccam_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamAddNotify)
}

::google::protobuf::uint8* LinkCamAddNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamAddNotify)
  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->ccam_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamAddNotify)
  return target;
}

size_t LinkCamAddNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamAddNotify)
  size_t total_size = 0;

  // .VidCamera cCam = 1;
  if (this->has_ccam()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->ccam_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamAddNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamAddNotify)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamAddNotify* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamAddNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamAddNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamAddNotify)
    MergeFrom(*source);
  }
}

void LinkCamAddNotify::MergeFrom(const LinkCamAddNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamAddNotify)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ccam()) {
    mutable_ccam()->::VidCamera::MergeFrom(from.ccam());
  }
}

void LinkCamAddNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamAddNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamAddNotify::CopyFrom(const LinkCamAddNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamAddNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamAddNotify::IsInitialized() const {
  return true;
}

void LinkCamAddNotify::Swap(LinkCamAddNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamAddNotify::InternalSwap(LinkCamAddNotify* other) {
  std::swap(ccam_, other->ccam_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamAddNotify::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[64];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamAddNotify

// .VidCamera cCam = 1;
bool LinkCamAddNotify::has_ccam() const {
  return this != internal_default_instance() && ccam_ != NULL;
}
void LinkCamAddNotify::clear_ccam() {
  if (GetArenaNoVirtual() == NULL && ccam_ != NULL) delete ccam_;
  ccam_ = NULL;
}
const ::VidCamera& LinkCamAddNotify::ccam() const {
  // @@protoc_insertion_point(field_get:LinkCamAddNotify.cCam)
  return ccam_ != NULL ? *ccam_
                         : *::VidCamera::internal_default_instance();
}
::VidCamera* LinkCamAddNotify::mutable_ccam() {
  
  if (ccam_ == NULL) {
    ccam_ = new ::VidCamera;
  }
  // @@protoc_insertion_point(field_mutable:LinkCamAddNotify.cCam)
  return ccam_;
}
::VidCamera* LinkCamAddNotify::release_ccam() {
  // @@protoc_insertion_point(field_release:LinkCamAddNotify.cCam)
  
  ::VidCamera* temp = ccam_;
  ccam_ = NULL;
  return temp;
}
void LinkCamAddNotify::set_allocated_ccam(::VidCamera* ccam) {
  delete ccam_;
  ccam_ = ccam;
  if (ccam) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkCamAddNotify.cCam)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamIdNotify::kStrIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamIdNotify::LinkCamIdNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamIdNotify)
}
LinkCamIdNotify::LinkCamIdNotify(const LinkCamIdNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strid().size() > 0) {
    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamIdNotify)
}

void LinkCamIdNotify::SharedCtor() {
  strid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkCamIdNotify::~LinkCamIdNotify() {
  // @@protoc_insertion_point(destructor:LinkCamIdNotify)
  SharedDtor();
}

void LinkCamIdNotify::SharedDtor() {
  strid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkCamIdNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamIdNotify::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[65].descriptor;
}

const LinkCamIdNotify& LinkCamIdNotify::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamIdNotify* LinkCamIdNotify::New(::google::protobuf::Arena* arena) const {
  LinkCamIdNotify* n = new LinkCamIdNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamIdNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamIdNotify)
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkCamIdNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamIdNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strId = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strid().data(), this->strid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamIdNotify.strId"));
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
  // @@protoc_insertion_point(parse_success:LinkCamIdNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamIdNotify)
  return false;
#undef DO_
}

void LinkCamIdNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamIdNotify)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamIdNotify.strId");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strid(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamIdNotify)
}

::google::protobuf::uint8* LinkCamIdNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamIdNotify)
  // string strId = 1;
  if (this->strid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strid().data(), this->strid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamIdNotify.strId");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strid(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamIdNotify)
  return target;
}

size_t LinkCamIdNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamIdNotify)
  size_t total_size = 0;

  // string strId = 1;
  if (this->strid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strid());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamIdNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamIdNotify)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamIdNotify* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamIdNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamIdNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamIdNotify)
    MergeFrom(*source);
  }
}

void LinkCamIdNotify::MergeFrom(const LinkCamIdNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamIdNotify)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strid().size() > 0) {

    strid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strid_);
  }
}

void LinkCamIdNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamIdNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamIdNotify::CopyFrom(const LinkCamIdNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamIdNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamIdNotify::IsInitialized() const {
  return true;
}

void LinkCamIdNotify::Swap(LinkCamIdNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamIdNotify::InternalSwap(LinkCamIdNotify* other) {
  strid_.Swap(&other->strid_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamIdNotify::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[65];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamIdNotify

// string strId = 1;
void LinkCamIdNotify::clear_strid() {
  strid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamIdNotify::strid() const {
  // @@protoc_insertion_point(field_get:LinkCamIdNotify.strId)
  return strid_.GetNoArena();
}
void LinkCamIdNotify::set_strid(const ::std::string& value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamIdNotify.strId)
}
#if LANG_CXX11
void LinkCamIdNotify::set_strid(::std::string&& value) {
  
  strid_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamIdNotify.strId)
}
#endif
void LinkCamIdNotify::set_strid(const char* value) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamIdNotify.strId)
}
void LinkCamIdNotify::set_strid(const char* value, size_t size) {
  
  strid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamIdNotify.strId)
}
::std::string* LinkCamIdNotify::mutable_strid() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamIdNotify.strId)
  return strid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamIdNotify::release_strid() {
  // @@protoc_insertion_point(field_release:LinkCamIdNotify.strId)
  
  return strid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamIdNotify::set_allocated_strid(::std::string* strid) {
  if (strid != NULL) {
    
  } else {
    
  }
  strid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strid);
  // @@protoc_insertion_point(field_set_allocated:LinkCamIdNotify.strId)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkCamSearchedNotify::kStrIpFieldNumber;
const int LinkCamSearchedNotify::kStrPortFieldNumber;
const int LinkCamSearchedNotify::kStrModelFieldNumber;
const int LinkCamSearchedNotify::kStrONVIFAddressFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkCamSearchedNotify::LinkCamSearchedNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkCamSearchedNotify)
}
LinkCamSearchedNotify::LinkCamSearchedNotify(const LinkCamSearchedNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  strip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strip().size() > 0) {
    strip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strip_);
  }
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strport().size() > 0) {
    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  strmodel_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.strmodel().size() > 0) {
    strmodel_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strmodel_);
  }
  stronvifaddress_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.stronvifaddress().size() > 0) {
    stronvifaddress_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stronvifaddress_);
  }
  // @@protoc_insertion_point(copy_constructor:LinkCamSearchedNotify)
}

void LinkCamSearchedNotify::SharedCtor() {
  strip_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strmodel_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stronvifaddress_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

LinkCamSearchedNotify::~LinkCamSearchedNotify() {
  // @@protoc_insertion_point(destructor:LinkCamSearchedNotify)
  SharedDtor();
}

void LinkCamSearchedNotify::SharedDtor() {
  strip_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strmodel_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stronvifaddress_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void LinkCamSearchedNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkCamSearchedNotify::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[66].descriptor;
}

const LinkCamSearchedNotify& LinkCamSearchedNotify::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkCamSearchedNotify* LinkCamSearchedNotify::New(::google::protobuf::Arena* arena) const {
  LinkCamSearchedNotify* n = new LinkCamSearchedNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkCamSearchedNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkCamSearchedNotify)
  strip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  strmodel_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  stronvifaddress_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool LinkCamSearchedNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkCamSearchedNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string strIp = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strip()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strip().data(), this->strip().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamSearchedNotify.strIp"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strPort = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strport()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strport().data(), this->strport().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamSearchedNotify.strPort"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strModel = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_strmodel()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->strmodel().data(), this->strmodel().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamSearchedNotify.strModel"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string strONVIFAddress = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_stronvifaddress()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->stronvifaddress().data(), this->stronvifaddress().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "LinkCamSearchedNotify.strONVIFAddress"));
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
  // @@protoc_insertion_point(parse_success:LinkCamSearchedNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkCamSearchedNotify)
  return false;
#undef DO_
}

void LinkCamSearchedNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkCamSearchedNotify)
  // string strIp = 1;
  if (this->strip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strip().data(), this->strip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strIp");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->strip(), output);
  }

  // string strPort = 2;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strPort");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->strport(), output);
  }

  // string strModel = 3;
  if (this->strmodel().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strmodel().data(), this->strmodel().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strModel");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->strmodel(), output);
  }

  // string strONVIFAddress = 4;
  if (this->stronvifaddress().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stronvifaddress().data(), this->stronvifaddress().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strONVIFAddress");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->stronvifaddress(), output);
  }

  // @@protoc_insertion_point(serialize_end:LinkCamSearchedNotify)
}

::google::protobuf::uint8* LinkCamSearchedNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkCamSearchedNotify)
  // string strIp = 1;
  if (this->strip().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strip().data(), this->strip().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strIp");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->strip(), target);
  }

  // string strPort = 2;
  if (this->strport().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strport().data(), this->strport().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strPort");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->strport(), target);
  }

  // string strModel = 3;
  if (this->strmodel().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->strmodel().data(), this->strmodel().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strModel");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->strmodel(), target);
  }

  // string strONVIFAddress = 4;
  if (this->stronvifaddress().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->stronvifaddress().data(), this->stronvifaddress().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "LinkCamSearchedNotify.strONVIFAddress");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->stronvifaddress(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkCamSearchedNotify)
  return target;
}

size_t LinkCamSearchedNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkCamSearchedNotify)
  size_t total_size = 0;

  // string strIp = 1;
  if (this->strip().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strip());
  }

  // string strPort = 2;
  if (this->strport().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strport());
  }

  // string strModel = 3;
  if (this->strmodel().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->strmodel());
  }

  // string strONVIFAddress = 4;
  if (this->stronvifaddress().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->stronvifaddress());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkCamSearchedNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkCamSearchedNotify)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkCamSearchedNotify* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkCamSearchedNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkCamSearchedNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkCamSearchedNotify)
    MergeFrom(*source);
  }
}

void LinkCamSearchedNotify::MergeFrom(const LinkCamSearchedNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkCamSearchedNotify)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.strip().size() > 0) {

    strip_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strip_);
  }
  if (from.strport().size() > 0) {

    strport_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strport_);
  }
  if (from.strmodel().size() > 0) {

    strmodel_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.strmodel_);
  }
  if (from.stronvifaddress().size() > 0) {

    stronvifaddress_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.stronvifaddress_);
  }
}

void LinkCamSearchedNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkCamSearchedNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkCamSearchedNotify::CopyFrom(const LinkCamSearchedNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkCamSearchedNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkCamSearchedNotify::IsInitialized() const {
  return true;
}

void LinkCamSearchedNotify::Swap(LinkCamSearchedNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkCamSearchedNotify::InternalSwap(LinkCamSearchedNotify* other) {
  strip_.Swap(&other->strip_);
  strport_.Swap(&other->strport_);
  strmodel_.Swap(&other->strmodel_);
  stronvifaddress_.Swap(&other->stronvifaddress_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkCamSearchedNotify::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[66];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkCamSearchedNotify

// string strIp = 1;
void LinkCamSearchedNotify::clear_strip() {
  strip_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamSearchedNotify::strip() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchedNotify.strIp)
  return strip_.GetNoArena();
}
void LinkCamSearchedNotify::set_strip(const ::std::string& value) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamSearchedNotify.strIp)
}
#if LANG_CXX11
void LinkCamSearchedNotify::set_strip(::std::string&& value) {
  
  strip_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamSearchedNotify.strIp)
}
#endif
void LinkCamSearchedNotify::set_strip(const char* value) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamSearchedNotify.strIp)
}
void LinkCamSearchedNotify::set_strip(const char* value, size_t size) {
  
  strip_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamSearchedNotify.strIp)
}
::std::string* LinkCamSearchedNotify::mutable_strip() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamSearchedNotify.strIp)
  return strip_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamSearchedNotify::release_strip() {
  // @@protoc_insertion_point(field_release:LinkCamSearchedNotify.strIp)
  
  return strip_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamSearchedNotify::set_allocated_strip(::std::string* strip) {
  if (strip != NULL) {
    
  } else {
    
  }
  strip_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strip);
  // @@protoc_insertion_point(field_set_allocated:LinkCamSearchedNotify.strIp)
}

// string strPort = 2;
void LinkCamSearchedNotify::clear_strport() {
  strport_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamSearchedNotify::strport() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchedNotify.strPort)
  return strport_.GetNoArena();
}
void LinkCamSearchedNotify::set_strport(const ::std::string& value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamSearchedNotify.strPort)
}
#if LANG_CXX11
void LinkCamSearchedNotify::set_strport(::std::string&& value) {
  
  strport_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamSearchedNotify.strPort)
}
#endif
void LinkCamSearchedNotify::set_strport(const char* value) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamSearchedNotify.strPort)
}
void LinkCamSearchedNotify::set_strport(const char* value, size_t size) {
  
  strport_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamSearchedNotify.strPort)
}
::std::string* LinkCamSearchedNotify::mutable_strport() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamSearchedNotify.strPort)
  return strport_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamSearchedNotify::release_strport() {
  // @@protoc_insertion_point(field_release:LinkCamSearchedNotify.strPort)
  
  return strport_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamSearchedNotify::set_allocated_strport(::std::string* strport) {
  if (strport != NULL) {
    
  } else {
    
  }
  strport_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strport);
  // @@protoc_insertion_point(field_set_allocated:LinkCamSearchedNotify.strPort)
}

// string strModel = 3;
void LinkCamSearchedNotify::clear_strmodel() {
  strmodel_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamSearchedNotify::strmodel() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchedNotify.strModel)
  return strmodel_.GetNoArena();
}
void LinkCamSearchedNotify::set_strmodel(const ::std::string& value) {
  
  strmodel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamSearchedNotify.strModel)
}
#if LANG_CXX11
void LinkCamSearchedNotify::set_strmodel(::std::string&& value) {
  
  strmodel_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamSearchedNotify.strModel)
}
#endif
void LinkCamSearchedNotify::set_strmodel(const char* value) {
  
  strmodel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamSearchedNotify.strModel)
}
void LinkCamSearchedNotify::set_strmodel(const char* value, size_t size) {
  
  strmodel_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamSearchedNotify.strModel)
}
::std::string* LinkCamSearchedNotify::mutable_strmodel() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamSearchedNotify.strModel)
  return strmodel_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamSearchedNotify::release_strmodel() {
  // @@protoc_insertion_point(field_release:LinkCamSearchedNotify.strModel)
  
  return strmodel_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamSearchedNotify::set_allocated_strmodel(::std::string* strmodel) {
  if (strmodel != NULL) {
    
  } else {
    
  }
  strmodel_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), strmodel);
  // @@protoc_insertion_point(field_set_allocated:LinkCamSearchedNotify.strModel)
}

// string strONVIFAddress = 4;
void LinkCamSearchedNotify::clear_stronvifaddress() {
  stronvifaddress_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& LinkCamSearchedNotify::stronvifaddress() const {
  // @@protoc_insertion_point(field_get:LinkCamSearchedNotify.strONVIFAddress)
  return stronvifaddress_.GetNoArena();
}
void LinkCamSearchedNotify::set_stronvifaddress(const ::std::string& value) {
  
  stronvifaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:LinkCamSearchedNotify.strONVIFAddress)
}
#if LANG_CXX11
void LinkCamSearchedNotify::set_stronvifaddress(::std::string&& value) {
  
  stronvifaddress_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:LinkCamSearchedNotify.strONVIFAddress)
}
#endif
void LinkCamSearchedNotify::set_stronvifaddress(const char* value) {
  
  stronvifaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:LinkCamSearchedNotify.strONVIFAddress)
}
void LinkCamSearchedNotify::set_stronvifaddress(const char* value, size_t size) {
  
  stronvifaddress_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:LinkCamSearchedNotify.strONVIFAddress)
}
::std::string* LinkCamSearchedNotify::mutable_stronvifaddress() {
  
  // @@protoc_insertion_point(field_mutable:LinkCamSearchedNotify.strONVIFAddress)
  return stronvifaddress_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* LinkCamSearchedNotify::release_stronvifaddress() {
  // @@protoc_insertion_point(field_release:LinkCamSearchedNotify.strONVIFAddress)
  
  return stronvifaddress_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void LinkCamSearchedNotify::set_allocated_stronvifaddress(::std::string* stronvifaddress) {
  if (stronvifaddress != NULL) {
    
  } else {
    
  }
  stronvifaddress_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stronvifaddress);
  // @@protoc_insertion_point(field_set_allocated:LinkCamSearchedNotify.strONVIFAddress)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int LinkEventNotify::kCEventFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

LinkEventNotify::LinkEventNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_linksystem_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:LinkEventNotify)
}
LinkEventNotify::LinkEventNotify(const LinkEventNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cevent()) {
    cevent_ = new ::VidEvent(*from.cevent_);
  } else {
    cevent_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:LinkEventNotify)
}

void LinkEventNotify::SharedCtor() {
  cevent_ = NULL;
  _cached_size_ = 0;
}

LinkEventNotify::~LinkEventNotify() {
  // @@protoc_insertion_point(destructor:LinkEventNotify)
  SharedDtor();
}

void LinkEventNotify::SharedDtor() {
  if (this != internal_default_instance()) {
    delete cevent_;
  }
}

void LinkEventNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LinkEventNotify::descriptor() {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[67].descriptor;
}

const LinkEventNotify& LinkEventNotify::default_instance() {
  protobuf_linksystem_2eproto::InitDefaults();
  return *internal_default_instance();
}

LinkEventNotify* LinkEventNotify::New(::google::protobuf::Arena* arena) const {
  LinkEventNotify* n = new LinkEventNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void LinkEventNotify::Clear() {
// @@protoc_insertion_point(message_clear_start:LinkEventNotify)
  if (GetArenaNoVirtual() == NULL && cevent_ != NULL) {
    delete cevent_;
  }
  cevent_ = NULL;
}

bool LinkEventNotify::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:LinkEventNotify)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .VidEvent cEvent = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_cevent()));
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
  // @@protoc_insertion_point(parse_success:LinkEventNotify)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:LinkEventNotify)
  return false;
#undef DO_
}

void LinkEventNotify::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:LinkEventNotify)
  // .VidEvent cEvent = 1;
  if (this->has_cevent()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->cevent_, output);
  }

  // @@protoc_insertion_point(serialize_end:LinkEventNotify)
}

::google::protobuf::uint8* LinkEventNotify::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:LinkEventNotify)
  // .VidEvent cEvent = 1;
  if (this->has_cevent()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->cevent_, false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:LinkEventNotify)
  return target;
}

size_t LinkEventNotify::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:LinkEventNotify)
  size_t total_size = 0;

  // .VidEvent cEvent = 1;
  if (this->has_cevent()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->cevent_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void LinkEventNotify::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:LinkEventNotify)
  GOOGLE_DCHECK_NE(&from, this);
  const LinkEventNotify* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const LinkEventNotify>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:LinkEventNotify)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:LinkEventNotify)
    MergeFrom(*source);
  }
}

void LinkEventNotify::MergeFrom(const LinkEventNotify& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:LinkEventNotify)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_cevent()) {
    mutable_cevent()->::VidEvent::MergeFrom(from.cevent());
  }
}

void LinkEventNotify::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:LinkEventNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LinkEventNotify::CopyFrom(const LinkEventNotify& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:LinkEventNotify)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LinkEventNotify::IsInitialized() const {
  return true;
}

void LinkEventNotify::Swap(LinkEventNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void LinkEventNotify::InternalSwap(LinkEventNotify* other) {
  std::swap(cevent_, other->cevent_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata LinkEventNotify::GetMetadata() const {
  protobuf_linksystem_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_linksystem_2eproto::file_level_metadata[67];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// LinkEventNotify

// .VidEvent cEvent = 1;
bool LinkEventNotify::has_cevent() const {
  return this != internal_default_instance() && cevent_ != NULL;
}
void LinkEventNotify::clear_cevent() {
  if (GetArenaNoVirtual() == NULL && cevent_ != NULL) delete cevent_;
  cevent_ = NULL;
}
const ::VidEvent& LinkEventNotify::cevent() const {
  // @@protoc_insertion_point(field_get:LinkEventNotify.cEvent)
  return cevent_ != NULL ? *cevent_
                         : *::VidEvent::internal_default_instance();
}
::VidEvent* LinkEventNotify::mutable_cevent() {
  
  if (cevent_ == NULL) {
    cevent_ = new ::VidEvent;
  }
  // @@protoc_insertion_point(field_mutable:LinkEventNotify.cEvent)
  return cevent_;
}
::VidEvent* LinkEventNotify::release_cevent() {
  // @@protoc_insertion_point(field_release:LinkEventNotify.cEvent)
  
  ::VidEvent* temp = cevent_;
  cevent_ = NULL;
  return temp;
}
void LinkEventNotify::set_allocated_cevent(::VidEvent* cevent) {
  delete cevent_;
  cevent_ = cevent;
  if (cevent) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:LinkEventNotify.cEvent)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
