#include <com/sun/security/sasl/digest/DigestMD5Server.h>

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
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
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
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/TextInputCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/AuthorizeCallback.h>
#include <javax/security/sasl/RealmCallback.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef ALGORITHM_DIRECTIVE
#undef AUTHZID
#undef AUTH_PARAM
#undef CHARSET
#undef CIPHER
#undef CIPHER_MASKS
#undef CIPHER_TOKENS
#undef CNONCE
#undef DEFAULT_MAXBUF
#undef DIGEST_URI
#undef DIRECTIVE_KEY
#undef FINE
#undef HIGH_STRENGTH
#undef INTEGRITY_ONLY_PROTECTION
#undef MAXBUF
#undef MAX_RESPONSE_LENGTH
#undef MEDIUM_STRENGTH
#undef MY_CLASS_NAME
#undef NONCE
#undef NONCE_COUNT
#undef NONCE_COUNT_VALUE
#undef NO_PROTECTION
#undef PRIVACY_PROTECTION
#undef QOP
#undef REALM
#undef REALM_PROPERTY
#undef RESPONSE
#undef USERNAME
#undef UTF8_DIRECTIVE
#undef UTF8_PROPERTY
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
using $AbstractStringBuilder = ::java::lang::AbstractStringBuilder;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
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
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $TextInputCallback = ::javax::security::auth::callback::TextInputCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $AuthorizeCallback = ::javax::security::sasl::AuthorizeCallback;
using $RealmCallback = ::javax::security::sasl::RealmCallback;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslException = ::javax::security::sasl::SaslException;
using $SaslServer = ::javax::security::sasl::SaslServer;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$FieldInfo _DigestMD5Server_FieldInfo_[] = {
	{"MY_CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Server, MY_CLASS_NAME)},
	{"UTF8_DIRECTIVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Server, UTF8_DIRECTIVE)},
	{"ALGORITHM_DIRECTIVE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Server, ALGORITHM_DIRECTIVE)},
	{"NONCE_COUNT_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, NONCE_COUNT_VALUE)},
	{"UTF8_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Server, UTF8_PROPERTY)},
	{"REALM_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Server, REALM_PROPERTY)},
	{"DIRECTIVE_KEY", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Server, DIRECTIVE_KEY)},
	{"USERNAME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, USERNAME)},
	{"REALM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, REALM)},
	{"NONCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, NONCE)},
	{"CNONCE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, CNONCE)},
	{"NONCE_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, NONCE_COUNT)},
	{"QOP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, QOP)},
	{"DIGEST_URI", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, DIGEST_URI)},
	{"RESPONSE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, RESPONSE)},
	{"MAXBUF", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, MAXBUF)},
	{"CHARSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, CHARSET)},
	{"CIPHER", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, CIPHER)},
	{"AUTHZID", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, AUTHZID)},
	{"AUTH_PARAM", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Server, AUTH_PARAM)},
	{"specifiedQops", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DigestMD5Server, specifiedQops)},
	{"myCiphers", "[B", nullptr, $PRIVATE, $field(DigestMD5Server, myCiphers)},
	{"serverRealms", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE, $field(DigestMD5Server, serverRealms)},
	{}
};

$MethodInfo _DigestMD5Server_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*dispose", "()V", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)V", 0, $method(static_cast<void(DigestMD5Server::*)($String*,$String*,$Map*,$CallbackHandler*)>(&DigestMD5Server::init$)), "javax.security.sasl.SaslException"},
	{"evaluateResponse", "([B)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"generateChallenge", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)[B", "(Ljava/util/List<Ljava/lang/String;>;Ljava/lang/String;Ljava/lang/String;)[B", $PRIVATE, $method(static_cast<$bytes*(DigestMD5Server::*)($List*,$String*,$String*)>(&DigestMD5Server::generateChallenge)), "java.io.IOException"},
	{"generateResponseAuth", "(Ljava/lang/String;[C[BI[B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(DigestMD5Server::*)($String*,$chars*,$bytes*,int32_t,$bytes*)>(&DigestMD5Server::generateResponseAuth)), "javax.security.sasl.SaslException"},
	{"getAuthorizationID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*isComplete", "()Z", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*unwrap", "([BII)[B", nullptr, $PUBLIC},
	{"uriMatches", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*,$String*)>(&DigestMD5Server::uriMatches))},
	{"validateClientResponse", "([[B)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(DigestMD5Server::*)($byteArray2*)>(&DigestMD5Server::validateClientResponse)), "javax.security.sasl.SaslException"},
	{"*wrap", "([BII)[B", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DigestMD5Server_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.digest.DigestMD5Server",
	"com.sun.security.sasl.digest.DigestMD5Base",
	"javax.security.sasl.SaslServer",
	_DigestMD5Server_FieldInfo_,
	_DigestMD5Server_MethodInfo_
};

$Object* allocate$DigestMD5Server($Class* clazz) {
	return $of($alloc(DigestMD5Server));
}

$String* DigestMD5Server::getMechanismName() {
	 return this->$DigestMD5Base::getMechanismName();
}

$bytes* DigestMD5Server::unwrap($bytes* incoming, int32_t start, int32_t len) {
	 return this->$DigestMD5Base::unwrap(incoming, start, len);
}

$bytes* DigestMD5Server::wrap($bytes* outgoing, int32_t start, int32_t len) {
	 return this->$DigestMD5Base::wrap(outgoing, start, len);
}

void DigestMD5Server::dispose() {
	this->$DigestMD5Base::dispose();
}

$Object* DigestMD5Server::getNegotiatedProperty($String* propName) {
	 return this->$DigestMD5Base::getNegotiatedProperty(propName);
}

bool DigestMD5Server::isComplete() {
	 return this->$DigestMD5Base::isComplete();
}

int32_t DigestMD5Server::hashCode() {
	 return this->$DigestMD5Base::hashCode();
}

bool DigestMD5Server::equals(Object$* arg0) {
	 return this->$DigestMD5Base::equals(arg0);
}

$Object* DigestMD5Server::clone() {
	 return this->$DigestMD5Base::clone();
}

$String* DigestMD5Server::toString() {
	 return this->$DigestMD5Base::toString();
}

void DigestMD5Server::finalize() {
	this->$DigestMD5Base::finalize();
}

$String* DigestMD5Server::MY_CLASS_NAME = nullptr;
$String* DigestMD5Server::UTF8_DIRECTIVE = nullptr;
$String* DigestMD5Server::ALGORITHM_DIRECTIVE = nullptr;
$String* DigestMD5Server::UTF8_PROPERTY = nullptr;
$String* DigestMD5Server::REALM_PROPERTY = nullptr;
$StringArray* DigestMD5Server::DIRECTIVE_KEY = nullptr;

void DigestMD5Server::init$($String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	$DigestMD5Base::init$(props, DigestMD5Server::MY_CLASS_NAME, 1, $$str({protocol, "/"_s, (serverName == nullptr ? "*"_s : serverName)}), cbh);
	$set(this, serverRealms, $new($ArrayList));
	this->useUTF8 = true;
	if (props != nullptr) {
		$init($Sasl);
		$set(this, specifiedQops, $cast($String, props->get($Sasl::QOP)));
		if ("false"_s->equals($cast($String, $(props->get(DigestMD5Server::UTF8_PROPERTY))))) {
			this->useUTF8 = false;
			$init($AbstractSaslImpl);
			$init($Level);
			$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST80:Server supports ISO-Latin-1"_s);
		}
		$var($String, realms, $cast($String, props->get(DigestMD5Server::REALM_PROPERTY)));
		if (realms != nullptr) {
			$var($StringTokenizer, parser, $new($StringTokenizer, realms, ", \t\n"_s));
			int32_t tokenCount = parser->countTokens();
			$var($String, token, nullptr);
			for (int32_t i = 0; i < tokenCount; ++i) {
				$assign(token, parser->nextToken());
				$init($AbstractSaslImpl);
				$init($Level);
				$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST81:Server supports realm {0}"_s, $of(token));
				$nc(this->serverRealms)->add(token);
			}
		}
	}
	$init($StandardCharsets);
	$set(this, encoding, this->useUTF8 ? $StandardCharsets::UTF_8 : $StandardCharsets::ISO_8859_1);
	if ($nc(this->serverRealms)->isEmpty()) {
		if (serverName == nullptr) {
			$throwNew($SaslException, "A realm must be provided in props or serverName"_s);
		} else {
			$nc(this->serverRealms)->add(serverName);
		}
	}
}

$bytes* DigestMD5Server::evaluateResponse($bytes* response) {
	if ($nc(response)->length > $DigestMD5Base::MAX_RESPONSE_LENGTH) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: Invalid digest response length. Got:  "_s, $$str(response->length), " Expected < "_s, $$str($DigestMD5Base::MAX_RESPONSE_LENGTH)}));
	}
	$var($bytes, challenge, nullptr);
	{
		$var($String, supportedCiphers, nullptr)
		switch (this->step) {
		case 1:
			{
				if ($nc(response)->length != 0) {
					$init($AbstractSaslImpl);
					$init($Level);
					$nc($AbstractSaslImpl::logger)->log($Level::FINE, "Ignoring initial response"_s);
				}
				$assign(supportedCiphers, nullptr);
				if (((int32_t)(this->allQop & (uint32_t)(int32_t)$AbstractSaslImpl::PRIVACY_PROTECTION)) != 0) {
					$set(this, myCiphers, getPlatformCiphers());
					$var($StringBuilder, sb, $new($StringBuilder));
					$init($DigestMD5Base);
					for (int32_t i = 0; i < $nc($DigestMD5Base::CIPHER_TOKENS)->length; ++i) {
						if ($nc(this->myCiphers)->get(i) != 0) {
							if (sb->length() > 0) {
								sb->append(u',');
							}
							sb->append($nc($DigestMD5Base::CIPHER_TOKENS)->get(i));
						}
					}
					$assign(supportedCiphers, sb->toString());
				}
				try {
					$assign(challenge, generateChallenge(this->serverRealms, this->specifiedQops, supportedCiphers));
					this->step = 3;
					return challenge;
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					$throwNew($SaslException, "DIGEST-MD5: Error generating challenge"_s, e);
				}
			}
		case 3:
			{
				{
					$var($Throwable, var$0, nullptr);
					try {
						$var($byteArray2, responseVal, parseDirectives(response, DigestMD5Server::DIRECTIVE_KEY, nullptr, DigestMD5Server::REALM));
						$assign(challenge, validateClientResponse(responseVal));
					} catch ($Throwable&) {
						$assign(var$0, $catch());
					} /*finally*/ {
						this->step = 0;
					}
					if (var$0 != nullptr) {
						$throw(var$0);
					}
				}
				this->completed = true;
				if (this->integrity && this->privacy) {
					$set(this, secCtx, $new($DigestMD5Base$DigestPrivacy, this, false));
				} else if (this->integrity) {
					$set(this, secCtx, $new($DigestMD5Base$DigestIntegrity, this, false));
				}
				return challenge;
			}
		default:
			{
				$throwNew($SaslException, "DIGEST-MD5: Server at illegal state"_s);
			}
		}
	}
}

$bytes* DigestMD5Server::generateChallenge($List* realms, $String* qopStr, $String* cipherStr) {
	$var($ByteArrayOutputStream, out, $new($ByteArrayOutputStream));
	for (int32_t i = 0; realms != nullptr && i < realms->size(); ++i) {
		out->write($("realm=\""_s->getBytes(this->encoding)));
		writeQuotedStringValue(out, $($nc(($cast($String, $(realms->get(i)))))->getBytes(this->encoding)));
		out->write((int32_t)u'\"');
		out->write((int32_t)u',');
	}
	out->write($(("nonce=\""_s)->getBytes(this->encoding)));
	$set(this, nonce, generateNonce());
	writeQuotedStringValue(out, this->nonce);
	out->write((int32_t)u'\"');
	out->write((int32_t)u',');
	if (qopStr != nullptr) {
		out->write($(("qop=\""_s)->getBytes(this->encoding)));
		writeQuotedStringValue(out, $(qopStr->getBytes(this->encoding)));
		out->write((int32_t)u'\"');
		out->write((int32_t)u',');
	}
	if (this->recvMaxBufSize != $DigestMD5Base::DEFAULT_MAXBUF) {
		out->write($($nc(($$str({"maxbuf=\""_s, $$str(this->recvMaxBufSize), "\","_s})))->getBytes(this->encoding)));
	}
	if (this->useUTF8) {
		out->write($($nc(DigestMD5Server::UTF8_DIRECTIVE)->getBytes(this->encoding)));
	}
	if (cipherStr != nullptr) {
		out->write($("cipher=\""_s->getBytes(this->encoding)));
		writeQuotedStringValue(out, $(cipherStr->getBytes(this->encoding)));
		out->write((int32_t)u'\"');
		out->write((int32_t)u',');
	}
	out->write($($nc(DigestMD5Server::ALGORITHM_DIRECTIVE)->getBytes(this->encoding)));
	return out->toByteArray();
}

$bytes* DigestMD5Server::validateClientResponse($byteArray2* responseVal) {
	if ($nc(responseVal)->get(DigestMD5Server::CHARSET) != nullptr) {
		if (!this->useUTF8 || !"utf-8"_s->equals($$new($String, responseVal->get(DigestMD5Server::CHARSET), this->encoding))) {
			$throwNew($SaslException, $$str({"DIGEST-MD5: digest response format violation. Incompatible charset value: "_s, $$new($String, responseVal->get(DigestMD5Server::CHARSET))}));
		}
	}
	int32_t clntMaxBufSize = ($nc(responseVal)->get(DigestMD5Server::MAXBUF) == nullptr) ? $DigestMD5Base::DEFAULT_MAXBUF : $Integer::parseInt($$new($String, $nc(responseVal)->get(DigestMD5Server::MAXBUF), this->encoding));
	this->sendMaxBufSize = ((this->sendMaxBufSize == 0) ? clntMaxBufSize : $Math::min(this->sendMaxBufSize, clntMaxBufSize));
	$var($String, username, nullptr);
	if ($nc(responseVal)->get(DigestMD5Server::USERNAME) != nullptr) {
		$assign(username, $new($String, responseVal->get(DigestMD5Server::USERNAME), this->encoding));
		$init($AbstractSaslImpl);
		$init($Level);
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST82:Username: {0}"_s, $of(username));
	} else {
		$throwNew($SaslException, "DIGEST-MD5: digest response format violation. Missing username."_s);
	}
	$set(this, negotiatedRealm, ($nc(responseVal)->get(DigestMD5Server::REALM) != nullptr) ? $new($String, $nc(responseVal)->get(DigestMD5Server::REALM), this->encoding) : ""_s);
	$init($AbstractSaslImpl);
	$init($Level);
	$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST83:Client negotiated realm: {0}"_s, $of(this->negotiatedRealm));
	if (!$nc(this->serverRealms)->contains(this->negotiatedRealm)) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: digest response format violation. Nonexistent realm: "_s, this->negotiatedRealm}));
	}
	if ($nc(responseVal)->get(DigestMD5Server::NONCE) == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: digest response format violation. Missing nonce."_s);
	}
	$var($bytes, nonceFromClient, $nc(responseVal)->get(DigestMD5Server::NONCE));
	if (!$Arrays::equals(nonceFromClient, this->nonce)) {
		$throwNew($SaslException, "DIGEST-MD5: digest response format violation. Mismatched nonce."_s);
	}
	if (responseVal->get(DigestMD5Server::CNONCE) == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: digest response format violation. Missing cnonce."_s);
	}
	$var($bytes, cnonce, responseVal->get(DigestMD5Server::CNONCE));
	if (responseVal->get(DigestMD5Server::NONCE_COUNT) != nullptr && DigestMD5Server::NONCE_COUNT_VALUE != $Integer::parseInt($$new($String, responseVal->get(DigestMD5Server::NONCE_COUNT), this->encoding), 16)) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: digest response format violation. Nonce count does not match: "_s, $$new($String, responseVal->get(DigestMD5Server::NONCE_COUNT))}));
	}
	$set(this, negotiatedQop, (responseVal->get(DigestMD5Server::QOP) != nullptr) ? $new($String, responseVal->get(DigestMD5Server::QOP), this->encoding) : "auth"_s);
	$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST84:Client negotiated qop: {0}"_s, $of(this->negotiatedQop));
	int8_t cQop = 0;
	{
		$var($String, s18623$, this->negotiatedQop);
		int32_t tmp18623$ = -1;
		switch ($nc(s18623$)->hashCode()) {
		case 0x002DDDA8:
			{
				if (s18623$->equals("auth"_s)) {
					tmp18623$ = 0;
				}
				break;
			}
		case 0x554CD64A:
			{
				if (s18623$->equals("auth-int"_s)) {
					tmp18623$ = 1;
				}
				break;
			}
		case 0x544B3C29:
			{
				if (s18623$->equals("auth-conf"_s)) {
					tmp18623$ = 2;
				}
				break;
			}
		}
		switch (tmp18623$) {
		case 0:
			{
				cQop = $AbstractSaslImpl::NO_PROTECTION;
				break;
			}
		case 1:
			{
				cQop = $AbstractSaslImpl::INTEGRITY_ONLY_PROTECTION;
				this->integrity = true;
				this->rawSendSize = this->sendMaxBufSize - 16;
				break;
			}
		case 2:
			{
				cQop = $AbstractSaslImpl::PRIVACY_PROTECTION;
				this->integrity = (this->privacy = true);
				this->rawSendSize = this->sendMaxBufSize - 26;
				break;
			}
		default:
			{
				$throwNew($SaslException, $$str({"DIGEST-MD5: digest response format violation. Invalid QOP: "_s, this->negotiatedQop}));
			}
		}
	}
	if (((int32_t)(cQop & (uint32_t)(int32_t)this->allQop)) == 0) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: server does not support  qop: "_s, this->negotiatedQop}));
	}
	if (this->privacy) {
		$set(this, negotiatedCipher, (responseVal->get(DigestMD5Server::CIPHER) != nullptr) ? $new($String, responseVal->get(DigestMD5Server::CIPHER), this->encoding) : ($String*)nullptr);
		if (this->negotiatedCipher == nullptr) {
			$throwNew($SaslException, "DIGEST-MD5: digest response format violation. No cipher specified."_s);
		}
		int32_t foundCipher = -1;
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST85:Client negotiated cipher: {0}"_s, $of(this->negotiatedCipher));
		$init($DigestMD5Base);
		for (int32_t j = 0; j < $nc($DigestMD5Base::CIPHER_TOKENS)->length; ++j) {
			if ($nc(this->negotiatedCipher)->equals($nc($DigestMD5Base::CIPHER_TOKENS)->get(j)) && $nc(this->myCiphers)->get(j) != 0) {
				foundCipher = j;
				break;
			}
		}
		if (foundCipher == -1) {
			$throwNew($SaslException, $$str({"DIGEST-MD5: server does not support cipher: "_s, this->negotiatedCipher}));
		}
		if (((int32_t)($nc($DigestMD5Base::CIPHER_MASKS)->get(foundCipher) & (uint32_t)(int32_t)$AbstractSaslImpl::HIGH_STRENGTH)) != 0) {
			$set(this, negotiatedStrength, "high"_s);
		} else {
			if (((int32_t)($nc($DigestMD5Base::CIPHER_MASKS)->get(foundCipher) & (uint32_t)(int32_t)$AbstractSaslImpl::MEDIUM_STRENGTH)) != 0) {
				$set(this, negotiatedStrength, "medium"_s);
			} else {
				$set(this, negotiatedStrength, "low"_s);
			}
		}
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST86:Negotiated strength: {0}"_s, $of(this->negotiatedStrength));
	}
	$var($String, digestUriFromResponse, (responseVal->get(DigestMD5Server::DIGEST_URI)) != nullptr ? $new($String, responseVal->get(DigestMD5Server::DIGEST_URI), this->encoding) : ($String*)nullptr);
	if (digestUriFromResponse != nullptr) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST87:digest URI: {0}"_s, $of(digestUriFromResponse));
	}
	if (uriMatches(this->digestUri, digestUriFromResponse)) {
		$set(this, digestUri, digestUriFromResponse);
	} else {
		$throwNew($SaslException, $$str({"DIGEST-MD5: digest response format violation. Mismatched URI: "_s, digestUriFromResponse, "; expecting: "_s, this->digestUri}));
	}
	$var($bytes, responseFromClient, responseVal->get(DigestMD5Server::RESPONSE));
	if (responseFromClient == nullptr) {
		$throwNew($SaslException, "DIGEST-MD5: digest response format  violation. Missing response."_s);
	}
	$var($bytes, authzidBytes, nullptr);
	$var($String, authzidFromClient, ($assign(authzidBytes, responseVal->get(DigestMD5Server::AUTHZID))) != nullptr ? $new($String, authzidBytes, this->encoding) : username);
	if (authzidBytes != nullptr) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST88:Authzid: {0}"_s, $of($$new($String, authzidBytes)));
	}
	$var($chars, passwd, nullptr);
	try {
		$var($RealmCallback, rcb, $new($RealmCallback, "DIGEST-MD5 realm: "_s, this->negotiatedRealm));
		$var($NameCallback, ncb, $new($NameCallback, "DIGEST-MD5 authentication ID: "_s, username));
		$var($PasswordCallback, pcb, $new($PasswordCallback, "DIGEST-MD5 password: "_s, false));
		$nc(this->cbh)->handle($$new($CallbackArray, {
			static_cast<$Callback*>(rcb),
			static_cast<$Callback*>(ncb),
			static_cast<$Callback*>(pcb)
		}));
		$assign(passwd, pcb->getPassword());
		pcb->clearPassword();
	} catch ($UnsupportedCallbackException&) {
		$var($UnsupportedCallbackException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: Cannot perform callback to acquire password"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: IO error acquiring password"_s, e);
	}
	if (passwd == nullptr) {
		$throwNew($SaslException, $$str({"DIGEST-MD5: cannot acquire password for "_s, username, " in realm : "_s, this->negotiatedRealm}));
	}
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			$var($bytes, expectedResponse, nullptr);
			try {
				$assign(expectedResponse, generateResponseValue("AUTHENTICATE"_s, this->digestUri, this->negotiatedQop, username, this->negotiatedRealm, passwd, this->nonce, cnonce, DigestMD5Server::NONCE_COUNT_VALUE, authzidBytes));
			} catch ($NoSuchAlgorithmException&) {
				$var($NoSuchAlgorithmException, e, $catch());
				$throwNew($SaslException, "DIGEST-MD5: problem duplicating client response"_s, e);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($SaslException, "DIGEST-MD5: problem duplicating client response"_s, e);
			}
			if (!$Arrays::equals(responseFromClient, expectedResponse)) {
				$throwNew($SaslException, "DIGEST-MD5: digest response format violation. Mismatched response."_s);
			}
			try {
				$var($AuthorizeCallback, acb, $new($AuthorizeCallback, username, authzidFromClient));
				$nc(this->cbh)->handle($$new($CallbackArray, {static_cast<$Callback*>(acb)}));
				if (acb->isAuthorized()) {
					$set(this, authzid, acb->getAuthorizedID());
				} else {
					$throwNew($SaslException, $$str({"DIGEST-MD5: "_s, username, " is not authorized to act as "_s, authzidFromClient}));
				}
			} catch ($SaslException&) {
				$var($SaslException, e, $catch());
				$throw(e);
			} catch ($UnsupportedCallbackException&) {
				$var($UnsupportedCallbackException, e, $catch());
				$throwNew($SaslException, "DIGEST-MD5: Cannot perform callback to check authzid"_s, e);
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$throwNew($SaslException, "DIGEST-MD5: IO error checking authzid"_s, e);
			}
			$assign(var$2, generateResponseAuth(username, passwd, cnonce, DigestMD5Server::NONCE_COUNT_VALUE, authzidBytes));
			return$1 = true;
			goto $finally;
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			for (int32_t i = 0; i < $nc(passwd)->length; ++i) {
				passwd->set(i, (char16_t)0);
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

bool DigestMD5Server::uriMatches($String* thisUri, $String* incomingUri) {
	$init(DigestMD5Server);
	if ($nc(thisUri)->equalsIgnoreCase(incomingUri)) {
		return true;
	}
	if ($nc(thisUri)->endsWith("/*"_s)) {
		int32_t protoAndSlash = thisUri->length() - 1;
		$var($String, thisProtoAndSlash, thisUri->substring(0, protoAndSlash));
		$var($String, incomingProtoAndSlash, $nc(incomingUri)->substring(0, protoAndSlash));
		return thisProtoAndSlash->equalsIgnoreCase(incomingProtoAndSlash);
	}
	return false;
}

$bytes* DigestMD5Server::generateResponseAuth($String* username, $chars* passwd, $bytes* cnonce, int32_t nonceCount, $bytes* authzidBytes) {
	try {
		$var($bytes, responseValue, generateResponseValue(""_s, this->digestUri, this->negotiatedQop, username, this->negotiatedRealm, passwd, this->nonce, cnonce, nonceCount, authzidBytes));
		$var($bytes, challenge, $new($bytes, $nc(responseValue)->length + 8));
		$System::arraycopy($("rspauth="_s->getBytes(this->encoding)), 0, challenge, 0, 8);
		$System::arraycopy(responseValue, 0, challenge, 8, responseValue->length);
		return challenge;
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: problem generating response"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "DIGEST-MD5: problem generating response"_s, e);
	}
	$shouldNotReachHere();
}

$String* DigestMD5Server::getAuthorizationID() {
	if (this->completed) {
		return this->authzid;
	} else {
		$throwNew($IllegalStateException, "DIGEST-MD5 server negotiation not complete"_s);
	}
}

void clinit$DigestMD5Server($Class* class$) {
	$assignStatic(DigestMD5Server::UTF8_DIRECTIVE, "charset=utf-8,"_s);
	$assignStatic(DigestMD5Server::ALGORITHM_DIRECTIVE, "algorithm=md5-sess"_s);
	$assignStatic(DigestMD5Server::UTF8_PROPERTY, "com.sun.security.sasl.digest.utf8"_s);
	$assignStatic(DigestMD5Server::REALM_PROPERTY, "com.sun.security.sasl.digest.realm"_s);
	$assignStatic(DigestMD5Server::MY_CLASS_NAME, DigestMD5Server::class$->getName());
	$assignStatic(DigestMD5Server::DIRECTIVE_KEY, $new($StringArray, {
		"username"_s,
		"realm"_s,
		"nonce"_s,
		"cnonce"_s,
		"nonce-count"_s,
		"qop"_s,
		"digest-uri"_s,
		"response"_s,
		"maxbuf"_s,
		"charset"_s,
		"cipher"_s,
		"authzid"_s,
		"auth-param"_s
	}));
}

DigestMD5Server::DigestMD5Server() {
}

$Class* DigestMD5Server::load$($String* name, bool initialize) {
	$loadClass(DigestMD5Server, name, initialize, &_DigestMD5Server_ClassInfo_, clinit$DigestMD5Server, allocate$DigestMD5Server);
	return class$;
}

$Class* DigestMD5Server::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com