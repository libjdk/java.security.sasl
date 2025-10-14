#include <javax/security/sasl/SaslException.h>

#include <java/io/IOException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace security {
		namespace sasl {

$FieldInfo _SaslException_FieldInfo_[] = {
	{"_exception", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(SaslException, _exception)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SaslException, serialVersionUID)},
	{}
};

$MethodInfo _SaslException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SaslException::*)()>(&SaslException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SaslException::*)($String*)>(&SaslException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(SaslException::*)($String*,$Throwable*)>(&SaslException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SaslException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.sasl.SaslException",
	"java.io.IOException",
	nullptr,
	_SaslException_FieldInfo_,
	_SaslException_MethodInfo_
};

$Object* allocate$SaslException($Class* clazz) {
	return $of($alloc(SaslException));
}

void SaslException::init$() {
	$IOException::init$();
}

void SaslException::init$($String* detail) {
	$IOException::init$(detail);
}

void SaslException::init$($String* detail, $Throwable* ex) {
	$IOException::init$(detail);
	if (ex != nullptr) {
		initCause(ex);
	}
}

$Throwable* SaslException::getCause() {
	return this->_exception;
}

$Throwable* SaslException::initCause($Throwable* cause) {
	$IOException::initCause(cause);
	$set(this, _exception, cause);
	return this;
}

$String* SaslException::toString() {
	$var($String, answer, $IOException::toString());
	if (this->_exception != nullptr && !$equals(this->_exception, this)) {
		$plusAssign(answer, $$str({" [Caused by "_s, $($nc(this->_exception)->toString()), "]"_s}));
	}
	return answer;
}

SaslException::SaslException() {
}

SaslException::SaslException(const SaslException& e) {
}

SaslException SaslException::wrapper$() {
	$pendingException(this);
	return *this;
}

void SaslException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* SaslException::load$($String* name, bool initialize) {
	$loadClass(SaslException, name, initialize, &_SaslException_ClassInfo_, allocate$SaslException);
	return class$;
}

$Class* SaslException::class$ = nullptr;

		} // sasl
	} // security
} // javax