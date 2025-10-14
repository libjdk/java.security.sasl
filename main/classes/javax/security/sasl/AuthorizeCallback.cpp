#include <javax/security/sasl/AuthorizeCallback.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/auth/callback/Callback.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Callback = ::javax::security::auth::callback::Callback;

namespace javax {
	namespace security {
		namespace sasl {

$FieldInfo _AuthorizeCallback_FieldInfo_[] = {
	{"authenticationID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AuthorizeCallback, authenticationID)},
	{"authorizationID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AuthorizeCallback, authorizationID)},
	{"authorizedID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(AuthorizeCallback, authorizedID)},
	{"authorized", "Z", nullptr, $PRIVATE, $field(AuthorizeCallback, authorized)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthorizeCallback, serialVersionUID)},
	{}
};

$MethodInfo _AuthorizeCallback_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthorizeCallback::*)($String*,$String*)>(&AuthorizeCallback::init$))},
	{"getAuthenticationID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAuthorizationID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAuthorizedID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isAuthorized", "()Z", nullptr, $PUBLIC},
	{"setAuthorized", "(Z)V", nullptr, $PUBLIC},
	{"setAuthorizedID", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AuthorizeCallback_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.sasl.AuthorizeCallback",
	"java.lang.Object",
	"javax.security.auth.callback.Callback,java.io.Serializable",
	_AuthorizeCallback_FieldInfo_,
	_AuthorizeCallback_MethodInfo_
};

$Object* allocate$AuthorizeCallback($Class* clazz) {
	return $of($alloc(AuthorizeCallback));
}

int32_t AuthorizeCallback::hashCode() {
	 return this->$Callback::hashCode();
}

bool AuthorizeCallback::equals(Object$* arg0) {
	 return this->$Callback::equals(arg0);
}

$Object* AuthorizeCallback::clone() {
	 return this->$Callback::clone();
}

$String* AuthorizeCallback::toString() {
	 return this->$Callback::toString();
}

void AuthorizeCallback::finalize() {
	this->$Callback::finalize();
}

void AuthorizeCallback::init$($String* authnID, $String* authzID) {
	$set(this, authenticationID, authnID);
	$set(this, authorizationID, authzID);
}

$String* AuthorizeCallback::getAuthenticationID() {
	return this->authenticationID;
}

$String* AuthorizeCallback::getAuthorizationID() {
	return this->authorizationID;
}

bool AuthorizeCallback::isAuthorized() {
	return this->authorized;
}

void AuthorizeCallback::setAuthorized(bool ok) {
	this->authorized = ok;
}

$String* AuthorizeCallback::getAuthorizedID() {
	if (!this->authorized) {
		return nullptr;
	}
	return (this->authorizedID == nullptr) ? this->authorizationID : this->authorizedID;
}

void AuthorizeCallback::setAuthorizedID($String* id) {
	$set(this, authorizedID, id);
}

AuthorizeCallback::AuthorizeCallback() {
}

$Class* AuthorizeCallback::load$($String* name, bool initialize) {
	$loadClass(AuthorizeCallback, name, initialize, &_AuthorizeCallback_ClassInfo_, allocate$AuthorizeCallback);
	return class$;
}

$Class* AuthorizeCallback::class$ = nullptr;

		} // sasl
	} // security
} // javax