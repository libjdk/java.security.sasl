#include <com/sun/security/sasl/ClientFactoryImpl.h>

#include <com/sun/security/sasl/CramMD5Client.h>
#include <com/sun/security/sasl/ExternalClient.h>
#include <com/sun/security/sasl/PlainClient.h>
#include <com/sun/security/sasl/util/PolicyUtils.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Map.h>
#include <javax/security/auth/callback/Callback.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/auth/callback/NameCallback.h>
#include <javax/security/auth/callback/PasswordCallback.h>
#include <javax/security/auth/callback/UnsupportedCallbackException.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef CRAMMD5
#undef EXTERNAL
#undef NOACTIVE
#undef NOANONYMOUS
#undef NODICTIONARY
#undef NOPLAINTEXT
#undef PLAIN
#undef UTF_8

using $CallbackArray = $Array<::javax::security::auth::callback::Callback>;
using $CramMD5Client = ::com::sun::security::sasl::CramMD5Client;
using $ExternalClient = ::com::sun::security::sasl::ExternalClient;
using $PlainClient = ::com::sun::security::sasl::PlainClient;
using $PolicyUtils = ::com::sun::security::sasl::util::PolicyUtils;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Map = ::java::util::Map;
using $Callback = ::javax::security::auth::callback::Callback;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $NameCallback = ::javax::security::auth::callback::NameCallback;
using $PasswordCallback = ::javax::security::auth::callback::PasswordCallback;
using $UnsupportedCallbackException = ::javax::security::auth::callback::UnsupportedCallbackException;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslClientFactory = ::javax::security::sasl::SaslClientFactory;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {

$FieldInfo _ClientFactoryImpl_FieldInfo_[] = {
	{"myMechs", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientFactoryImpl, myMechs)},
	{"mechPolicies", "[I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClientFactoryImpl, mechPolicies)},
	{"EXTERNAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientFactoryImpl, EXTERNAL)},
	{"CRAMMD5", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientFactoryImpl, CRAMMD5)},
	{"PLAIN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ClientFactoryImpl, PLAIN)},
	{}
};

$MethodInfo _ClientFactoryImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ClientFactoryImpl::*)()>(&ClientFactoryImpl::init$))},
	{"createSaslClient", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"getMechanismNames", "(Ljava/util/Map;)[Ljava/lang/String;", "(Ljava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC},
	{"getUserInfo", "(Ljava/lang/String;Ljava/lang/String;Ljavax/security/auth/callback/CallbackHandler;)[Ljava/lang/Object;", nullptr, $PRIVATE, $method(static_cast<$ObjectArray*(ClientFactoryImpl::*)($String*,$String*,$CallbackHandler*)>(&ClientFactoryImpl::getUserInfo)), "javax.security.sasl.SaslException"},
	{}
};

$ClassInfo _ClientFactoryImpl_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.sasl.ClientFactoryImpl",
	"java.lang.Object",
	"javax.security.sasl.SaslClientFactory",
	_ClientFactoryImpl_FieldInfo_,
	_ClientFactoryImpl_MethodInfo_
};

$Object* allocate$ClientFactoryImpl($Class* clazz) {
	return $of($alloc(ClientFactoryImpl));
}

$StringArray* ClientFactoryImpl::myMechs = nullptr;
$ints* ClientFactoryImpl::mechPolicies = nullptr;

void ClientFactoryImpl::init$() {
}

$SaslClient* ClientFactoryImpl::createSaslClient($StringArray* mechs, $String* authorizationId, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(mechs)->length; ++i) {
		bool var$0 = $nc(mechs->get(i))->equals($nc(ClientFactoryImpl::myMechs)->get(ClientFactoryImpl::EXTERNAL));
		if (var$0 && $PolicyUtils::checkPolicy($nc(ClientFactoryImpl::mechPolicies)->get(ClientFactoryImpl::EXTERNAL), props)) {
			return $new($ExternalClient, authorizationId);
		} else {
			bool var$2 = $nc(mechs->get(i))->equals($nc(ClientFactoryImpl::myMechs)->get(ClientFactoryImpl::CRAMMD5));
			if (var$2 && $PolicyUtils::checkPolicy($nc(ClientFactoryImpl::mechPolicies)->get(ClientFactoryImpl::CRAMMD5), props)) {
				$var($ObjectArray, uinfo, getUserInfo("CRAM-MD5"_s, authorizationId, cbh));
				return $new($CramMD5Client, $cast($String, $nc(uinfo)->get(0)), $cast($bytes, uinfo->get(1)));
			} else {
				bool var$4 = $nc(mechs->get(i))->equals($nc(ClientFactoryImpl::myMechs)->get(ClientFactoryImpl::PLAIN));
				if (var$4 && $PolicyUtils::checkPolicy($nc(ClientFactoryImpl::mechPolicies)->get(ClientFactoryImpl::PLAIN), props)) {
					$var($ObjectArray, uinfo, getUserInfo("PLAIN"_s, authorizationId, cbh));
					return $new($PlainClient, authorizationId, $cast($String, $nc(uinfo)->get(0)), $cast($bytes, uinfo->get(1)));
				}
			}
		}
	}
	return nullptr;
}

$StringArray* ClientFactoryImpl::getMechanismNames($Map* props) {
	return $PolicyUtils::filterMechs(ClientFactoryImpl::myMechs, ClientFactoryImpl::mechPolicies, props);
}

$ObjectArray* ClientFactoryImpl::getUserInfo($String* prefix, $String* authorizationId, $CallbackHandler* cbh) {
	$useLocalCurrentObjectStackCache();
	if (cbh == nullptr) {
		$throwNew($SaslException, "Callback handler to get username/password required"_s);
	}
	try {
		$var($String, userPrompt, $str({prefix, " authentication id: "_s}));
		$var($String, passwdPrompt, $str({prefix, " password: "_s}));
		$var($NameCallback, ncb, authorizationId == nullptr ? $new($NameCallback, userPrompt) : $new($NameCallback, userPrompt, authorizationId));
		$var($PasswordCallback, pcb, $new($PasswordCallback, passwdPrompt, false));
		$nc(cbh)->handle($$new($CallbackArray, {
			static_cast<$Callback*>(ncb),
			static_cast<$Callback*>(pcb)
		}));
		$var($chars, pw, pcb->getPassword());
		$var($bytes, bytepw, nullptr);
		$var($String, authId, nullptr);
		if (pw != nullptr) {
			$init($StandardCharsets);
			$assign(bytepw, $$new($String, pw)->getBytes($StandardCharsets::UTF_8));
			pcb->clearPassword();
		} else {
			$assign(bytepw, nullptr);
		}
		$assign(authId, $nc(ncb)->getName());
		return $new($ObjectArray, {
			$of(authId),
			$of(bytepw)
		});
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($SaslException, "Cannot get password"_s, e);
	} catch ($UnsupportedCallbackException&) {
		$var($UnsupportedCallbackException, e, $catch());
		$throwNew($SaslException, "Cannot get userid/password"_s, e);
	}
	$shouldNotReachHere();
}

void clinit$ClientFactoryImpl($Class* class$) {
	$assignStatic(ClientFactoryImpl::myMechs, $new($StringArray, {
		"EXTERNAL"_s,
		"CRAM-MD5"_s,
		"PLAIN"_s
	}));
	$assignStatic(ClientFactoryImpl::mechPolicies, $new($ints, {
		($PolicyUtils::NOPLAINTEXT | $PolicyUtils::NOACTIVE) | $PolicyUtils::NODICTIONARY,
		$PolicyUtils::NOPLAINTEXT | $PolicyUtils::NOANONYMOUS,
		$PolicyUtils::NOANONYMOUS
	}));
}

ClientFactoryImpl::ClientFactoryImpl() {
}

$Class* ClientFactoryImpl::load$($String* name, bool initialize) {
	$loadClass(ClientFactoryImpl, name, initialize, &_ClientFactoryImpl_ClassInfo_, clinit$ClientFactoryImpl, allocate$ClientFactoryImpl);
	return class$;
}

$Class* ClientFactoryImpl::class$ = nullptr;

			} // sasl
		} // security
	} // sun
} // com