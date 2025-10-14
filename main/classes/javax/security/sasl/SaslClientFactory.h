#ifndef _javax_security_sasl_SaslClientFactory_h_
#define _javax_security_sasl_SaslClientFactory_h_
//$ interface javax.security.sasl.SaslClientFactory
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

namespace javax {
	namespace security {
		namespace sasl {

class $export SaslClientFactory : public ::java::lang::Object {
	$interface(SaslClientFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::security::sasl::SaslClient* createSaslClient($StringArray* mechanisms, $String* authorizationId, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh) {return nullptr;}
	virtual $StringArray* getMechanismNames(::java::util::Map* props) {return nullptr;}
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_SaslClientFactory_h_