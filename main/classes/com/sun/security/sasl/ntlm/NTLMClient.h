#ifndef _com_sun_security_sasl_ntlm_NTLMClient_h_
#define _com_sun_security_sasl_ntlm_NTLMClient_h_
//$ class com.sun.security.sasl.ntlm.NTLMClient
//$ extends javax.security.sasl.SaslClient

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClient.h>

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
				class Client;
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

class NTLMClient : public ::javax::security::sasl::SaslClient {
	$class(NTLMClient, 0, ::javax::security::sasl::SaslClient)
public:
	NTLMClient();
	void init$($String* mech, $String* authzid, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	virtual void dispose() override;
	virtual $bytes* evaluateChallenge($bytes* challenge) override;
	virtual $String* getMechanismName() override;
	virtual $Object* getNegotiatedProperty($String* propName) override;
	virtual bool hasInitialResponse() override;
	virtual bool isComplete() override;
	virtual $bytes* unwrap($bytes* incoming, int32_t offset, int32_t len) override;
	virtual $bytes* wrap($bytes* outgoing, int32_t offset, int32_t len) override;
	static $String* NTLM_VERSION;
	static $String* NTLM_RANDOM;
	static $String* NTLM_DOMAIN;
	static $String* NTLM_HOSTNAME;
	::com::sun::security::ntlm::Client* client = nullptr;
	$String* mech = nullptr;
	::java::util::Random* random = nullptr;
	int32_t step = 0;
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

#endif // _com_sun_security_sasl_ntlm_NTLMClient_h_