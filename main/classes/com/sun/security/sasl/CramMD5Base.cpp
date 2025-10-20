#include <com/sun/security/sasl/CramMD5Base.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/MessageDigest.h>
#include <java/util/Arrays.h>
#include <java/util/logging/Logger.h>
#include <javax/security/sasl/Sasl.h>
#include <jcpp.h>

#undef HMAC_MD5
#undef MD5_BLOCKSIZE
#undef QOP
#undef SASL_LOGGER_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $Arrays = ::java::util::Arrays;
using $Logger = ::java::util::logging::Logger;
using $Sasl = ::javax::security::sasl::Sasl;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _CramMD5Base_FieldInfo_[] = {
	{"completed", "Z", nullptr, $PROTECTED, $field(CramMD5Base, completed)},
	{"aborted", "Z", nullptr, $PROTECTED, $field(CramMD5Base, aborted)},
	{"pw", "[B", nullptr, $PROTECTED, $field(CramMD5Base, pw)},
	{"MD5_BLOCKSIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(CramMD5Base, MD5_BLOCKSIZE)},
	{"SASL_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CramMD5Base, SASL_LOGGER_NAME)},
	{"logger", "Ljava/util/logging/Logger;", nullptr, $PROTECTED | $STATIC, $staticField(CramMD5Base, logger)},
	{}
};

$MethodInfo _CramMD5Base_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(CramMD5Base::*)()>(&CramMD5Base::init$))},
	{"HMAC_MD5", "([B[B)Ljava/lang/String;", nullptr, $STATIC | $FINAL, $method(static_cast<$String*(*)($bytes*,$bytes*)>(&CramMD5Base::HMAC_MD5)), "java.security.NoSuchAlgorithmException"},
	{"clearPassword", "()V", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"finalize", "()V", nullptr, $PROTECTED},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"initLogger", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&CramMD5Base::initLogger))},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _CramMD5Base_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.security.sasl.CramMD5Base",
	"java.lang.Object",
	nullptr,
	_CramMD5Base_FieldInfo_,
	_CramMD5Base_MethodInfo_
};

$Object* allocate$CramMD5Base($Class* clazz) {
	return $of($alloc(CramMD5Base));
}


$String* CramMD5Base::SASL_LOGGER_NAME = nullptr;
$Logger* CramMD5Base::logger = nullptr;

void CramMD5Base::init$() {
	this->completed = false;
	this->aborted = false;
	initLogger();
}

$String* CramMD5Base::getMechanismName() {
	return "CRAM-MD5"_s;
}

bool CramMD5Base::isComplete() {
	return this->completed;
}

$bytes* CramMD5Base::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($IllegalStateException, "CRAM-MD5 supports neither integrity nor privacy"_s);
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$bytes* CramMD5Base::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	if (this->completed) {
		$throwNew($IllegalStateException, "CRAM-MD5 supports neither integrity nor privacy"_s);
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
	$shouldNotReachHere();
}

$Object* CramMD5Base::getNegotiatedProperty($String* propName) {
	if (this->completed) {
		$init($Sasl);
		if ($nc(propName)->equals($Sasl::QOP)) {
			return $of("auth"_s);
		} else {
			return $of(nullptr);
		}
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
}

void CramMD5Base::dispose() {
	clearPassword();
}

void CramMD5Base::clearPassword() {
	if (this->pw != nullptr) {
		for (int32_t i = 0; i < $nc(this->pw)->length; ++i) {
			$nc(this->pw)->set(i, (int8_t)0);
		}
		$set(this, pw, nullptr);
	}
}

void CramMD5Base::finalize() {
	clearPassword();
}

$String* CramMD5Base::HMAC_MD5($bytes* key$renamed, $bytes* text) {
	$init(CramMD5Base);
	$useLocalCurrentObjectStackCache();
	$var($bytes, key, key$renamed);
	$var($MessageDigest, md5, $MessageDigest::getInstance("MD5"_s));
	if ($nc(key)->length > CramMD5Base::MD5_BLOCKSIZE) {
		$assign(key, $nc(md5)->digest(key));
	}
	$var($bytes, ipad, $new($bytes, CramMD5Base::MD5_BLOCKSIZE));
	$var($bytes, opad, $new($bytes, CramMD5Base::MD5_BLOCKSIZE));
	$var($bytes, digest, nullptr);
	int32_t i = 0;
	for (i = 0; i < $nc(key)->length; ++i) {
		ipad->set(i, key->get(i));
		opad->set(i, key->get(i));
	}
	for (i = 0; i < CramMD5Base::MD5_BLOCKSIZE; ++i) {
		(*ipad)[i] ^= 54;
		(*opad)[i] ^= 92;
	}
	$nc(md5)->update(ipad);
	md5->update(text);
	$assign(digest, md5->digest());
	md5->update(opad);
	md5->update(digest);
	$assign(digest, md5->digest());
	$var($StringBuilder, digestString, $new($StringBuilder));
	for (i = 0; i < $nc(digest)->length; ++i) {
		if (((int32_t)(digest->get(i) & (uint32_t)255)) < 16) {
			digestString->append(u'0')->append($($Integer::toHexString((int32_t)(digest->get(i) & (uint32_t)255))));
		} else {
			digestString->append($($Integer::toHexString((int32_t)(digest->get(i) & (uint32_t)255))));
		}
	}
	$Arrays::fill(ipad, (int8_t)0);
	$Arrays::fill(opad, (int8_t)0);
	$assign(ipad, nullptr);
	$assign(opad, nullptr);
	return (digestString->toString());
}

void CramMD5Base::initLogger() {
	$load(CramMD5Base);
	$synchronized(class$) {
		$init(CramMD5Base);
		$beforeCallerSensitive();
		if (CramMD5Base::logger == nullptr) {
			$assignStatic(CramMD5Base::logger, $Logger::getLogger(CramMD5Base::SASL_LOGGER_NAME));
		}
	}
}

CramMD5Base::CramMD5Base() {
}

void clinit$CramMD5Base($Class* class$) {
	$assignStatic(CramMD5Base::SASL_LOGGER_NAME, "javax.security.sasl"_s);
}

$Class* CramMD5Base::load$($String* name, bool initialize) {
	$loadClass(CramMD5Base, name, initialize, &_CramMD5Base_ClassInfo_, clinit$CramMD5Base, allocate$CramMD5Base);
	return class$;
}

$Class* CramMD5Base::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com