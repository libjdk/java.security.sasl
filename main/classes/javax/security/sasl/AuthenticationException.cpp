#include <javax/security/sasl/AuthenticationException.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SaslException = ::javax::security::sasl::SaslException;

namespace javax {
	namespace security {
		namespace sasl {

$FieldInfo _AuthenticationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AuthenticationException, serialVersionUID)},
	{}
};

$MethodInfo _AuthenticationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AuthenticationException::*)()>(&AuthenticationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthenticationException::*)($String*)>(&AuthenticationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(AuthenticationException::*)($String*,$Throwable*)>(&AuthenticationException::init$))},
	{}
};

$ClassInfo _AuthenticationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.sasl.AuthenticationException",
	"javax.security.sasl.SaslException",
	nullptr,
	_AuthenticationException_FieldInfo_,
	_AuthenticationException_MethodInfo_
};

$Object* allocate$AuthenticationException($Class* clazz) {
	return $of($alloc(AuthenticationException));
}

void AuthenticationException::init$() {
	$SaslException::init$();
}

void AuthenticationException::init$($String* detail) {
	$SaslException::init$(detail);
}

void AuthenticationException::init$($String* detail, $Throwable* ex) {
	$SaslException::init$(detail, ex);
}

AuthenticationException::AuthenticationException() {
}

AuthenticationException::AuthenticationException(const AuthenticationException& e) {
}

AuthenticationException AuthenticationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AuthenticationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AuthenticationException::load$($String* name, bool initialize) {
	$loadClass(AuthenticationException, name, initialize, &_AuthenticationException_ClassInfo_, allocate$AuthenticationException);
	return class$;
}

$Class* AuthenticationException::class$ = nullptr;

		} // sasl
	} // security
} // javax