// Generated by the gRPC protobuf plugin.
// If you make any local change, they will be lost.
// source: faiss_def.proto
#ifndef GRPC_faiss_5fdef_2eproto__INCLUDED
#define GRPC_faiss_5fdef_2eproto__INCLUDED

#include "faiss_def.pb.h"

#include <grpc++/impl/codegen/async_stream.h>
#include <grpc++/impl/codegen/async_unary_call.h>
#include <grpc++/impl/codegen/method_handler_impl.h>
#include <grpc++/impl/codegen/proto_utils.h>
#include <grpc++/impl/codegen/rpc_method.h>
#include <grpc++/impl/codegen/service_type.h>
#include <grpc++/impl/codegen/status.h>
#include <grpc++/impl/codegen/stub_options.h>
#include <grpc++/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class RpcService;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace faiss_server {

class FaissService GRPC_FINAL {
 public:
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status Ping(::grpc::ClientContext* context, const ::faiss_server::PingRequest& request, ::faiss_server::PingResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::PingResponse>> AsyncPing(::grpc::ClientContext* context, const ::faiss_server::PingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::PingResponse>>(AsyncPingRaw(context, request, cq));
    }
    virtual ::grpc::Status DbNew(::grpc::ClientContext* context, const ::faiss_server::DbNewRequest& request, ::faiss_server::EmptyResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>> AsyncDbNew(::grpc::ClientContext* context, const ::faiss_server::DbNewRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>>(AsyncDbNewRaw(context, request, cq));
    }
    virtual ::grpc::Status DbDel(::grpc::ClientContext* context, const ::faiss_server::DbDelRequest& request, ::faiss_server::EmptyResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>> AsyncDbDel(::grpc::ClientContext* context, const ::faiss_server::DbDelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>>(AsyncDbDelRaw(context, request, cq));
    }
    virtual ::grpc::Status DbList(::grpc::ClientContext* context, const ::faiss_server::DbListRequest& request, ::faiss_server::DbListResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::DbListResponse>> AsyncDbList(::grpc::ClientContext* context, const ::faiss_server::DbListRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::DbListResponse>>(AsyncDbListRaw(context, request, cq));
    }
    virtual ::grpc::Status HSet(::grpc::ClientContext* context, const ::faiss_server::HSetRequest& request, ::faiss_server::HSetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HSetResponse>> AsyncHSet(::grpc::ClientContext* context, const ::faiss_server::HSetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HSetResponse>>(AsyncHSetRaw(context, request, cq));
    }
    virtual ::grpc::Status HDel(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::faiss_server::EmptyResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>> AsyncHDel(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>>(AsyncHDelRaw(context, request, cq));
    }
    virtual ::grpc::Status HGet(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::faiss_server::HGetResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HGetResponse>> AsyncHGet(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HGetResponse>>(AsyncHGetRaw(context, request, cq));
    }
    virtual ::grpc::Status HSearch(::grpc::ClientContext* context, const ::faiss_server::HSearchRequest& request, ::faiss_server::HSearchResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HSearchResponse>> AsyncHSearch(::grpc::ClientContext* context, const ::faiss_server::HSearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HSearchResponse>>(AsyncHSearchRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::PingResponse>* AsyncPingRaw(::grpc::ClientContext* context, const ::faiss_server::PingRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>* AsyncDbNewRaw(::grpc::ClientContext* context, const ::faiss_server::DbNewRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>* AsyncDbDelRaw(::grpc::ClientContext* context, const ::faiss_server::DbDelRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::DbListResponse>* AsyncDbListRaw(::grpc::ClientContext* context, const ::faiss_server::DbListRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HSetResponse>* AsyncHSetRaw(::grpc::ClientContext* context, const ::faiss_server::HSetRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::EmptyResponse>* AsyncHDelRaw(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HGetResponse>* AsyncHGetRaw(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::faiss_server::HSearchResponse>* AsyncHSearchRaw(::grpc::ClientContext* context, const ::faiss_server::HSearchRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub GRPC_FINAL : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status Ping(::grpc::ClientContext* context, const ::faiss_server::PingRequest& request, ::faiss_server::PingResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::PingResponse>> AsyncPing(::grpc::ClientContext* context, const ::faiss_server::PingRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::PingResponse>>(AsyncPingRaw(context, request, cq));
    }
    ::grpc::Status DbNew(::grpc::ClientContext* context, const ::faiss_server::DbNewRequest& request, ::faiss_server::EmptyResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>> AsyncDbNew(::grpc::ClientContext* context, const ::faiss_server::DbNewRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>>(AsyncDbNewRaw(context, request, cq));
    }
    ::grpc::Status DbDel(::grpc::ClientContext* context, const ::faiss_server::DbDelRequest& request, ::faiss_server::EmptyResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>> AsyncDbDel(::grpc::ClientContext* context, const ::faiss_server::DbDelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>>(AsyncDbDelRaw(context, request, cq));
    }
    ::grpc::Status DbList(::grpc::ClientContext* context, const ::faiss_server::DbListRequest& request, ::faiss_server::DbListResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::DbListResponse>> AsyncDbList(::grpc::ClientContext* context, const ::faiss_server::DbListRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::DbListResponse>>(AsyncDbListRaw(context, request, cq));
    }
    ::grpc::Status HSet(::grpc::ClientContext* context, const ::faiss_server::HSetRequest& request, ::faiss_server::HSetResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::HSetResponse>> AsyncHSet(::grpc::ClientContext* context, const ::faiss_server::HSetRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::HSetResponse>>(AsyncHSetRaw(context, request, cq));
    }
    ::grpc::Status HDel(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::faiss_server::EmptyResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>> AsyncHDel(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>>(AsyncHDelRaw(context, request, cq));
    }
    ::grpc::Status HGet(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::faiss_server::HGetResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::HGetResponse>> AsyncHGet(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::HGetResponse>>(AsyncHGetRaw(context, request, cq));
    }
    ::grpc::Status HSearch(::grpc::ClientContext* context, const ::faiss_server::HSearchRequest& request, ::faiss_server::HSearchResponse* response) GRPC_OVERRIDE;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::HSearchResponse>> AsyncHSearch(::grpc::ClientContext* context, const ::faiss_server::HSearchRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::faiss_server::HSearchResponse>>(AsyncHSearchRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::PingResponse>* AsyncPingRaw(::grpc::ClientContext* context, const ::faiss_server::PingRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>* AsyncDbNewRaw(::grpc::ClientContext* context, const ::faiss_server::DbNewRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>* AsyncDbDelRaw(::grpc::ClientContext* context, const ::faiss_server::DbDelRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::DbListResponse>* AsyncDbListRaw(::grpc::ClientContext* context, const ::faiss_server::DbListRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::HSetResponse>* AsyncHSetRaw(::grpc::ClientContext* context, const ::faiss_server::HSetRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::EmptyResponse>* AsyncHDelRaw(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::HGetResponse>* AsyncHGetRaw(::grpc::ClientContext* context, const ::faiss_server::HGetDelRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    ::grpc::ClientAsyncResponseReader< ::faiss_server::HSearchResponse>* AsyncHSearchRaw(::grpc::ClientContext* context, const ::faiss_server::HSearchRequest& request, ::grpc::CompletionQueue* cq) GRPC_OVERRIDE;
    const ::grpc::RpcMethod rpcmethod_Ping_;
    const ::grpc::RpcMethod rpcmethod_DbNew_;
    const ::grpc::RpcMethod rpcmethod_DbDel_;
    const ::grpc::RpcMethod rpcmethod_DbList_;
    const ::grpc::RpcMethod rpcmethod_HSet_;
    const ::grpc::RpcMethod rpcmethod_HDel_;
    const ::grpc::RpcMethod rpcmethod_HGet_;
    const ::grpc::RpcMethod rpcmethod_HSearch_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Ping(::grpc::ServerContext* context, const ::faiss_server::PingRequest* request, ::faiss_server::PingResponse* response);
    virtual ::grpc::Status DbNew(::grpc::ServerContext* context, const ::faiss_server::DbNewRequest* request, ::faiss_server::EmptyResponse* response);
    virtual ::grpc::Status DbDel(::grpc::ServerContext* context, const ::faiss_server::DbDelRequest* request, ::faiss_server::EmptyResponse* response);
    virtual ::grpc::Status DbList(::grpc::ServerContext* context, const ::faiss_server::DbListRequest* request, ::faiss_server::DbListResponse* response);
    virtual ::grpc::Status HSet(::grpc::ServerContext* context, const ::faiss_server::HSetRequest* request, ::faiss_server::HSetResponse* response);
    virtual ::grpc::Status HDel(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::EmptyResponse* response);
    virtual ::grpc::Status HGet(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::HGetResponse* response);
    virtual ::grpc::Status HSearch(::grpc::ServerContext* context, const ::faiss_server::HSearchRequest* request, ::faiss_server::HSearchResponse* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_Ping : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_Ping() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Ping() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ping(::grpc::ServerContext* context, const ::faiss_server::PingRequest* request, ::faiss_server::PingResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPing(::grpc::ServerContext* context, ::faiss_server::PingRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::PingResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DbNew : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DbNew() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_DbNew() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DbNew(::grpc::ServerContext* context, const ::faiss_server::DbNewRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDbNew(::grpc::ServerContext* context, ::faiss_server::DbNewRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::EmptyResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DbDel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DbDel() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_DbDel() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DbDel(::grpc::ServerContext* context, const ::faiss_server::DbDelRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDbDel(::grpc::ServerContext* context, ::faiss_server::DbDelRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::EmptyResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_DbList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_DbList() {
      ::grpc::Service::MarkMethodAsync(3);
    }
    ~WithAsyncMethod_DbList() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DbList(::grpc::ServerContext* context, const ::faiss_server::DbListRequest* request, ::faiss_server::DbListResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestDbList(::grpc::ServerContext* context, ::faiss_server::DbListRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::DbListResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(3, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_HSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HSet() {
      ::grpc::Service::MarkMethodAsync(4);
    }
    ~WithAsyncMethod_HSet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HSet(::grpc::ServerContext* context, const ::faiss_server::HSetRequest* request, ::faiss_server::HSetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHSet(::grpc::ServerContext* context, ::faiss_server::HSetRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::HSetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(4, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_HDel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HDel() {
      ::grpc::Service::MarkMethodAsync(5);
    }
    ~WithAsyncMethod_HDel() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HDel(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHDel(::grpc::ServerContext* context, ::faiss_server::HGetDelRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::EmptyResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(5, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_HGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HGet() {
      ::grpc::Service::MarkMethodAsync(6);
    }
    ~WithAsyncMethod_HGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HGet(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::HGetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHGet(::grpc::ServerContext* context, ::faiss_server::HGetDelRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::HGetResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(6, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_HSearch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_HSearch() {
      ::grpc::Service::MarkMethodAsync(7);
    }
    ~WithAsyncMethod_HSearch() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HSearch(::grpc::ServerContext* context, const ::faiss_server::HSearchRequest* request, ::faiss_server::HSearchResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestHSearch(::grpc::ServerContext* context, ::faiss_server::HSearchRequest* request, ::grpc::ServerAsyncResponseWriter< ::faiss_server::HSearchResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(7, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Ping<WithAsyncMethod_DbNew<WithAsyncMethod_DbDel<WithAsyncMethod_DbList<WithAsyncMethod_HSet<WithAsyncMethod_HDel<WithAsyncMethod_HGet<WithAsyncMethod_HSearch<Service > > > > > > > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_Ping : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_Ping() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Ping() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Ping(::grpc::ServerContext* context, const ::faiss_server::PingRequest* request, ::faiss_server::PingResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DbNew : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DbNew() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_DbNew() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DbNew(::grpc::ServerContext* context, const ::faiss_server::DbNewRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DbDel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DbDel() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_DbDel() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DbDel(::grpc::ServerContext* context, const ::faiss_server::DbDelRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_DbList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_DbList() {
      ::grpc::Service::MarkMethodGeneric(3);
    }
    ~WithGenericMethod_DbList() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status DbList(::grpc::ServerContext* context, const ::faiss_server::DbListRequest* request, ::faiss_server::DbListResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_HSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HSet() {
      ::grpc::Service::MarkMethodGeneric(4);
    }
    ~WithGenericMethod_HSet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HSet(::grpc::ServerContext* context, const ::faiss_server::HSetRequest* request, ::faiss_server::HSetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_HDel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HDel() {
      ::grpc::Service::MarkMethodGeneric(5);
    }
    ~WithGenericMethod_HDel() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HDel(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_HGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HGet() {
      ::grpc::Service::MarkMethodGeneric(6);
    }
    ~WithGenericMethod_HGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HGet(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::HGetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_HSearch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_HSearch() {
      ::grpc::Service::MarkMethodGeneric(7);
    }
    ~WithGenericMethod_HSearch() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status HSearch(::grpc::ServerContext* context, const ::faiss_server::HSearchRequest* request, ::faiss_server::HSearchResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_Ping : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_Ping() {
      ::grpc::Service::MarkMethodStreamedUnary(0,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::PingRequest, ::faiss_server::PingResponse>(std::bind(&WithStreamedUnaryMethod_Ping<BaseClass>::StreamedPing, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_Ping() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Ping(::grpc::ServerContext* context, const ::faiss_server::PingRequest* request, ::faiss_server::PingResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPing(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::PingRequest,::faiss_server::PingResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DbNew : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DbNew() {
      ::grpc::Service::MarkMethodStreamedUnary(1,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::DbNewRequest, ::faiss_server::EmptyResponse>(std::bind(&WithStreamedUnaryMethod_DbNew<BaseClass>::StreamedDbNew, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DbNew() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DbNew(::grpc::ServerContext* context, const ::faiss_server::DbNewRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDbNew(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::DbNewRequest,::faiss_server::EmptyResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DbDel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DbDel() {
      ::grpc::Service::MarkMethodStreamedUnary(2,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::DbDelRequest, ::faiss_server::EmptyResponse>(std::bind(&WithStreamedUnaryMethod_DbDel<BaseClass>::StreamedDbDel, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DbDel() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DbDel(::grpc::ServerContext* context, const ::faiss_server::DbDelRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDbDel(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::DbDelRequest,::faiss_server::EmptyResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_DbList : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_DbList() {
      ::grpc::Service::MarkMethodStreamedUnary(3,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::DbListRequest, ::faiss_server::DbListResponse>(std::bind(&WithStreamedUnaryMethod_DbList<BaseClass>::StreamedDbList, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_DbList() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status DbList(::grpc::ServerContext* context, const ::faiss_server::DbListRequest* request, ::faiss_server::DbListResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedDbList(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::DbListRequest,::faiss_server::DbListResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HSet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HSet() {
      ::grpc::Service::MarkMethodStreamedUnary(4,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::HSetRequest, ::faiss_server::HSetResponse>(std::bind(&WithStreamedUnaryMethod_HSet<BaseClass>::StreamedHSet, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HSet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HSet(::grpc::ServerContext* context, const ::faiss_server::HSetRequest* request, ::faiss_server::HSetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHSet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::HSetRequest,::faiss_server::HSetResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HDel : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HDel() {
      ::grpc::Service::MarkMethodStreamedUnary(5,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::HGetDelRequest, ::faiss_server::EmptyResponse>(std::bind(&WithStreamedUnaryMethod_HDel<BaseClass>::StreamedHDel, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HDel() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HDel(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::EmptyResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHDel(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::HGetDelRequest,::faiss_server::EmptyResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HGet : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HGet() {
      ::grpc::Service::MarkMethodStreamedUnary(6,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::HGetDelRequest, ::faiss_server::HGetResponse>(std::bind(&WithStreamedUnaryMethod_HGet<BaseClass>::StreamedHGet, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HGet() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HGet(::grpc::ServerContext* context, const ::faiss_server::HGetDelRequest* request, ::faiss_server::HGetResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHGet(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::HGetDelRequest,::faiss_server::HGetResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_HSearch : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_HSearch() {
      ::grpc::Service::MarkMethodStreamedUnary(7,
        new ::grpc::StreamedUnaryHandler< ::faiss_server::HSearchRequest, ::faiss_server::HSearchResponse>(std::bind(&WithStreamedUnaryMethod_HSearch<BaseClass>::StreamedHSearch, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_HSearch() GRPC_OVERRIDE {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status HSearch(::grpc::ServerContext* context, const ::faiss_server::HSearchRequest* request, ::faiss_server::HSearchResponse* response) GRPC_FINAL GRPC_OVERRIDE {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedHSearch(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::faiss_server::HSearchRequest,::faiss_server::HSearchResponse>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_Ping<WithStreamedUnaryMethod_DbNew<WithStreamedUnaryMethod_DbDel<WithStreamedUnaryMethod_DbList<WithStreamedUnaryMethod_HSet<WithStreamedUnaryMethod_HDel<WithStreamedUnaryMethod_HGet<WithStreamedUnaryMethod_HSearch<Service > > > > > > > > StreamedUnaryService;
};

}  // namespace faiss_server


#endif  // GRPC_faiss_5fdef_2eproto__INCLUDED
