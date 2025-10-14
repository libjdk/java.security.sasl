#include <javax/security/sasl/RealmChoiceCallback.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/callback/ChoiceCallback.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChoiceCallback = ::javax::security::auth::callback::ChoiceCallback;

namespace javax {
	namespace security {
		namespace sasl {

$FieldInfo _RealmChoiceCallback_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(RealmChoiceCallback, serialVersionUID)},
	{}
};

$MethodInfo _RealmChoiceCallback_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;IZ)V", nullptr, $PUBLIC, $method(static_cast<void(RealmChoiceCallback::*)($String*,$StringArray*,int32_t,bool)>(&RealmChoiceCallback::init$))},
	{}
};

$ClassInfo _RealmChoiceCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.sasl.RealmChoiceCallback",
	"javax.security.auth.callback.ChoiceCallback",
	nullptr,
	_RealmChoiceCallback_FieldInfo_,
	_RealmChoiceCallback_MethodInfo_
};

$Object* allocate$RealmChoiceCallback($Class* clazz) {
	return $of($alloc(RealmChoiceCallback));
}

void RealmChoiceCallback::init$($String* prompt, $StringArray* choices, int32_t defaultChoice, bool multiple) {
	$ChoiceCallback::init$(prompt, choices, defaultChoice, multiple);
}

RealmChoiceCallback::RealmChoiceCallback() {
}

$Class* RealmChoiceCallback::load$($String* name, bool initialize) {
	$loadClass(RealmChoiceCallback, name, initialize, &_RealmChoiceCallback_ClassInfo_, allocate$RealmChoiceCallback);
	return class$;
}

$Class* RealmChoiceCallback::class$ = nullptr;

		} // sasl
	} // security
} // javax