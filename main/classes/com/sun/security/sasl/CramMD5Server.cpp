#include <com/sun/security/sasl/CramMD5Server.h>

#include <com/sun/security/sasl/CramMD5Base.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/AuthorizeCallback.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef FINE
#undef UTF_8

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $CramMD5Base = ::com::sun::security::sasl::CramMD5Base;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $AuthorizeCallback = ::javax::security::sasl::AuthorizeCallback;
using $SaslException = ::javax::security::sasl::SaslException;
using $SaslServer = ::javax::security::sasl::SaslServer;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _CramMD5Server_FieldInfo_[] = {
	{"fqdn", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CramMD5Server, fqdn)},
	{"challengeData", "[B", nullptr, $PRIVATE, $field(CramMD5Server, challengeData)},
	{"authzid", "Ljava/lang/String;", nullptr, $PRIVATE, $field(CramMD5Server, authzid)},
	{"cbh", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PRIVATE, $field(CramMD5Server, cbh)},
	{}
};

$MethodInfo _CramMD5Server_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED},
	{"*getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)V", 0, $method(static_cast<void(CramMD5Server::*)($String*,$String*,$Map*,$CallbackHandler*)>(&CramMD5Server::init$)), "javax.security.sasl.SaslException"},
	{"evaluateResponse", "([B)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"getAuthorizationID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*isComplete", "()Z", nullptr, $PUBLIC},
	{"*unwrap", "([BII)[B", nullptr, $PUBLIC},
	{"*wrap", "([BII)[B", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CramMD5Server_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.CramMD5Server",
	"com.sun.security.sasl.CramMD5Base",
	"javax.security.sasl.SaslServer",
	_CramMD5Server_FieldInfo_,
	_CramMD5Server_MethodInfo_
};

$Object* allocate$CramMD5Server($Class* clazz) {
	return $of($alloc(CramMD5Server));
}

$String* CramMD5Server::getMechanismName() {
	 return this->$CramMD5Base::getMechanismName();
}

bool CramMD5Server::isComplete() {
	 return this->$CramMD5Base::isComplete();
}

$bytes* CramMD5Server::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	 return this->$CramMD5Base::unwrap(incoming, offset, len);
}

$bytes* CramMD5Server::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	 return this->$CramMD5Base::wrap(outgoing, offset, len);
}

$Object* CramMD5Server::getNegotiatedProperty($String* propName) {
	 return this->$CramMD5Base::getNegotiatedProperty(propName);
}

void CramMD5Server::dispose() {
	this->$CramMD5Base::dispose();
}

void CramMD5Server::finalize() {
	this->$CramMD5Base::finalize();
}

int32_t CramMD5Server::hashCode() {
	 return this->$CramMD5Base::hashCode();
}

bool CramMD5Server::equals(Object$* arg0) {
	 return this->$CramMD5Base::equals(arg0);
}

$Object* CramMD5Server::clone() {
	 return this->$CramMD5Base::clone();
}

$String* CramMD5Server::toString() {
	 return this->$CramMD5Base::toString();
}

void CramMD5Server::init$($String* protocol, $String* serverFqdn, $Map* props, $CallbackHandler* cbh) {
	$CramMD5Base::init$();
	$set(this, challengeData, nullptr);
	if (serverFqdn == nullptr) {
		$throwNew($SaslException, "CRAM-MD5: fully qualified server name must be specified"_s);
	}
	$set(this, fqdn, serverFqdn);
	$set(this, cbh, cbh);
}

$bytes* CramMD5Server::evaluateResponse($bytes* responseData) {
	if (this->completed) {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication already completed"_s);
	}
	if (this->aborted) {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication previously aborted due to error"_s);
	}
	try {
		if (this->challengeData == nullptr) {
			if ($nc(responseData)->length != 0) {
				this->aborted = true;
				$throwNew($SaslException, "CRAM-MD5 does not expect any initial response"_s);
			}
			$var($Random, random, $new($Random));
			int64_t rand = random->nextLong();
			int64_t timestamp = $System::currentTimeMillis();
			$var($StringBuilder, sb, $new($StringBuilder));
			sb->append(u'<');
			sb->append(rand);
			sb->append(u'.');
			sb->append(timestamp);
			sb->append(u'@');
			sb->append(this->fqdn);
			sb->append(u'>');
			$var($String, challengeStr, sb->toString());
			$init($CramMD5Base);
			$init($Level);
			$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMSRV01:Generated challenge: {0}"_s, $of(challengeStr));
			$init($StandardCharsets);
			$set(this, challengeData, $nc(challengeStr)->getBytes($StandardCharsets::UTF_8));
			return $cast($bytes, $nc(this->challengeData)->clone());
		} else {
			$init($CramMD5Base);
			$init($Level);
			if ($nc($CramMD5Base::logger)->isLoggable($Level::FINE)) {
				$init($StandardCharsets);
				$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMSRV02:Received response: {0}"_s, $of($$new($String, responseData, $StandardCharsets::UTF_8)));
			}
			int32_t ulen = 0;
			for (int32_t i = 0; i < $nc(responseData)->length; ++i) {
				if (responseData->get(i) == u' ') {
					ulen = i;
					break;
				}
			}
			if (ulen == 0) {
				this->aborted = true;
				$throwNew($SaslException, "CRAM-MD5: Invalid response; space missing"_s);
			}
			$init($StandardCharsets);
			$var($String, username, $new($String, responseData, 0, ulen, $StandardCharsets::UTF_8));
			$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMSRV03:Extracted username: {0}"_s, $of(username));
			$var($NameCallback, ncb, $new($NameCallback, "CRAM-MD5 authentication ID: "_s, username));
			$var($PasswordCallback, pcb, $new($PasswordCallback, "CRAM-MD5 password: "_s, false));
			$nc(this->cbh)->handle($$new($CallbackArray, {
				static_cast<$Callback*>(ncb),
				static_cast<$Callback*>(pcb)
			}));
			$var($chars, pwChars, pcb->getPassword());
			if (pwChars == nullptr || $nc(pwChars)->length == 0) {
				this->aborted = true;
				$throwNew($SaslException, $$str({"CRAM-MD5: username not found: "_s, username}));
			}
			pcb->clearPassword();
			$var($String, pwStr, $new($String, pwChars));
			for (int32_t i = 0; i < $nc(pwChars)->length; ++i) {
				pwChars->set(i, (char16_t)0);
			}
			$set(this, pw, pwStr->getBytes($StandardCharsets::UTF_8));
			$var($String, digest, HMAC_MD5(this->pw, this->challengeData));
			$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMSRV04:Expecting digest: {0}"_s, $of(digest));
			clearPassword();
			$var($bytes, expectedDigest, $nc(digest)->getBytes($StandardCharsets::UTF_8));
			int32_t digestLen = $nc(responseData)->length - ulen - 1;
			if (expectedDigest->length != digestLen) {
				this->aborted = true;
				$throwNew($SaslException, "Invalid response"_s);
			}
			int32_t j = 0;
			for (int32_t i = ulen + 1; i < responseData->length; ++i) {
				if (expectedDigest->get(j++) != responseData->get(i)) {
					this->aborted = true;
					$throwNew($SaslException, "Invalid response"_s);
				}
			}
			$var($AuthorizeCallback, acb, $new($AuthorizeCallback, username, username));
			$nc(this->cbh)->handle($$new($CallbackArray, {static_cast<$Callback*>(acb)}));
			if (acb->isAuthorized()) {
				$set(this, authzid, acb->getAuthorizedID());
			} else {
				this->aborted = true;
				$throwNew($SaslException, $$str({"CRAM-MD5: user not authorized: "_s, username}));
			}
			$nc($CramMD5Base::logger)->log($Level::FINE, "CRAMSRV05:Authorization id: {0}"_s, $of(this->authzid));
			this->completed = true;
			return nullptr;
		}
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		this->aborted = true;
		$throwNew($SaslException, "MD5 algorithm not available on platform"_s, e);
	} catch ($UnsupportedCallbackException&) {
		$var($UnsupportedCallbackException, e, $catch());
		this->aborted = true;
		$throwNew($SaslException, "CRAM-MD5 authentication failed"_s, e);
	} catch ($SaslException&) {
		$var($SaslException, e, $catch());
		$throw(e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		this->aborted = true;
		$throwNew($SaslException, "CRAM-MD5 authentication failed"_s, e);
	}
	$shouldNotReachHere();
}

$String* CramMD5Server::getAuthorizationID() {
	if (this->completed) {
		return this->authzid;
	} else {
		$throwNew($IllegalStateException, "CRAM-MD5 authentication not completed"_s);
	}
}

CramMD5Server::CramMD5Server() {
}

$Class* CramMD5Server::load$($String* name, bool initialize) {
	$loadClass(CramMD5Server, name, initialize, &_CramMD5Server_ClassInfo_, allocate$CramMD5Server);
	return class$;
}

$Class* CramMD5Server::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com