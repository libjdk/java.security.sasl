#ifndef _javax_security_sasl_RealmChoiceCallback_h_
#define _javax_security_sasl_RealmChoiceCallback_h_
//$ class javax.security.sasl.RealmChoiceCallback
//$ extends javax.security.auth.callback.ChoiceCallback

#include <java/lang/Array.h>
#include <javax/security/auth/callback/ChoiceCallback.h>

namespace javax {
	namespace security {
		namespace sasl {

class $import RealmChoiceCallback : public ::javax::security::auth::callback::ChoiceCallback {
	$class(RealmChoiceCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::ChoiceCallback)
public:
	RealmChoiceCallback();
	void init$($String* prompt, $StringArray* choices, int32_t defaultChoice, bool multiple);
	static const int64_t serialVersionUID = (int64_t)0x88D0CAF1F52C5D8C;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_RealmChoiceCallback_h_