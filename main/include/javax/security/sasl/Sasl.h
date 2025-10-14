#ifndef _javax_security_sasl_Sasl_h_
#define _javax_security_sasl_Sasl_h_
//$ class javax.security.sasl.Sasl
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BOUND_SERVER_NAME")
#undef BOUND_SERVER_NAME
#pragma push_macro("CREDENTIALS")
#undef CREDENTIALS
#pragma push_macro("MAX_BUFFER")
#undef MAX_BUFFER
#pragma push_macro("POLICY_FORWARD_SECRECY")
#undef POLICY_FORWARD_SECRECY
#pragma push_macro("POLICY_NOACTIVE")
#undef POLICY_NOACTIVE
#pragma push_macro("POLICY_NOANONYMOUS")
#undef POLICY_NOANONYMOUS
#pragma push_macro("POLICY_NODICTIONARY")
#undef POLICY_NODICTIONARY
#pragma push_macro("POLICY_NOPLAINTEXT")
#undef POLICY_NOPLAINTEXT
#pragma push_macro("POLICY_PASS_CREDENTIALS")
#undef POLICY_PASS_CREDENTIALS
#pragma push_macro("QOP")
#undef QOP
#pragma push_macro("RAW_SEND_SIZE")
#undef RAW_SEND_SIZE
#pragma push_macro("REUSE")
#undef REUSE
#pragma push_macro("SASL_LOGGER_NAME")
#undef SASL_LOGGER_NAME
#pragma push_macro("SERVER_AUTH")
#undef SERVER_AUTH
#pragma push_macro("STRENGTH")
#undef STRENGTH

namespace java {
	namespace security {
		class Provider$Service;
	}
}
namespace java {
	namespace util {
		class Enumeration;
		class List;
		class Map;
		class Set;
	}
}
namespace java {
	namespace util {
		namespace logging {
			class Logger;
		}
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
			class SaslServer;
		}
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class $import Sasl : public ::java::lang::Object {
	$class(Sasl, 0, ::java::lang::Object)
public:
	Sasl();
	void init$();
	static ::javax::security::sasl::SaslClient* createSaslClient($StringArray* mechanisms, $String* authorizationId, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	static ::javax::security::sasl::SaslServer* createSaslServer($String* mechanism, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh);
	static ::java::util::Set* getFactories($String* serviceName);
	static ::java::util::Enumeration* getSaslClientFactories();
	static ::java::util::Enumeration* getSaslServerFactories();
	static bool isDisabled($String* name);
	static $String* lambda$static$0();
	static $Object* loadFactory(::java::security::Provider$Service* service);
	static ::java::util::List* disabledMechanisms;
	static $String* SASL_LOGGER_NAME;
	static ::java::util::logging::Logger* logger;
	static $String* QOP;
	static $String* STRENGTH;
	static $String* SERVER_AUTH;
	static $String* BOUND_SERVER_NAME;
	static $String* MAX_BUFFER;
	static $String* RAW_SEND_SIZE;
	static $String* REUSE;
	static $String* POLICY_NOPLAINTEXT;
	static $String* POLICY_NOACTIVE;
	static $String* POLICY_NODICTIONARY;
	static $String* POLICY_NOANONYMOUS;
	static $String* POLICY_FORWARD_SECRECY;
	static $String* POLICY_PASS_CREDENTIALS;
	static $String* CREDENTIALS;
};

		} // sasl
	} // security
} // javax

#pragma pop_macro("BOUND_SERVER_NAME")
#pragma pop_macro("CREDENTIALS")
#pragma pop_macro("MAX_BUFFER")
#pragma pop_macro("POLICY_FORWARD_SECRECY")
#pragma pop_macro("POLICY_NOACTIVE")
#pragma pop_macro("POLICY_NOANONYMOUS")
#pragma pop_macro("POLICY_NODICTIONARY")
#pragma pop_macro("POLICY_NOPLAINTEXT")
#pragma pop_macro("POLICY_PASS_CREDENTIALS")
#pragma pop_macro("QOP")
#pragma pop_macro("RAW_SEND_SIZE")
#pragma pop_macro("REUSE")
#pragma pop_macro("SASL_LOGGER_NAME")
#pragma pop_macro("SERVER_AUTH")
#pragma pop_macro("STRENGTH")

#endif // _javax_security_sasl_Sasl_h_