#ifndef _com_sun_security_sasl_ntlm_FactoryImpl_h_
#define _com_sun_security_sasl_ntlm_FactoryImpl_h_
//$ class com.sun.security.sasl.ntlm.FactoryImpl
//$ extends javax.security.sasl.SaslClientFactory
//$ implements javax.security.sasl.SaslServerFactory

#include <java/lang/Array.h>
#include <javax/security/sasl/SaslClientFactory.h>
#include <javax/security/sasl/SaslServerFactory.h>

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
			class SaslServer;
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace ntlm {

class FactoryImpl : public ::javax::security::sasl::SaslClientFactory, public ::javax::security::sasl::SaslServerFactory {
	$class(FactoryImpl, 0, ::javax::security::sasl::SaslClientFactory, ::javax::security::sasl::SaslServerFactory)
public:
	FactoryImpl();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual ::javax::security::sasl::SaslClient* createSaslClient($StringArray* mechs, $String* authorizationId, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh) override;
	virtual ::javax::security::sasl::SaslServer* createSaslServer($String* mech, $String* protocol, $String* serverName, ::java::util::Map* props, ::javax::security::auth::callback::CallbackHandler* cbh) override;
	virtual $StringArray* getMechanismNames(::java::util::Map* env) override;
	virtual $String* toString() override;
	static $StringArray* myMechs;
	static $ints* mechPolicies;
};

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_ntlm_FactoryImpl_h_