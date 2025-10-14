#ifndef _com_sun_security_sasl_CramMD5Server_h_
#define _com_sun_security_sasl_CramMD5Server_h_
//$ class com.sun.security.sasl.CramMD5Server
//$ extends com.sun.security.sasl.CramMD5Base
//$ implements javax.security.sasl.SaslServer

#include <com/sun/security/sasl/CramMD5Base.h>
#include <java/lang/Array.h>
#include <javax/security/sasl/SaslServer.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class CallbackHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class CramMD5Server : public ::com::sun::security::sasl::CramMD5Base, public ::javax::security::sasl::SaslServer {
	$class(CramMD5Server, $NO_CLASS_INIT, ::com::sun::security::sasl::CramMD5Base, ::javax::security::sasl::SaslServer)
public:
	CramMD5Server();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void dispose() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual int32_t hashCode() override;
	void init$($String* protocol, $String* serverFqdn, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	virtual $bytes* evaluateResponse($bytes* responseData) override;
	virtual $String* getAuthorizationID() override;
	virtual bool isComplete() override;
	virtual $String* toString() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) override;
	$String* fqdn = nullptr;
	$bytes* challengeData = nullptr;
	$String* authzid = nullptr;
	::javax::security::auth::callback::CallbackHandler* cbh = nullptr;
};

			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_CramMD5Server_h_