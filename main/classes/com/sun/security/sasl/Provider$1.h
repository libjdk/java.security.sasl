#ifndef _com_sun_security_sasl_Provider$1_h_
#define _com_sun_security_sasl_Provider$1_h_
//$ class com.sun.security.sasl.Provider$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				class Provider;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

class Provider$1 : public ::java::security::PrivilegedAction {
	$class(Provider$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	Provider$1();
	void init$(::com::sun::security::sasl::Provider* this$0, ::com::sun::security::sasl::Provider* val$p);
	virtual $Object* run() override;
	::com::sun::security::sasl::Provider* this$0 = nullptr;
	::com::sun::security::sasl::Provider* val$p = nullptr;
};

			} // sasl
		} // security
	} // sun
} // com

#endif // _com_sun_security_sasl_Provider$1_h_