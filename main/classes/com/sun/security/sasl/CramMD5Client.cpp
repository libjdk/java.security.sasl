#include <com/sun/security/sasl/CramMD5Client.h>

#include <com/sun/security/sasl/CramMD5Base.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef FINE
#undef UTF_8

using $CramMD5Base = ::com::sun::security::sasl::CramMD5Base;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _CramMD5Client_FieldInfo_[] = {
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CramMD5Client, username)},
	{}
};

$MethodInfo _CramMD5Client_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED},
	{"*getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;[B)V", nullptr, 0, $method(static_cast<void(CramMD5Client::*)($String*,$bytes*)>(&CramMD5Client::init$)), "javax.security.sasl.SaslException"},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC},
	{"*isComplete", "()Z", nullptr, $PUBLIC},
	{"*unwrap", "([BII)[B", nullptr, $PUBLIC},
	{"*wrap", "([BII)[B", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CramMD5Client_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.CramMD5Client",
	"com.sun.security.sasl.CramMD5Base",
	"javax.security.sasl.SaslClient",
	_CramMD5Client_FieldInfo_,
	_CramMD5Client_MethodInfo_
};

$Object* allocate$CramMD5Client($Class* clazz) {
	return $of($alloc(CramMD5Client));
}

$String* CramMD5Client::getMechanismName() {
	 return this->$CramMD5Base::getMechanismName();
}

bool CramMD5Client::isComplete() {
	 return this->$CramMD5Base::isComplete();
}

$bytes* CramMD5Client::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	 return this->$CramMD5Base::unwrap(incoming, offset, len);
}

$bytes* CramMD5Client::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	 return this->$CramMD5Base::wrap(outgoing, offset, len);
}

$Object* CramMD5Client::getNegotiatedProperty($String* propName) {
	 return this->$CramMD5Base::getNegotiatedProperty(propName);
}

void CramMD5Client::dispose() {
	this->$CramMD5Base::dispose();
}

void CramMD5Client::finalize() {
	this->$CramMD5Base::finalize();
}

int32_t CramMD5Client::hashCode() {
	 return this->$CramMD5Base::hashCode();
}

bool CramMD5Client::equals(Object$* arg0) {
	 return this->$CramMD5Base::equals(arg0);
}

$Object* CramMD5Client::clone() {
	 return this->$CramMD5Base::clone();
}

$String* CramMD5Client::toString() {
	 return this->$CramMD5Base::toString();
}

void CramMD5Client::init$($String* authID, $bytes* pw) {
	$CramMD5Base::init$();
	if (authID == nullptr || pw == nullptr) {
		$throwNew($SaslException, "CRAM-MD5: authentication ID and password must be specified"_s);
	}
	$set(this, username, authID);
	$set(this, pw, pw);
}

bool CramMD5Client::hasInitialResponse() {
	return false;
}

$bytes* CramMD5Client::evaluateChallenge($bytes* challengeData) {
	if (this->completed) {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication already completed"_s);
	}
	if (this->aborted) {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication previously aborted due to error"_s);
	}
	try {
		$init($CramMD5Base);
		$init($Level);
		if ($nc($CramMD5Base::logger)->isLoggable($Level::FINE)) {
			$init($StandardCharsets);
			$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMCLNT01:Received challenge: {0}"_s, $of($$new($String, challengeData, $StandardCharsets::UTF_8)));
		}
		$var($String, digest, HMAC_MD5(this->pw, challengeData));
		clearPassword();
		$var($String, resp, $str({this->username, " "_s, digest}));
		$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMCLNT02:Sending response: {0}"_s, $of(resp));
		this->completed = true;
		$init($StandardCharsets);
		return $nc(resp)->getBytes($StandardCharsets::UTF_8);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		this->aborted = true;
		$throwNew($SaslException, "MD5 algorithm not available on platform"_s, e);
	}
	$shouldNotReachHere();
}

CramMD5Client::CramMD5Client() {
}

$Class* CramMD5Client::load$($String* name, bool initialize) {
	$loadClass(CramMD5Client, name, initialize, &_CramMD5Client_ClassInfo_, allocate$CramMD5Client);
	return class$;
}

$Class* CramMD5Client::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com