#include <javax/security/sasl/Sasl.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/Sasl$1.h>
#include <javax/security/sasl/Sasl$2.h>
#include <javax/security/sasl/SaslClient.h>
#include <javax/security/sasl/SaslClientFactory.h>
#include <javax/security/sasl/SaslException.h>
#include <javax/security/sasl/SaslServer.h>
#include <javax/security/sasl/SaslServerFactory.h>
#include <jcpp.h>

#undef BOUND_SERVER_NAME
#undef CREDENTIALS
#undef FINE
#undef MAX_BUFFER
#undef POLICY_FORWARD_SECRECY
#undef POLICY_NOACTIVE
#undef POLICY_NOANONYMOUS
#undef POLICY_NODICTIONARY
#undef POLICY_NOPLAINTEXT
#undef POLICY_PASS_CREDENTIALS
#undef QOP
#undef RAW_SEND_SIZE
#undef REUSE
#undef SASL_LOGGER_NAME
#undef SERVER_AUTH
#undef STRENGTH

using $ProviderArray = $Array<::java::security::Provider>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Security = ::java::security::Security;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $Sasl$1 = ::javax::security::sasl::Sasl$1;
using $Sasl$2 = ::javax::security::sasl::Sasl$2;
using $SaslClient = ::javax::security::sasl::SaslClient;
using $SaslClientFactory = ::javax::security::sasl::SaslClientFactory;
using $SaslException = ::javax::security::sasl::SaslException;
using $SaslServer = ::javax::security::sasl::SaslServer;
using $SaslServerFactory = ::javax::security::sasl::SaslServerFactory;

namespace javax {
	namespace security {
		namespace sasl {

class Sasl$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Sasl$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Sasl::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Sasl$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Sasl$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Sasl$$Lambda$lambda$static$0::*)()>(&Sasl$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Sasl$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.security.sasl.Sasl$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Sasl$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Sasl$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Sasl$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _Sasl_FieldInfo_[] = {
	{"disabledMechanisms", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(Sasl, disabledMechanisms)},
	{"SASL_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Sasl, SASL_LOGGER_NAME)},
	{"logger", "Ljava/util/logging/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Sasl, logger)},
	{"QOP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, QOP)},
	{"STRENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, STRENGTH)},
	{"SERVER_AUTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, SERVER_AUTH)},
	{"BOUND_SERVER_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, BOUND_SERVER_NAME)},
	{"MAX_BUFFER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, MAX_BUFFER)},
	{"RAW_SEND_SIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, RAW_SEND_SIZE)},
	{"REUSE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, REUSE)},
	{"POLICY_NOPLAINTEXT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, POLICY_NOPLAINTEXT)},
	{"POLICY_NOACTIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, POLICY_NOACTIVE)},
	{"POLICY_NODICTIONARY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, POLICY_NODICTIONARY)},
	{"POLICY_NOANONYMOUS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, POLICY_NOANONYMOUS)},
	{"POLICY_FORWARD_SECRECY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, POLICY_FORWARD_SECRECY)},
	{"POLICY_PASS_CREDENTIALS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, POLICY_PASS_CREDENTIALS)},
	{"CREDENTIALS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sasl, CREDENTIALS)},
	{}
};

$MethodInfo _Sasl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Sasl::*)()>(&Sasl::init$))},
	{"createSaslClient", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", "([Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslClient;", $PUBLIC | $STATIC, $method(static_cast<$SaslClient*(*)($StringArray*,$String*,$String*,$String*,$Map*,$CallbackHandler*)>(&Sasl::createSaslClient)), "javax.security.sasl.SaslException"},
	{"createSaslServer", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;*>;Ljavax/security/auth/callback/CallbackHandler;)Ljavax/security/sasl/SaslServer;", $PUBLIC | $STATIC, $method(static_cast<$SaslServer*(*)($String*,$String*,$String*,$Map*,$CallbackHandler*)>(&Sasl::createSaslServer)), "javax.security.sasl.SaslException"},
	{"getFactories", "(Ljava/lang/String;)Ljava/util/Set;", "(Ljava/lang/String;)Ljava/util/Set<Ljava/lang/Object;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($String*)>(&Sasl::getFactories))},
	{"getSaslClientFactories", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/security/sasl/SaslClientFactory;>;", $PUBLIC | $STATIC, $method(static_cast<$Enumeration*(*)()>(&Sasl::getSaslClientFactories))},
	{"getSaslServerFactories", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljavax/security/sasl/SaslServerFactory;>;", $PUBLIC | $STATIC, $method(static_cast<$Enumeration*(*)()>(&Sasl::getSaslServerFactories))},
	{"isDisabled", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&Sasl::isDisabled))},
	{"lambda$static$0", "()Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$String*(*)()>(&Sasl::lambda$static$0))},
	{"loadFactory", "(Ljava/security/Provider$Service;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)($Provider$Service*)>(&Sasl::loadFactory)), "javax.security.sasl.SaslException"},
	{}
};

$InnerClassInfo _Sasl_InnerClassesInfo_[] = {
	{"javax.security.sasl.Sasl$2", nullptr, nullptr, 0},
	{"javax.security.sasl.Sasl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Sasl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.security.sasl.Sasl",
	"java.lang.Object",
	nullptr,
	_Sasl_FieldInfo_,
	_Sasl_MethodInfo_,
	nullptr,
	nullptr,
	_Sasl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.security.sasl.Sasl$2,javax.security.sasl.Sasl$1"
};

$Object* allocate$Sasl($Class* clazz) {
	return $of($alloc(Sasl));
}

$List* Sasl::disabledMechanisms = nullptr;
$String* Sasl::SASL_LOGGER_NAME = nullptr;

$Logger* Sasl::logger = nullptr;

$String* Sasl::QOP = nullptr;

$String* Sasl::STRENGTH = nullptr;

$String* Sasl::SERVER_AUTH = nullptr;

$String* Sasl::BOUND_SERVER_NAME = nullptr;

$String* Sasl::MAX_BUFFER = nullptr;

$String* Sasl::RAW_SEND_SIZE = nullptr;

$String* Sasl::REUSE = nullptr;

$String* Sasl::POLICY_NOPLAINTEXT = nullptr;

$String* Sasl::POLICY_NOACTIVE = nullptr;

$String* Sasl::POLICY_NODICTIONARY = nullptr;

$String* Sasl::POLICY_NOANONYMOUS = nullptr;

$String* Sasl::POLICY_FORWARD_SECRECY = nullptr;

$String* Sasl::POLICY_PASS_CREDENTIALS = nullptr;

$String* Sasl::CREDENTIALS = nullptr;

void Sasl::init$() {
}

$SaslClient* Sasl::createSaslClient($StringArray* mechanisms, $String* authorizationId, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	$init(Sasl);
	$var($SaslClient, mech, nullptr);
	$var($SaslClientFactory, fac, nullptr);
	$var($Provider$Service, service, nullptr);
	$var($String, mechName, nullptr);
	for (int32_t i = 0; i < $nc(mechanisms)->length; ++i) {
		if (($assign(mechName, mechanisms->get(i))) == nullptr) {
			$throwNew($NullPointerException, "Mechanism name cannot be null"_s);
		} else if (mechName->length() == 0) {
			continue;
		} else if (isDisabled(mechName)) {
			$init($Level);
			$nc(Sasl::logger)->log($Level::FINE, $$str({"Disabled "_s, mechName, " mechanism ignored"_s}));
			continue;
		}
		$var($String, type, "SaslClientFactory"_s);
		$var($ProviderArray, provs, $Security::getProviders($$str({type, "."_s, mechName})));
		if (provs != nullptr) {
			{
				$var($ProviderArray, arr$, provs);
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($Provider, p, arr$->get(i$));
					{
						$assign(service, $nc(p)->getService(type, mechName));
						if (service == nullptr) {
							continue;
						}
						$assign(fac, $cast($SaslClientFactory, loadFactory(service)));
						if (fac != nullptr) {
							$assign(mech, fac->createSaslClient($$new($StringArray, {mechanisms->get(i)}), authorizationId, protocol, serverName, props, cbh));
							if (mech != nullptr) {
								return mech;
							}
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$Object* Sasl::loadFactory($Provider$Service* service) {
	$init(Sasl);
	try {
		return $of($nc(service)->newInstance(nullptr));
	} catch ($InvalidParameterException&) {
		$var($Exception, e, $catch());
		$throwNew($SaslException, $$str({"Cannot instantiate service "_s, service}), e);
	} catch ($NoSuchAlgorithmException&) {
		$var($Exception, e, $catch());
		$throwNew($SaslException, $$str({"Cannot instantiate service "_s, service}), e);
	}
	$shouldNotReachHere();
}

$SaslServer* Sasl::createSaslServer($String* mechanism, $String* protocol, $String* serverName, $Map* props, $CallbackHandler* cbh) {
	$init(Sasl);
	$var($SaslServer, mech, nullptr);
	$var($SaslServerFactory, fac, nullptr);
	$var($Provider$Service, service, nullptr);
	if (mechanism == nullptr) {
		$throwNew($NullPointerException, "Mechanism name cannot be null"_s);
	} else if (mechanism->length() == 0) {
		return nullptr;
	} else if (isDisabled(mechanism)) {
		$init($Level);
		$nc(Sasl::logger)->log($Level::FINE, $$str({"Disabled "_s, mechanism, " mechanism ignored"_s}));
		return nullptr;
	}
	$var($String, type, "SaslServerFactory"_s);
	$var($ProviderArray, provs, $Security::getProviders($$str({type, "."_s, mechanism})));
	if (provs != nullptr) {
		{
			$var($ProviderArray, arr$, provs);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Provider, p, arr$->get(i$));
				{
					$assign(service, $nc(p)->getService(type, mechanism));
					if (service == nullptr) {
						$throwNew($SaslException, $$str({"Provider does not support "_s, mechanism, " "_s, type}));
					}
					$assign(fac, $cast($SaslServerFactory, loadFactory(service)));
					if (fac != nullptr) {
						$assign(mech, fac->createSaslServer(mechanism, protocol, serverName, props, cbh));
						if (mech != nullptr) {
							return mech;
						}
					}
				}
			}
		}
	}
	return nullptr;
}

$Enumeration* Sasl::getSaslClientFactories() {
	$init(Sasl);
	$var($Set, facs, getFactories("SaslClientFactory"_s));
	$var($Iterator, iter, $nc(facs)->iterator());
	return $new($Sasl$1, iter);
}

$Enumeration* Sasl::getSaslServerFactories() {
	$init(Sasl);
	$var($Set, facs, getFactories("SaslServerFactory"_s));
	$var($Iterator, iter, $nc(facs)->iterator());
	return $new($Sasl$2, iter);
}

$Set* Sasl::getFactories($String* serviceName) {
	$init(Sasl);
	$var($HashSet, result, $new($HashSet));
	bool var$0 = (serviceName == nullptr) || ($nc(serviceName)->length() == 0);
	if (var$0 || ($nc(serviceName)->endsWith("."_s))) {
		return result;
	}
	$var($ProviderArray, provs, $Security::getProviders());
	$var($Object, fac, nullptr);
	{
		$var($ProviderArray, arr$, provs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Provider, p, arr$->get(i$));
			{
				$var($Iterator, iter, $nc($($nc(p)->getServices()))->iterator());
				while ($nc(iter)->hasNext()) {
					$var($Provider$Service, s, $cast($Provider$Service, iter->next()));
					if ($nc($($nc(s)->getType()))->equals(serviceName)) {
						try {
							$assign(fac, loadFactory(s));
							if (fac != nullptr) {
								result->add(fac);
							}
						} catch ($Exception&) {
							$catch();
						}
					}
				}
			}
		}
	}
	return $Collections::unmodifiableSet(result);
}

bool Sasl::isDisabled($String* name) {
	$init(Sasl);
	return $nc(Sasl::disabledMechanisms)->contains(name);
}

$String* Sasl::lambda$static$0() {
	$init(Sasl);
	return $Security::getProperty("jdk.sasl.disabledMechanisms"_s);
}

void clinit$Sasl($Class* class$) {
	$assignStatic(Sasl::SASL_LOGGER_NAME, "javax.security.sasl"_s);
	$assignStatic(Sasl::QOP, "javax.security.sasl.qop"_s);
	$assignStatic(Sasl::STRENGTH, "javax.security.sasl.strength"_s);
	$assignStatic(Sasl::SERVER_AUTH, "javax.security.sasl.server.authentication"_s);
	$assignStatic(Sasl::BOUND_SERVER_NAME, "javax.security.sasl.bound.server.name"_s);
	$assignStatic(Sasl::MAX_BUFFER, "javax.security.sasl.maxbuffer"_s);
	$assignStatic(Sasl::RAW_SEND_SIZE, "javax.security.sasl.rawsendsize"_s);
	$assignStatic(Sasl::REUSE, "javax.security.sasl.reuse"_s);
	$assignStatic(Sasl::POLICY_NOPLAINTEXT, "javax.security.sasl.policy.noplaintext"_s);
	$assignStatic(Sasl::POLICY_NOACTIVE, "javax.security.sasl.policy.noactive"_s);
	$assignStatic(Sasl::POLICY_NODICTIONARY, "javax.security.sasl.policy.nodictionary"_s);
	$assignStatic(Sasl::POLICY_NOANONYMOUS, "javax.security.sasl.policy.noanonymous"_s);
	$assignStatic(Sasl::POLICY_FORWARD_SECRECY, "javax.security.sasl.policy.forward"_s);
	$assignStatic(Sasl::POLICY_PASS_CREDENTIALS, "javax.security.sasl.policy.credentials"_s);
	$assignStatic(Sasl::CREDENTIALS, "javax.security.sasl.credentials"_s);
	$beforeCallerSensitive();
	$assignStatic(Sasl::disabledMechanisms, $new($ArrayList));
	{
		$var($String, prop, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Sasl$$Lambda$lambda$static$0)))));
		if (prop != nullptr) {
			{
				$var($StringArray, arr$, prop->split("\\s*,\\s*"_s));
				int32_t len$ = arr$->length;
				int32_t i$ = 0;
				for (; i$ < len$; ++i$) {
					$var($String, s, arr$->get(i$));
					{
						if (!$nc(s)->isEmpty()) {
							$nc(Sasl::disabledMechanisms)->add(s);
						}
					}
				}
			}
		}
	}
	$assignStatic(Sasl::logger, $Logger::getLogger(Sasl::SASL_LOGGER_NAME));
}

Sasl::Sasl() {
}

$Class* Sasl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Sasl$$Lambda$lambda$static$0::classInfo$.name)) {
			return Sasl$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(Sasl, name, initialize, &_Sasl_ClassInfo_, clinit$Sasl, allocate$Sasl);
	return class$;
}

$Class* Sasl::class$ = nullptr;

		} // sasl
	} // security
} // javax