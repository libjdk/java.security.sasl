#include <com/sun/security/sasl/PlainClient.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef QOP
#undef SEP
#undef UTF_8

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _PlainClient_FieldInfo_[] = {
	{"completed", "Z", nullptr, $PRIVATE, $field(PlainClient, completed)},
	{"pw", "[B", nullptr, $PRIVATE, $field(PlainClient, pw)},
	{"authorizationID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PlainClient, authorizationID)},
	{"authenticationID", "Ljava/lang/String;", nullptr, $PRIVATE, $field(PlainClient, authenticationID)},
	{"SEP", "B", nullptr, $PRIVATE | $STATIC, $staticField(PlainClient, SEP)},
	{}
};

$MethodInfo _PlainClient_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, 0, $method(static_cast<void(PlainClient::*)($String*,$String*,$bytes*)>(&PlainClient::init$)), "javax.security.sasl.SaslException"},
	{"clearPassword", "()V", nullptr, $PRIVATE, $method(static_cast<void(PlainClient::*)()>(&PlainClient::clearPassword))},
	{"dispose", "()V", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _PlainClient_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.PlainClient",
	"java.lang.Object",
	"javax.security.sasl.SaslClient",
	_PlainClient_FieldInfo_,
	_PlainClient_MethodInfo_
};

$Object* allocate$PlainClient($Class* clazz) {
	return $of($alloc(PlainClient));
}

int8_t PlainClient::SEP = 0;

void PlainClient::init$($String* authorizationID, $String* authenticationID, $bytes* pw) {
	this->completed = false;
	if (authenticationID == nullptr || pw == nullptr) {
		$throwNew($SaslException, "PLAIN: authorization ID and password must be specified"_s);
	}
	$set(this, authorizationID, authorizationID);
	$set(this, authenticationID, authenticationID);
	$set(this, pw, pw);
}

$String* PlainClient::getMechanismName() {
	return "PLAIN"_s;
}

bool PlainClient::hasInitialResponse() {
	return true;
}

void PlainClient::dispose() {
	clearPassword();
}

$bytes* PlainClient::evaluateChallenge($bytes* challengeData) {
	$useLocalCurrentObjectStackCache();
	if (this->completed) {
		$throwNew($IllegalStateException, "PLAIN authentication already completed"_s);
	}
	this->completed = true;
	$init($StandardCharsets);
	$var($bytes, authz, (this->authorizationID != nullptr) ? $nc(this->authorizationID)->getBytes($StandardCharsets::UTF_8) : ($bytes*)nullptr);
	$var($bytes, auth, $nc(this->authenticationID)->getBytes($StandardCharsets::UTF_8));
	$var($bytes, answer, $new($bytes, $nc(this->pw)->length + auth->length + 2 + (authz == nullptr ? 0 : $nc(authz)->length)));
	int32_t pos = 0;
	if (authz != nullptr) {
		$System::arraycopy(authz, 0, answer, 0, authz->length);
		pos = authz->length;
	}
	answer->set(pos++, PlainClient::SEP);
	$System::arraycopy(auth, 0, answer, pos, auth->length);
	pos += auth->length;
	answer->set(pos++, PlainClient::SEP);
	$System::arraycopy(this->pw, 0, answer, pos, $nc(this->pw)->length);
	clearPassword();
	return answer;
}

bool PlainClient::isComplete() {
	return this->completed;
}

$bytes* PlainClient::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($SaslException, "PLAIN supports neither integrity nor privacy"_s);
	} else {
		$throwNew($IllegalStateException, "PLAIN authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$bytes* PlainClient::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($SaslException, "PLAIN supports neither integrity nor privacy"_s);
	} else {
		$throwNew($IllegalStateException, "PLAIN authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$Object* PlainClient::getNegotiatedProperty($String* propName) {
	if (this->completed) {
		$init($Sasl);
		if ($nc(propName)->equals($Sasl::QOP)) {
			return $of("auth"_s);
		} else {
			return $of(nullptr);
		}
	} else {
		$throwNew($IllegalStateException, "PLAIN authentication not completed"_s);
	}
}

void PlainClient::clearPassword() {
	if (this->pw != nullptr) {
		for (int32_t i = 0; i < $nc(this->pw)->length; ++i) {
			$nc(this->pw)->set(i, (int8_t)0);
		}
		$set(this, pw, nullptr);
	}
}

void PlainClient::finalize() {
	clearPassword();
}

void clinit$PlainClient($Class* class$) {
	PlainClient::SEP = (int8_t)0;
}

PlainClient::PlainClient() {
}

$Class* PlainClient::load$($String* name, bool initialize) {
	$loadClass(PlainClient, name, initialize, &_PlainClient_ClassInfo_, clinit$PlainClient, allocate$PlainClient);
	return class$;
}

$Class* PlainClient::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com