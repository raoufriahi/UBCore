/* soapReplayBindingService.h
   Generated by gSOAP 2.7.17 from onvif.h
   Copyright(C) 2000-2010, Robert van Engelen, Genivia Inc. All Rights Reserved.
   This part of the software is released under one of the following licenses:
   GPL, the gSOAP public license, or Genivia's license for commercial use.
*/

#ifndef soapReplayBindingService_H
#define soapReplayBindingService_H
#include "soapH.h"
class SOAP_CMAC ReplayBindingService : public soap
{ public:
	/// Constructor
	ReplayBindingService();
	/// Constructor with copy of another engine state
	ReplayBindingService(const struct soap&);
	/// Constructor with engine input+output mode control
	ReplayBindingService(soap_mode iomode);
	/// Constructor with engine input and output mode control
	ReplayBindingService(soap_mode imode, soap_mode omode);
	/// Destructor, also frees all deserialized data
	virtual ~ReplayBindingService();
	/// Delete all deserialized data (uses soap_destroy and soap_end)
	virtual	void destroy();
	/// Initializer used by constructor
	virtual	void ReplayBindingService_init(soap_mode imode, soap_mode omode);
	/// Create a copy
	virtual	ReplayBindingService *copy();
	/// Force close connection (normally automatic)
	virtual	int soap_close_socket();
	/// Return sender-related fault to sender
	virtual	int soap_senderfault(const char *string, const char *detailXML);
	/// Return sender-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Return receiver-related fault to sender
	virtual	int soap_receiverfault(const char *string, const char *detailXML);
	/// Return receiver-related fault with SOAP 1.2 subcode to sender
	virtual	int soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML);
	/// Print fault
	virtual	void soap_print_fault(FILE*);
#ifndef WITH_LEAN
	/// Print fault to stream
	virtual	void soap_stream_fault(std::ostream&);
	/// Put fault into buffer
	virtual	char *soap_sprint_fault(char *buf, size_t len);
#endif
	/// Disables and removes SOAP Header from message
	virtual	void soap_noheader();
	/// Put SOAP Header in message
	virtual	void soap_header(char *wsa__MessageID, struct wsa__Relationship *wsa__RelatesTo, struct wsa__EndpointReferenceType *wsa__From, struct wsa__EndpointReferenceType *wsa__ReplyTo, struct wsa__EndpointReferenceType *wsa__FaultTo, char *wsa__To, char *wsa__Action, struct _wsse__Security *wsse__Security, char *wsa5__MessageID, struct wsa5__RelatesToType *wsa5__RelatesTo, struct wsa5__EndpointReferenceType *wsa5__From, struct wsa5__EndpointReferenceType *wsa5__ReplyTo, struct wsa5__EndpointReferenceType *wsa5__FaultTo, char *wsa5__To, char *wsa5__Action);
	/// Get SOAP Header structure (NULL when absent)
	virtual	const SOAP_ENV__Header *soap_header();
	/// Run simple single-thread iterative service on port until a connection error occurs (returns error code or SOAP_OK), use this->bind_flag = SO_REUSEADDR to rebind for a rerun
	virtual	int run(int port);
	/// Bind service to port (returns master socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET bind(const char *host, int port, int backlog);
	/// Accept next request (returns socket or SOAP_INVALID_SOCKET)
	virtual	SOAP_SOCKET accept();
	/// Serve this request (returns error code or SOAP_OK)
	virtual	int serve();
	/// Used by serve() to dispatch a request (returns error code or SOAP_OK)
	virtual	int dispatch();

	///
	/// Service operations (you should define these):
	///

	/// Web service operation 'GetServiceCapabilities' (returns error code or SOAP_OK)
	virtual	int GetServiceCapabilities(_trp__GetServiceCapabilities *trp__GetServiceCapabilities, _trp__GetServiceCapabilitiesResponse *trp__GetServiceCapabilitiesResponse){return SOAP_OK;};

	/// Web service operation 'GetReplayUri' (returns error code or SOAP_OK)
	virtual	int GetReplayUri(_trp__GetReplayUri *trp__GetReplayUri, _trp__GetReplayUriResponse *trp__GetReplayUriResponse){return SOAP_OK;};

	/// Web service operation 'GetReplayConfiguration' (returns error code or SOAP_OK)
	virtual	int GetReplayConfiguration(_trp__GetReplayConfiguration *trp__GetReplayConfiguration, _trp__GetReplayConfigurationResponse *trp__GetReplayConfigurationResponse){return SOAP_OK;};

	/// Web service operation 'SetReplayConfiguration' (returns error code or SOAP_OK)
	virtual	int SetReplayConfiguration(_trp__SetReplayConfiguration *trp__SetReplayConfiguration, _trp__SetReplayConfigurationResponse *trp__SetReplayConfigurationResponse){return SOAP_OK;};
};
#endif
