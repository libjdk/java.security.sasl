#include <com/sun/security/sasl/ntlm/NTLMClient.h>

#include <com/sun/security/ntlm/Client.h>
#include <com/sun/security/ntlm/NTLMException.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetAddress.h>
#include <java/net/UnknownHostException.h>
#include <java/security/GeneralSecurityException.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/TextInputCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/RealmCallback.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef NTLM_DOMAIN
#undef NTLM_HOSTNAME
#undef NTLM_RANDOM
#undef NTLM_VERSION
#undef QOP

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $Client = ::com::sun::security::ntlm::Client;
using $NTLMException = ::com::sun::security::ntlm::NTLMException;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $InetAddress = ::java::net::InetAddress;
using $UnknownHostException = ::java::net::UnknownHostException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $TextInputCallback = ::javax::security::auth::callback::TextInputCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $RealmCallback = ::javax::security::sasl::RealmCallback;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace ntlm {

$FieldInfo _NTLMClient_FieldInfo_[] = {
	{"NTLM_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMClient, NTLM_VERSION)},
	{"NTLM_RANDOM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMClient, NTLM_RANDOM)},
	{"NTLM_DOMAIN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMClient, NTLM_DOMAIN)},
	{"NTLM_HOSTNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMClient, NTLM_HOSTNAME)},
	{"client", "Lcom/sun/security/ntlm/Client;", nullptr, $PRIVATE | $FINAL, $field(NTLMClient, client)},
	{"mech", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NTLMClient, mech)},
	{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $FINAL, $field(NTLMClient, random)},
	{"step", "I", nullptr, $PRIVATE, $field(NTLMClient, step)},
	{}
};

$MethodInfo _NTLMClient_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)V", 0, $method(static_cast<void(NTLMClient::*)($String*,$String*,$String*,$String*,$Map*,$CallbackHandler*)>(&NTLMClient::init$)), "javax.security.sasl.SaslException"},
	{"dispose", "()V", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"evaluateChallenge", "([B)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"hasInitialResponse", "()Z", nullptr, $PUBLIC},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _NTLMClient_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.ntlm.NTLMClient",
	"java.lang.Object",
	"javax.security.sasl.SaslClient",
	_NTLMClient_FieldInfo_,
	_NTLMClient_MethodInfo_
};

$Object* allocate$NTLMClient($Class* clazz) {
	return $of($alloc(NTLMClient));
}

$String* NTLMClient::NTLM_VERSION = nullptr;
$String* NTLMClient::NTLM_RANDOM = nullptr;
$String* NTLMClient::NTLM_DOMAIN = nullptr;
$String* NTLMClient::NTLM_HOSTNAME = nullptr;

void NTLMClient::init$($String* mech, $String* authzid, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	this->step = 0;
	$set(this, mech, mech);
	$var($String, version, nullptr);
	$var($Random, rtmp, nullptr);
	$var($String, hostname, nullptr);
	if (props != nullptr) {
		$init($Sasl);
		$var($String, qop, $cast($String, props->get($Sasl::QOP)));
		if (qop != nullptr && !qop->equals("auth"_s)) {
			$throwNew($SaslException, "NTLM only support auth"_s);
		}
		$assign(version, $cast($String, props->get(NTLMClient::NTLM_VERSION)));
		$assign(rtmp, $cast($Random, props->get(NTLMClient::NTLM_RANDOM)));
		$assign(hostname, $cast($String, props->get(NTLMClient::NTLM_HOSTNAME)));
	}
	$set(this, random, rtmp != nullptr ? rtmp : $new($Random));
	if (version == nullptr) {
		$assign(version, $System::getProperty("ntlm.version"_s));
	}
	$var($RealmCallback, dcb, (serverName != nullptr && !serverName->isEmpty()) ? $new($RealmCallback, "Realm: "_s, serverName) : $new($RealmCallback, "Realm: "_s));
	$var($NameCallback, ncb, (authzid != nullptr && !authzid->isEmpty()) ? $new($NameCallback, "User name: "_s, authzid) : $new($NameCallback, "User name: "_s));
	$var($PasswordCallback, pcb, $new($PasswordCallback, "Password: "_s, false));
	try {
		$nc(cbh)->handle($$new($CallbackArray, {
			static_cast<$Callback*>(dcb),
			static_cast<$Callback*>(ncb),
			static_cast<$Callback*>(pcb)
		}));
	} catch ($UnsupportedCallbackException&) {
		$var($UnsupportedCallbackException, e, $catch());
		$throwNew($SaslException, "NTLM: Cannot perform callback to acquire realm, username or password"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "NTLM: Error acquiring realm, username or password"_s, e);
	}
	if (hostname == nullptr) {
		try {
			$assign(hostname, $nc($($InetAddress::getLocalHost()))->getCanonicalHostName());
		} catch ($UnknownHostException&) {
			$var($UnknownHostException, e, $catch());
			$assign(hostname, "localhost"_s);
		}
	}
	try {
		$var($String, name, $nc(ncb)->getName());
		if (name == nullptr) {
			$assign(name, authzid);
		}
		$var($String, domain, $nc(dcb)->getText());
		if (domain == nullptr) {
			$assign(domain, serverName);
		}
		$set(this, client, $new($Client, version, hostname, name, domain, $(pcb->getPassword())));
	} catch ($NTLMException&) {
		$var($NTLMException, ne, $catch());
		$throwNew($SaslException, "NTLM: client creation failure"_s, ne);
	}
}

$String* NTLMClient::getMechanismName() {
	return this->mech;
}

bool NTLMClient::isComplete() {
	return this->step >= 2;
}

$bytes* NTLMClient::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	$throwNew($IllegalStateException, "Not supported."_s);
	$shouldNotReachHere();
}

$bytes* NTLMClient::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	$throwNew($IllegalStateException, "Not supported."_s);
	$shouldNotReachHere();
}

$Object* NTLMClient::getNegotiatedProperty($String* propName) {
	if (!isComplete()) {
		$throwNew($IllegalStateException, "authentication not complete"_s);
	}
	{
		$var($String, s7356$, propName);
		int32_t tmp7356$ = -1;
		switch ($nc(s7356$)->hashCode()) {
		case (int32_t)0xA3B21A61:
			{
				if (s7356$->equals("javax.security.sasl.qop"_s)) {
					tmp7356$ = 0;
				}
				break;
			}
		case 0x00AFECA3:
			{
				if (s7356$->equals("com.sun.security.sasl.ntlm.domain"_s)) {
					tmp7356$ = 1;
				}
				break;
			}
		}
		switch (tmp7356$) {
		case 0:
			{
				return $of("auth"_s);
			}
		case 1:
			{
				return $of($nc(this->client)->getDomain());
			}
		default:
			{
				return $of(nullptr);
			}
		}
	}
}

void NTLMClient::dispose() {
	$nc(this->client)->dispose();
}

bool NTLMClient::hasInitialResponse() {
	return true;
}

$bytes* NTLMClient::evaluateChallenge($bytes* challenge) {
	++this->step;
	if (this->step == 1) {
		return $nc(this->client)->type1();
	} else {
		try {
			$var($bytes, nonce, $new($bytes, 8));
			$nc(this->random)->nextBytes(nonce);
			return $nc(this->client)->type3(challenge, nonce);
		} catch ($NTLMException&) {
			$var($NTLMException, ex, $catch());
			$throwNew($SaslException, "Type3 creation failed"_s, ex);
		}
	}
	$shouldNotReachHere();
}

NTLMClient::NTLMClient() {
}

void clinit$NTLMClient($Class* class$) {
	$assignStatic(NTLMClient::NTLM_VERSION, "com.sun.security.sasl.ntlm.version"_s);
	$assignStatic(NTLMClient::NTLM_RANDOM, "com.sun.security.sasl.ntlm.random"_s);
	$assignStatic(NTLMClient::NTLM_DOMAIN, "com.sun.security.sasl.ntlm.domain"_s);
	$assignStatic(NTLMClient::NTLM_HOSTNAME, "com.sun.security.sasl.ntlm.hostname"_s);
}

$Class* NTLMClient::load$($String* name, bool initialize) {
	$loadClass(NTLMClient, name, initialize, &_NTLMClient_ClassInfo_, clinit$NTLMClient, allocate$NTLMClient);
	return class$;
}

$Class* NTLMClient::class$ = nullptr;

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com