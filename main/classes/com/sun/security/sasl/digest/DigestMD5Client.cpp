#include <com/sun/security/sasl/digest/DigestMD5Client.h>

#include <com/sun/security/sasl/digest/DigestMD5Base$DigestIntegrity.h>
#include <com/sun/security/sasl/digest/DigestMD5Base$DigestPrivacy.h>
#include <com/sun/security/sasl/digest/DigestMD5Base.h>
#include <com/sun/security/sasl/digest/SecurityCtx.h>
#include <com/sun/security/sasl/util/AbstractSaslImpl.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/ChoiceCallback.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/TextInputCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/RealmCallback.h>
#include <javax/security/sasl/RealmChoiceCallback.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef ALGORITHM
#undef CHARSET
#undef CIPHER
#undef CIPHER_MASKS
#undef CIPHER_PROPERTY
#undef CIPHER_TOKENS
#undef DEFAULT_MAXBUF
#undef DIRECTIVE_KEY
#undef FINE
#undef HIGH_STRENGTH
#undef INTEGRITY_ONLY_PROTECTION
#undef LOW_STRENGTH
#undef MAXBUF
#undef MAX_CHALLENGE_LENGTH
#undef MAX_RESPONSE_LENGTH
#undef MEDIUM_STRENGTH
#undef MY_CLASS_NAME
#undef NONCE
#undef NO_PROTECTION
#undef PRIVACY_PROTECTION
#undef QOP
#undef REALM
#undef RESPONSE_AUTH
#undef STALE
#undef UNSET
#undef UTF_8

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $byteArray2 = $Array<int8_t, 2>;
using $DigestMD5Base = ::com::sun::security::sasl::digest::DigestMD5Base;
using $DigestMD5Base$DigestIntegrity = ::com::sun::security::sasl::digest::DigestMD5Base$DigestIntegrity;
using $DigestMD5Base$DigestPrivacy = ::com::sun::security::sasl::digest::DigestMD5Base$DigestPrivacy;
using $SecurityCtx = ::com::sun::security::sasl::digest::SecurityCtx;
using $AbstractSaslImpl = ::com::sun::security::sasl::util::AbstractSaslImpl;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $ChoiceCallback = ::javax::security::auth::callback::ChoiceCallback;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $TextInputCallback = ::javax::security::auth::callback::TextInputCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $RealmCallback = ::javax::security::sasl::RealmCallback;
using $RealmChoiceCallback = ::javax::security::sasl::RealmChoiceCallback;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$FieldInfo _DigestMD5Client_FieldInfo_[] = {
	{"MY_CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Client, MY_CLASS_NAME)},
	{"CIPHER_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Client, CIPHER_PROPERTY)},
	{"DIRECTIVE_KEY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Client, DIRECTIVE_KEY)},
	{"REALM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, REALM)},
	{"QOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, QOP)},
	{"ALGORITHM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, ALGORITHM)},
	{"NONCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, NONCE)},
	{"MAXBUF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, MAXBUF)},
	{"CHARSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, CHARSET)},
	{"CIPHER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, CIPHER)},
	{"RESPONSE_AUTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, RESPONSE_AUTH)},
	{"STALE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Client, STALE)},
	{"nonceCount", "I", nullptr, $PRIVATE, $field(DigestMD5Client, nonceCount)},
	{"specifiedCipher", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestMD5Client, specifiedCipher)},
	{"cnonce", "[B", nullptr, $PRIVATE, $field(DigestMD5Client, cnonce)},
	{"username", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestMD5Client, username)},
	{"passwd", "[C", nullptr, $PRIVATE, $field(DigestMD5Client, passwd)},
	{"authzidBytes", "[B", nullptr, $PRIVATE, $field(DigestMD5Client, authzidBytes)},
	{}
};

$MethodInfo _DigestMD5Client_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)V", 0, $method(static_cast<void(DigestMD5Client::*)($String*,$String*,$String*,$Map*,$CallbackHandler*)>(&DigestMD5Client::init$)), "javax.security.sasl.SaslException"},
	{"checkQopSupport", "([B[B)V", nullptr, $PRIVATE, $method(static_cast<void(DigestMD5Client::*)($bytes*,$bytes*)>(&DigestMD5Client::checkQopSupport)), "java.io.IOException"},
	{"checkStrengthSupport", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(DigestMD5Client::*)($bytes*)>(&DigestMD5Client::checkStrengthSupport)), "java.io.IOException"},
	{"clearPassword", "()V", nullptr, $PRIVATE, $method(static_cast<void(DigestMD5Client::*)()>(&DigestMD5Client::clearPassword))},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"findCipherAndStrength", "([B[Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DigestMD5Client::*)($bytes*,$StringArray*)>(&DigestMD5Client::findCipherAndStrength))},
	{"generateClientResponse", "([B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(DigestMD5Client::*)($bytes*)>(&DigestMD5Client::generateClientResponse)), "java.io.IOException"},
	{"getNonceCount", "([B)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*)>(&DigestMD5Client::getNonceCount))},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC},
	{"*isComplete", "()Z", nullptr, $PUBLIC},
	{"processChallenge", "([[BLjava/util/List;)V", "([[BLjava/util/List<[B>;)V", $PRIVATE, $method(static_cast<void(DigestMD5Client::*)($byteArray2*,$List*)>(&DigestMD5Client::processChallenge)), "javax.security.sasl.SaslException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*unwrap", "([BII)[B", nullptr, $PUBLIC},
	{"validateResponseValue", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(DigestMD5Client::*)($bytes*)>(&DigestMD5Client::validateResponseValue)), "javax.security.sasl.SaslException"},
	{"*wrap", "([BII)[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DigestMD5Client_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.digest.DigestMD5Client",
	"com.sun.security.sasl.digest.DigestMD5Base",
	"javax.security.sasl.SaslClient",
	_DigestMD5Client_FieldInfo_,
	_DigestMD5Client_MethodInfo_
};

$Object* allocate$DigestMD5Client($Class* clazz) {
	return $of($alloc(DigestMD5Client));
}

$String* DigestMD5Client::getMechanismName() {
	 return this->$DigestMD5Base::getMechanismName();
}

$bytes* DigestMD5Client::unwrap($bytes* incoming, int32_t start, int32_t len) {
	 return this->$DigestMD5Base::unwrap(incoming, start, len);
}

$bytes* DigestMD5Client::wrap($bytes* outgoing, int32_t start, int32_t len) {
	 return this->$DigestMD5Base::wrap(outgoing, start, len);
}

void DigestMD5Client::dispose() {
	this->$DigestMD5Base::dispose();
}

$Object* DigestMD5Client::getNegotiatedProperty($String* propName) {
	 return this->$DigestMD5Base::getNegotiatedProperty(propName);
}

bool DigestMD5Client::isComplete() {
	 return this->$DigestMD5Base::isComplete();
}

int32_t DigestMD5Client::hashCode() {
	 return this->$DigestMD5Base::hashCode();
}

bool DigestMD5Client::equals(Object$* arg0) {
	 return this->$DigestMD5Base::equals(arg0);
}

$Object* DigestMD5Client::clone() {
	 return this->$DigestMD5Base::clone();
}

$String* DigestMD5Client::toString() {
	 return this->$DigestMD5Base::toString();
}

void DigestMD5Client::finalize() {
	this->$DigestMD5Base::finalize();
}

$String* DigestMD5Client::MY_CLASS_NAME = nullptr;
$String* DigestMD5Client::CIPHER_PROPERTY = nullptr;
$StringArray* DigestMD5Client::DIRECTIVE_KEY = nullptr;

void DigestMD5Client::init$($String* authzid, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	$DigestMD5Base::init$(props, DigestMD5Client::MY_CLASS_NAME, 2, $$str({protocol, "/"_s, serverName}), cbh);
	if (authzid != nullptr) {
		$set(this, authzid, authzid);
		$init($StandardCharsets);
		$set(this, authzidBytes, authzid->getBytes($StandardCharsets::UTF_8));
	}
	if (props != nullptr) {
		$set(this, specifiedCipher, $cast($String, props->get(DigestMD5Client::CIPHER_PROPERTY)));
		$init($AbstractSaslImpl);
		$init($Level);
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST60:Explicitly specified cipher: {0}"_s, $of(this->specifiedCipher));
	}
}

bool DigestMD5Client::hasInitialResponse() {
	return false;
}

$bytes* DigestMD5Client::evaluateChallenge($bytes* challengeData) {
	$useLocalCurrentObjectStackCache();
	if ($nc(challengeData)->length > $DigestMD5Base::MAX_CHALLENGE_LENGTH) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: Invalid digest-challenge length. Got:  "_s, $$str(challengeData->length), " Expected < "_s, $$str($DigestMD5Base::MAX_CHALLENGE_LENGTH)}));
	}
	$var($byteArray2, challengeVal, nullptr);
	{
		$var($List, realmChoices, nullptr)
		switch (this->step) {
		case 2:
			{
				$assign(realmChoices, $new($ArrayList, 3));
				$assign(challengeVal, parseDirectives(challengeData, DigestMD5Client::DIRECTIVE_KEY, realmChoices, DigestMD5Client::REALM));
				try {
					processChallenge(challengeVal, realmChoices);
					checkQopSupport($nc(challengeVal)->get(DigestMD5Client::QOP), challengeVal->get(DigestMD5Client::CIPHER));
					++this->step;
					return generateClientResponse($nc(challengeVal)->get(DigestMD5Client::CHARSET));
				} catch ($SaslException&) {
					$var($SaslException, e, $catch());
					this->step = 0;
					clearPassword();
					$throw(e);
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					this->step = 0;
					clearPassword();
					$throwNew($SaslException, "DIGEST-MD5: Error generating digest response-value"_s, e);
				}
			}
		case 3:
			{
				{
					$var($Throwable, var$0, nullptr);
					$var($bytes, var$2, nullptr);
					bool return$1 = false;
					try {
						$assign(challengeVal, parseDirectives(challengeData, DigestMD5Client::DIRECTIVE_KEY, nullptr, DigestMD5Client::REALM));
						validateResponseValue($nc(challengeVal)->get(DigestMD5Client::RESPONSE_AUTH));
						if (this->integrity && this->privacy) {
							$set(this, secCtx, $new($DigestMD5Base$DigestPrivacy, this, true));
						} else if (this->integrity) {
							$set(this, secCtx, $new($DigestMD5Base$DigestIntegrity, this, true));
						}
						$assign(var$2, nullptr);
						return$1 = true;
						goto $finally;
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} $finally: {
						clearPassword();
						this->step = 0;
						this->completed = true;
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
					if (return$1) {
						return var$2;
					}
				}
			}
		default:
			{
				$throwNew($SaslException, "DIGEST-MD5: Client at illegal state"_s);
			}
		}
	}
	$shouldNotReachHere();
}

void DigestMD5Client::processChallenge($byteArray2* challengeVal, $List* realmChoices) {
	$useLocalCurrentObjectStackCache();
	if ($nc(challengeVal)->get(DigestMD5Client::CHARSET) != nullptr) {
		if (!"utf-8"_s->equals($$new($String, challengeVal->get(DigestMD5Client::CHARSET), this->encoding))) {
			$throwNew($SaslException, $$str({"DIGEST-MD5: digest-challenge format violation. Unrecognised charset value: "_s, $$new($String, challengeVal->get(DigestMD5Client::CHARSET))}));
		} else {
			$init($StandardCharsets);
			$set(this, encoding, $StandardCharsets::UTF_8);
			this->useUTF8 = true;
		}
	}
	if ($nc(challengeVal)->get(DigestMD5Client::ALGORITHM) == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: Digest-challenge format violation: algorithm directive missing"_s);
	} else if (!"md5-sess"_s->equals($$new($String, challengeVal->get(DigestMD5Client::ALGORITHM), this->encoding))) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: Digest-challenge format violation. Invalid value for \'algorithm\' directive: "_s, challengeVal->get(DigestMD5Client::ALGORITHM)}));
	}
	if ($nc(challengeVal)->get(DigestMD5Client::NONCE) == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: Digest-challenge format violation: nonce directive missing"_s);
	} else {
		$set(this, nonce, challengeVal->get(DigestMD5Client::NONCE));
	}
	try {
		$var($StringArray, realmTokens, nullptr);
		if ($nc(challengeVal)->get(DigestMD5Client::REALM) != nullptr) {
			if (realmChoices == nullptr || $nc(realmChoices)->size() <= 1) {
				$set(this, negotiatedRealm, $new($String, challengeVal->get(DigestMD5Client::REALM), this->encoding));
			} else {
				$assign(realmTokens, $new($StringArray, realmChoices->size()));
				for (int32_t i = 0; i < realmTokens->length; ++i) {
					realmTokens->set(i, $$new($String, $cast($bytes, $(realmChoices->get(i))), this->encoding));
				}
			}
		}
		$var($NameCallback, ncb, this->authzid == nullptr ? $new($NameCallback, "DIGEST-MD5 authentication ID: "_s) : $new($NameCallback, "DIGEST-MD5 authentication ID: "_s, this->authzid));
		$var($PasswordCallback, pcb, $new($PasswordCallback, "DIGEST-MD5 password: "_s, false));
		if (realmTokens == nullptr) {
			$var($RealmCallback, tcb, this->negotiatedRealm == nullptr ? $new($RealmCallback, "DIGEST-MD5 realm: "_s) : $new($RealmCallback, "DIGEST-MD5 realm: "_s, this->negotiatedRealm));
			$nc(this->cbh)->handle($$new($CallbackArray, {
				static_cast<$Callback*>(tcb),
				static_cast<$Callback*>(ncb),
				static_cast<$Callback*>(pcb)
			}));
			$set(this, negotiatedRealm, $nc(tcb)->getText());
			if (this->negotiatedRealm == nullptr) {
				$set(this, negotiatedRealm, ""_s);
			}
		} else {
			$var($RealmChoiceCallback, ccb, $new($RealmChoiceCallback, "DIGEST-MD5 realm: "_s, realmTokens, 0, false));
			$nc(this->cbh)->handle($$new($CallbackArray, {
				static_cast<$Callback*>(ccb),
				static_cast<$Callback*>(ncb),
				static_cast<$Callback*>(pcb)
			}));
			$var($ints, selected, ccb->getSelectedIndexes());
			if (selected == nullptr || $nc(selected)->get(0) < 0 || $nc(selected)->get(0) >= $nc(realmTokens)->length) {
				$throwNew($SaslException, "DIGEST-MD5: Invalid realm chosen"_s);
			}
			$set(this, negotiatedRealm, $nc(realmTokens)->get($nc(selected)->get(0)));
		}
		$set(this, passwd, pcb->getPassword());
		pcb->clearPassword();
		$set(this, username, $nc(ncb)->getName());
	} catch ($SaslException&) {
		$var($SaslException, se, $catch());
		$throw(se);
	} catch ($UnsupportedCallbackException&) {
		$var($UnsupportedCallbackException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Cannot perform callback to acquire realm, authentication ID or password"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Error acquiring realm, authentication ID or password"_s, e);
	}
	if (this->username == nullptr || this->passwd == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: authentication ID and password must be specified"_s);
	}
	int32_t srvMaxBufSize = ($nc(challengeVal)->get(DigestMD5Client::MAXBUF) == nullptr) ? $DigestMD5Base::DEFAULT_MAXBUF : $Integer::parseInt($$new($String, $nc(challengeVal)->get(DigestMD5Client::MAXBUF), this->encoding));
	this->sendMaxBufSize = (this->sendMaxBufSize == 0) ? srvMaxBufSize : $Math::min(this->sendMaxBufSize, srvMaxBufSize);
}

void DigestMD5Client::checkQopSupport($bytes* qopInChallenge, $bytes* ciphersInChallenge) {
	$useLocalCurrentObjectStackCache();
	$var($String, qopOptions, nullptr);
	if (qopInChallenge == nullptr) {
		$assign(qopOptions, "auth"_s);
	} else {
		$assign(qopOptions, $new($String, qopInChallenge, this->encoding));
	}
	$var($StringArray, serverQopTokens, $new($StringArray, 3));
	$var($bytes, serverQop, parseQop(qopOptions, serverQopTokens, true));
	int8_t serverAllQop = combineMasks(serverQop);
	switch (findPreferredMask(serverAllQop, this->qop)) {
	case 0:
		{
			$throwNew($SaslException, "DIGEST-MD5: No common protection layer between client and server"_s);
		}
	case $AbstractSaslImpl::NO_PROTECTION:
		{
			$set(this, negotiatedQop, "auth"_s);
			break;
		}
	case $AbstractSaslImpl::INTEGRITY_ONLY_PROTECTION:
		{
			$set(this, negotiatedQop, "auth-int"_s);
			this->integrity = true;
			this->rawSendSize = this->sendMaxBufSize - 16;
			break;
		}
	case $AbstractSaslImpl::PRIVACY_PROTECTION:
		{
			$set(this, negotiatedQop, "auth-conf"_s);
			this->privacy = (this->integrity = true);
			this->rawSendSize = this->sendMaxBufSize - 26;
			checkStrengthSupport(ciphersInChallenge);
			break;
		}
	}
	$init($AbstractSaslImpl);
	$init($Level);
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST61:Raw send size: {0}"_s, $($of($Integer::valueOf(this->rawSendSize))));
	}
}

void DigestMD5Client::checkStrengthSupport($bytes* ciphersInChallenge) {
	$useLocalCurrentObjectStackCache();
	if (ciphersInChallenge == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: server did not specify cipher to use for \'auth-conf\'"_s);
	}
	$var($String, cipherOptions, $new($String, ciphersInChallenge, this->encoding));
	$var($StringTokenizer, parser, $new($StringTokenizer, cipherOptions, ", \t\n"_s));
	int32_t tokenCount = parser->countTokens();
	$var($String, token, nullptr);
	$var($bytes, serverCiphers, $new($bytes, {
		$DigestMD5Base::UNSET,
		$DigestMD5Base::UNSET,
		$DigestMD5Base::UNSET,
		$DigestMD5Base::UNSET,
		$DigestMD5Base::UNSET
	}));
	$var($StringArray, serverCipherStrs, $new($StringArray, serverCiphers->length));
	for (int32_t i = 0; i < tokenCount; ++i) {
		$assign(token, parser->nextToken());
		$init($DigestMD5Base);
		for (int32_t j = 0; j < $nc($DigestMD5Base::CIPHER_TOKENS)->length; ++j) {
			if ($nc(token)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(j))) {
				(*serverCiphers)[j] |= $nc($DigestMD5Base::CIPHER_MASKS)->get(j);
				serverCipherStrs->set(j, token);
				$init($AbstractSaslImpl);
				$init($Level);
				$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST62:Server supports {0}"_s, $of(token));
			}
		}
	}
	$var($bytes, clntCiphers, getPlatformCiphers());
	int8_t inter = (int8_t)0;
	for (int32_t i = 0; i < serverCiphers->length; ++i) {
		(*serverCiphers)[i] &= (uint8_t)$nc(clntCiphers)->get(i);
		inter |= serverCiphers->get(i);
	}
	if (inter == $DigestMD5Base::UNSET) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: Client supports none of these cipher suites: "_s, cipherOptions}));
	}
	$set(this, negotiatedCipher, findCipherAndStrength(serverCiphers, serverCipherStrs));
	if (this->negotiatedCipher == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: Unable to negotiate a strength level for \'auth-conf\'"_s);
	}
	$init($AbstractSaslImpl);
	$init($Level);
	$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST63:Cipher suite: {0}"_s, $of(this->negotiatedCipher));
}

$String* DigestMD5Client::findCipherAndStrength($bytes* supportedCiphers, $StringArray* tokens) {
	int8_t s = 0;
	for (int32_t i = 0; i < $nc(this->strength)->length; ++i) {
		if ((s = $nc(this->strength)->get(i)) != 0) {
			for (int32_t j = 0; j < $nc(supportedCiphers)->length; ++j) {
				if (s == supportedCiphers->get(j) && (this->specifiedCipher == nullptr || $nc(this->specifiedCipher)->equals($nc(tokens)->get(j)))) {
					switch (s) {
					case $AbstractSaslImpl::HIGH_STRENGTH:
						{
							$set(this, negotiatedStrength, "high"_s);
							break;
						}
					case $AbstractSaslImpl::MEDIUM_STRENGTH:
						{
							$set(this, negotiatedStrength, "medium"_s);
							break;
						}
					case $AbstractSaslImpl::LOW_STRENGTH:
						{
							$set(this, negotiatedStrength, "low"_s);
							break;
						}
					}
					return $nc(tokens)->get(j);
				}
			}
		}
	}
	return nullptr;
}

$bytes* DigestMD5Client::generateClientResponse($bytes* charset) {
	$useLocalCurrentObjectStackCache();
	$var($ByteArrayOutputStream, digestResp, $new($ByteArrayOutputStream));
	if (this->useUTF8) {
		digestResp->write($("charset="_s->getBytes(this->encoding)));
		digestResp->write(charset);
		digestResp->write((int32_t)u',');
	}
	digestResp->write($($nc(($$str({"username=\""_s, $(quotedStringValue(this->username)), "\","_s})))->getBytes(this->encoding)));
	if ($nc(this->negotiatedRealm)->length() > 0) {
		digestResp->write($($nc(($$str({"realm=\""_s, $(quotedStringValue(this->negotiatedRealm)), "\","_s})))->getBytes(this->encoding)));
	}
	digestResp->write($("nonce=\""_s->getBytes(this->encoding)));
	writeQuotedStringValue(digestResp, this->nonce);
	digestResp->write((int32_t)u'\"');
	digestResp->write((int32_t)u',');
	this->nonceCount = getNonceCount(this->nonce);
	digestResp->write($($nc(($$str({"nc="_s, $(nonceCountToHex(this->nonceCount)), ","_s})))->getBytes(this->encoding)));
	$set(this, cnonce, generateNonce());
	digestResp->write($("cnonce=\""_s->getBytes(this->encoding)));
	writeQuotedStringValue(digestResp, this->cnonce);
	digestResp->write($("\","_s->getBytes(this->encoding)));
	digestResp->write($($nc(($$str({"digest-uri=\""_s, this->digestUri, "\","_s})))->getBytes(this->encoding)));
	digestResp->write($("maxbuf="_s->getBytes(this->encoding)));
	digestResp->write($($($String::valueOf(this->recvMaxBufSize))->getBytes(this->encoding)));
	digestResp->write((int32_t)u',');
	try {
		digestResp->write($("response="_s->getBytes(this->encoding)));
		digestResp->write($(generateResponseValue("AUTHENTICATE"_s, this->digestUri, this->negotiatedQop, this->username, this->negotiatedRealm, this->passwd, this->nonce, this->cnonce, this->nonceCount, this->authzidBytes)));
		digestResp->write((int32_t)u',');
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Error generating response value"_s, e);
	}
	digestResp->write($($nc(($$str({"qop="_s, this->negotiatedQop})))->getBytes(this->encoding)));
	if (this->negotiatedCipher != nullptr) {
		digestResp->write($($nc(($$str({",cipher=\""_s, this->negotiatedCipher, "\""_s})))->getBytes(this->encoding)));
	}
	if (this->authzidBytes != nullptr) {
		digestResp->write($(",authzid=\""_s->getBytes(this->encoding)));
		writeQuotedStringValue(digestResp, this->authzidBytes);
		digestResp->write($("\""_s->getBytes(this->encoding)));
	}
	if (digestResp->size() > $DigestMD5Base::MAX_RESPONSE_LENGTH) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: digest-response size too large. Length: "_s, $$str(digestResp->size())}));
	}
	return digestResp->toByteArray();
}

void DigestMD5Client::validateResponseValue($bytes* fromServer) {
	$useLocalCurrentObjectStackCache();
	if (fromServer == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: Authenication failed. Expecting \'rspauth\' authentication success message"_s);
	}
	try {
		$var($bytes, expected, generateResponseValue(""_s, this->digestUri, this->negotiatedQop, this->username, this->negotiatedRealm, this->passwd, this->nonce, this->cnonce, this->nonceCount, this->authzidBytes));
		if (!$Arrays::equals(expected, fromServer)) {
			$throwNew($SaslException, "Server\'s rspauth value does not match what client expects"_s);
		}
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($SaslException, "Problem generating response value for verification"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "Problem generating response value for verification"_s, e);
	}
}

int32_t DigestMD5Client::getNonceCount($bytes* nonceValue) {
	$init(DigestMD5Client);
	return 1;
}

void DigestMD5Client::clearPassword() {
	if (this->passwd != nullptr) {
		for (int32_t i = 0; i < $nc(this->passwd)->length; ++i) {
			$nc(this->passwd)->set(i, (char16_t)0);
		}
		$set(this, passwd, nullptr);
	}
}

void clinit$DigestMD5Client($Class* class$) {
	$assignStatic(DigestMD5Client::CIPHER_PROPERTY, "com.sun.security.sasl.digest.cipher"_s);
	$assignStatic(DigestMD5Client::MY_CLASS_NAME, DigestMD5Client::class$->getName());
	$assignStatic(DigestMD5Client::DIRECTIVE_KEY, $new($StringArray, {
		"realm"_s,
		"qop"_s,
		"algorithm"_s,
		"nonce"_s,
		"maxbuf"_s,
		"charset"_s,
		"cipher"_s,
		"rspauth"_s,
		"stale"_s
	}));
}

DigestMD5Client::DigestMD5Client() {
}

$Class* DigestMD5Client::load$($String* name, bool initialize) {
	$loadClass(DigestMD5Client, name, initialize, &_DigestMD5Client_ClassInfo_, clinit$DigestMD5Client, allocate$DigestMD5Client);
	return class$;
}

$Class* DigestMD5Client::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com