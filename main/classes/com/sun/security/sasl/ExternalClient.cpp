#include <com/sun/security/sasl/ExternalClient.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _ExternalClient_FieldInfo_[] = {
	{"username", "[B", nullptr, $PRIVATE, $field(ExternalClient, username)},
	{"completed", "Z", nullptr, $PRIVATE, $field(ExternalClient, completed)},
	{}
};

$MethodInfo _ExternalClient_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(ExternalClient::*)($String*)>(&ExternalClient::init$))},
	{"dispose", "()V", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _ExternalClient_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.ExternalClient",
	"java.lang.Object",
	"javax.security.sasl.SaslClient",
	_ExternalClient_FieldInfo_,
	_ExternalClient_MethodInfo_
};

$Object* allocate$ExternalClient($Class* clazz) {
	return $of($alloc(ExternalClient));
}

void ExternalClient::init$($String* authorizationID) {
	this->completed = false;
	if (authorizationID != nullptr) {
		$init($StandardCharsets);
		$set(this, username, authorizationID->getBytes($StandardCharsets::UTF_8));
	} else {
		$set(this, username, $new($bytes, 0));
	}
}

$String* ExternalClient::getMechanismName() {
	return "EXTERNAL"_s;
}

bool ExternalClient::hasInitialResponse() {
	return true;
}

void ExternalClient::dispose() {
}

$bytes* ExternalClient::evaluateChallenge($bytes* challengeData) {
	if (this->completed) {
		$throwNew($IllegalStateException, "EXTERNAL authentication already completed"_s);
	}
	this->completed = true;
	return this->username;
}

bool ExternalClient::isComplete() {
	return this->completed;
}

$bytes* ExternalClient::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($SaslException, "EXTERNAL has no supported QOP"_s);
	} else {
		$throwNew($IllegalStateException, "EXTERNAL authentication Not completed"_s);
	}
	$shouldNotReachHere();
}

$bytes* ExternalClient::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($SaslException, "EXTERNAL has no supported QOP"_s);
	} else {
		$throwNew($IllegalStateException, "EXTERNAL authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$Object* ExternalClient::getNegotiatedProperty($String* propName) {
	if (this->completed) {
		return $of(nullptr);
	} else {
		$throwNew($IllegalStateException, "EXTERNAL authentication not completed"_s);
	}
}

ExternalClient::ExternalClient() {
}

$Class* ExternalClient::load$($String* name, bool initialize) {
	$loadClass(ExternalClient, name, initialize, &_ExternalClient_ClassInfo_, allocate$ExternalClient);
	return class$;
}

$Class* ExternalClient::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com