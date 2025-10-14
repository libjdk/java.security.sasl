#ifndef _com_sun_security_sasl_ClientFactoryImpl_h_
#define _com_sun_security_sasl_ClientFactoryImpl_h_
//$ class com.sun.security.sasl.ClientFactoryImpl
//$ extends javax.security.sasl.SaslClientFactory

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClientFactory.h>

#pragma push_macro("CRAMMD5")
#undef CRAMMD5
#pragma push_macro("EXTERNAL")
#undef EXTERNAL
#pragma push_macro("PLAIN")
#undef PLAIN

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
namespace javax {
	namespace security {
		namespace sasl {
			class SaslClient;
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class ClientFactoryImpl : public ::javax::security::sasl::SaslClientFactory {
	$class(ClientFactoryImpl, 0, ::javax::security::sasl::SaslClientFactory)
public:
	ClientFactoryImpl();
	void init$();
	virtual ::javax::security::sasl::SaslClient* createSaslClient($StringArray* mechs, $String* authorizationId, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh) override;
	virtual $StringArray* getMechanismNames(::java::util::Map* props) override;
	$ObjectArray* getUserInfo($String* prefix, $String* authorizationId, ::javax::security::auth::callback::CallbackHandler* cbh);
	static $StringArray* myMechs;
	static $ints* mechPolicies;
	static const int32_t EXTERNAL = 0;
	static const int32_t CRAMMD5 = 1;
	static const int32_t PLAIN = 2;
};

			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("CRAMMD5")
#pragma pop_macro("EXTERNAL")
#pragma pop_macro("PLAIN")

#endif // _com_sun_security_sasl_ClientFactoryImpl_h_