#ifndef _com_sun_security_sasl_Provider_h_
#define _com_sun_security_sasl_Provider_h_
//$ class com.sun.security.sasl.Provider
//$ extends java.security.Provider

#include <java/security/Provider.h>

namespace java {
	namespace security {
		class Provider$Service;
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class Provider : public ::java::security::Provider {
	$class(Provider, 0, ::java::security::Provider)
public:
	Provider();
	using ::java::security::Provider::getProperty;
	void init$();
	static void access$000(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$100(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$200(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$300(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$400(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$500(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$600(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	static void access$700(::com::sun::security::sasl::Provider* x0, ::java::security::Provider$Service* x1);
	using ::java::security::Provider::load;
	static const int64_t serialVersionUID = (int64_t)0x77A9A00C5A10DA41;
	static $String* info;
};

			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_Provider_h_