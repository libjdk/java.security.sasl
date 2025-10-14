#ifndef _com_sun_security_sasl_Provider$ProviderService_h_
#define _com_sun_security_sasl_Provider$ProviderService_h_
//$ class com.sun.security.sasl.Provider$ProviderService
//$ extends java.security.Provider$Service

#include <java/security/Provider$Service.h>

namespace java {
	namespace security {
		class Provider;
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class Provider$ProviderService : public ::java::security::Provider$Service {
	$class(Provider$ProviderService, $NO_CLASS_INIT, ::java::security::Provider$Service)
public:
	Provider$ProviderService();
	void init$(::java::security::Provider* p, $String* type, $String* algo, $String* cn);
	virtual $Object* newInstance(Object$* ctrParamObj) override;
};

			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_Provider$ProviderService_h_