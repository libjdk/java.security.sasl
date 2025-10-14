#ifndef _javax_security_sasl_RealmCallback_h_
#define _javax_security_sasl_RealmCallback_h_
//$ class javax.security.sasl.RealmCallback
//$ extends javax.security.auth.callback.TextInputCallback

#include <javax/security/auth/callback/TextInputCallback.h>

namespace javax {
	namespace security {
		namespace sasl {

class $export RealmCallback : public ::javax::security::auth::callback::TextInputCallback {
	$class(RealmCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::TextInputCallback)
public:
	RealmCallback();
	void init$($String* prompt);
	void init$($String* prompt, $String* defaultRealmInfo);
	static const int64_t serialVersionUID = (int64_t)0xC3BBB99209F28CF4;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_RealmCallback_h_