#ifndef _com_sun_security_sasl_ntlm_NTLMServer_h_
#define _com_sun_security_sasl_ntlm_NTLMServer_h_
//$ class com.sun.security.sasl.ntlm.NTLMServer
//$ extends javax.security.sasl.SaslServer

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslServer.h>

#pragma push_macro("NTLM_DOMAIN")
#undef NTLM_DOMAIN
#pragma push_macro("NTLM_HOSTNAME")
#undef NTLM_HOSTNAME
#pragma push_macro("NTLM_RANDOM")
#undef NTLM_RANDOM
#pragma push_macro("NTLM_VERSION")
#undef NTLM_VERSION

namespace com {
	namespace sun {
		namespace security {
			namespace ntlm {
				class Server;
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
		class Random;
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
				namespace ntlm {

class NTLMServer : public ::javax::security::sasl::SaslServer {
	$class(NTLMServer, 0, ::javax::security::sasl::SaslServer)
public:
	NTLMServer();
	void init$($String* mech, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	virtual void dispose() override;
	virtual $bytes* evaluateResponse($bytes* response) override;
	virtual $String* getAuthorizationID() override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual bool isComplete() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) override;
	static $String* NTLM_VERSION;
	static $String* NTLM_DOMAIN;
	static $String* NTLM_HOSTNAME;
	static $String* NTLM_RANDOM;
	::java::util::Random* random = nullptr;
	::com::sun::security::ntlm::Server* server = nullptr;
	$bytes* nonce = nullptr;
	int32_t step = 0;
	$String* authzId = nullptr;
	$String* mech = nullptr;
	$String* hostname = nullptr;
	$String* target = nullptr;
};

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("NTLM_DOMAIN")
#pragma pop_macro("NTLM_HOSTNAME")
#pragma pop_macro("NTLM_RANDOM")
#pragma pop_macro("NTLM_VERSION")

#endif // _com_sun_security_sasl_ntlm_NTLMServer_h_