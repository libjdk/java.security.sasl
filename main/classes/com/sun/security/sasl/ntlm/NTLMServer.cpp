#include <com/sun/security/sasl/ntlm/NTLMServer.h>

#include <com/sun/security/ntlm/NTLMException.h>
#include <com/sun/security/ntlm/Server.h>
#include <com/sun/security/sasl/ntlm/NTLMServer$1.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef NTLM_DOMAIN
#undef NTLM_HOSTNAME
#undef NTLM_RANDOM
#undef NTLM_VERSION

using $NTLMException = ::com::sun::security::ntlm::NTLMException;
using $Server = ::com::sun::security::ntlm::Server;
using $NTLMServer$1 = ::com::sun::security::sasl::ntlm::NTLMServer$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $SaslException = ::javax::security::sasl::SaslException;
using $SaslServer = ::javax::security::sasl::SaslServer;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace ntlm {

$FieldInfo _NTLMServer_FieldInfo_[] = {
	{"NTLM_VERSION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMServer, NTLM_VERSION)},
	{"NTLM_DOMAIN", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMServer, NTLM_DOMAIN)},
	{"NTLM_HOSTNAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMServer, NTLM_HOSTNAME)},
	{"NTLM_RANDOM", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NTLMServer, NTLM_RANDOM)},
	{"random", "Ljava/util/Random;", nullptr, $PRIVATE | $FINAL, $field(NTLMServer, random)},
	{"server", "Lcom/sun/security/ntlm/Server;", nullptr, $PRIVATE | $FINAL, $field(NTLMServer, server)},
	{"nonce", "[B", nullptr, $PRIVATE, $field(NTLMServer, nonce)},
	{"step", "I", nullptr, $PRIVATE, $field(NTLMServer, step)},
	{"authzId", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMServer, authzId)},
	{"mech", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(NTLMServer, mech)},
	{"hostname", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMServer, hostname)},
	{"target", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NTLMServer, target)},
	{}
};

$MethodInfo _NTLMServer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)V", 0, $method(static_cast<void(NTLMServer::*)($String*,$String*,$String*,$Map*,$CallbackHandler*)>(&NTLMServer::init$)), "javax.security.sasl.SaslException"},
	{"dispose", "()V", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"evaluateResponse", "([B)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"getAuthorizationID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{}
};

$InnerClassInfo _NTLMServer_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.ntlm.NTLMServer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NTLMServer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.security.sasl.ntlm.NTLMServer",
	"java.lang.Object",
	"javax.security.sasl.SaslServer",
	_NTLMServer_FieldInfo_,
	_NTLMServer_MethodInfo_,
	nullptr,
	nullptr,
	_NTLMServer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.security.sasl.ntlm.NTLMServer$1"
};

$Object* allocate$NTLMServer($Class* clazz) {
	return $of($alloc(NTLMServer));
}

$String* NTLMServer::NTLM_VERSION = nullptr;
$String* NTLMServer::NTLM_DOMAIN = nullptr;
$String* NTLMServer::NTLM_HOSTNAME = nullptr;
$String* NTLMServer::NTLM_RANDOM = nullptr;

void NTLMServer::init$($String* mech, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	$useLocalCurrentObjectStackCache();
	this->step = 0;
	$set(this, mech, mech);
	$var($String, version, nullptr);
	$var($String, domain, nullptr);
	$var($Random, rtmp, nullptr);
	if (props != nullptr) {
		$assign(domain, $cast($String, props->get(NTLMServer::NTLM_DOMAIN)));
		$assign(version, $cast($String, props->get(NTLMServer::NTLM_VERSION)));
		$assign(rtmp, $cast($Random, props->get(NTLMServer::NTLM_RANDOM)));
	}
	$set(this, random, rtmp != nullptr ? rtmp : $new($Random));
	if (version == nullptr) {
		$assign(version, $System::getProperty("ntlm.version"_s));
	}
	if (domain == nullptr) {
		$assign(domain, serverName);
	}
	if (domain == nullptr) {
		$throwNew($SaslException, "Domain must be provided as the serverName argument or in props"_s);
	}
	try {
		$set(this, server, $new($NTLMServer$1, this, version, domain, cbh));
	} catch ($NTLMException&) {
		$var($NTLMException, ne, $catch());
		$throwNew($SaslException, "NTLM: server creation failure"_s, ne);
	}
	$set(this, nonce, $new($bytes, 8));
}

$String* NTLMServer::getMechanismName() {
	return this->mech;
}

$bytes* NTLMServer::evaluateResponse($bytes* response) {
	$useLocalCurrentObjectStackCache();
	try {
		++this->step;
		if (this->step == 1) {
			$nc(this->random)->nextBytes(this->nonce);
			return $nc(this->server)->type2(response, this->nonce);
		} else {
			$var($StringArray, out, $nc(this->server)->verify(response, this->nonce));
			$set(this, authzId, $nc(out)->get(0));
			$set(this, hostname, out->get(1));
			$set(this, target, out->get(2));
			return nullptr;
		}
	} catch ($NTLMException&) {
		$var($NTLMException, ex, $catch());
		$throwNew($SaslException, "NTLM: generate response failure"_s, ex);
	}
	$shouldNotReachHere();
}

bool NTLMServer::isComplete() {
	return this->step >= 2;
}

$String* NTLMServer::getAuthorizationID() {
	if (!isComplete()) {
		$throwNew($IllegalStateException, "authentication not complete"_s);
	}
	return this->authzId;
}

$bytes* NTLMServer::unwrap($bytes* incoming, int32_t offset, int32_t len) {
	$throwNew($IllegalStateException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$bytes* NTLMServer::wrap($bytes* outgoing, int32_t offset, int32_t len) {
	$throwNew($IllegalStateException, "Not supported yet."_s);
	$shouldNotReachHere();
}

$Object* NTLMServer::getNegotiatedProperty($String* propName) {
	if (!isComplete()) {
		$throwNew($IllegalStateException, "authentication not complete"_s);
	}
	{
		$var($String, s7835$, propName);
		int32_t tmp7835$ = -1;
		switch ($nc(s7835$)->hashCode()) {
		case (int32_t)0xA3B21A61:
			{
				if (s7835$->equals("javax.security.sasl.qop"_s)) {
					tmp7835$ = 0;
				}
				break;
			}
		case 0x0AEF67F5:
			{
				if (s7835$->equals("javax.security.sasl.bound.server.name"_s)) {
					tmp7835$ = 1;
				}
				break;
			}
		case 0x3F36F852:
			{
				if (s7835$->equals("com.sun.security.sasl.ntlm.hostname"_s)) {
					tmp7835$ = 2;
				}
				break;
			}
		}
		switch (tmp7835$) {
		case 0:
			{
				return $of("auth"_s);
			}
		case 1:
			{
				return $of(this->target);
			}
		case 2:
			{
				return $of(this->hostname);
			}
		default:
			{
				return $of(nullptr);
			}
		}
	}
}

void NTLMServer::dispose() {
	return;
}

NTLMServer::NTLMServer() {
}

void clinit$NTLMServer($Class* class$) {
	$assignStatic(NTLMServer::NTLM_VERSION, "com.sun.security.sasl.ntlm.version"_s);
	$assignStatic(NTLMServer::NTLM_DOMAIN, "com.sun.security.sasl.ntlm.domain"_s);
	$assignStatic(NTLMServer::NTLM_HOSTNAME, "com.sun.security.sasl.ntlm.hostname"_s);
	$assignStatic(NTLMServer::NTLM_RANDOM, "com.sun.security.sasl.ntlm.random"_s);
}

$Class* NTLMServer::load$($String* name, bool initialize) {
	$loadClass(NTLMServer, name, initialize, &_NTLMServer_ClassInfo_, clinit$NTLMServer, allocate$NTLMServer);
	return class$;
}

$Class* NTLMServer::class$ = nullptr;

				} // ntlm
			} // sasl
		} // security
	} // sun
} // com