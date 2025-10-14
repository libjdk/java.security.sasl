#ifndef _com_sun_security_sasl_ServerFactoryImpl_h_
#define _com_sun_security_sasl_ServerFactoryImpl_h_
//$ class com.sun.security.sasl.ServerFactoryImpl
//$ extends javax.security.sasl.SaslServerFactory

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslServerFactory.h>

#pragma push_macro("CRAMMD5")
#undef CRAMMD5

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
			class SaslServer;
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class ServerFactoryImpl : public ::javax::security::sasl::SaslServerFactory {
	$class(ServerFactoryImpl, 0, ::javax::security::sasl::SaslServerFactory)
public:
	ServerFactoryImpl();
	void init$();
	virtual ::javax::security::sasl::SaslServer* createSaslServer($String* mech, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh) override;
	virtual $StringArray* getMechanismNames(::java::util::Map* props) override;
	static $StringArray* myMechs;
	static $ints* mechPolicies;
	static const int32_t CRAMMD5 = 0;
};

			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("CRAMMD5")

#endif // _com_sun_security_sasl_ServerFactoryImpl_h_