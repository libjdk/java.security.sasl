#ifndef _javax_security_sasl_SaslServerFactory_h_
#define _javax_security_sasl_SaslServerFactory_h_
//$ interface javax.security.sasl.SaslServerFactory
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
			class SaslServer;
		}
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class $import SaslServerFactory : public ::java::lang::Object {
	$interface(SaslServerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::security::sasl::SaslServer* createSaslServer($String* mechanism, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh) {return nullptr;}
	virtual $StringArray* getMechanismNames(::java::util::Map* props) {return nullptr;}
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_SaslServerFactory_h_