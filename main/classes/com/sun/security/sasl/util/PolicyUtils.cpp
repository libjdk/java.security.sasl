#include <com/sun/security/sasl/util/PolicyUtils.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/security/sasl/Sasl.h>
#include <jcpp.h>

#undef FORWARD_SECRECY
#undef NOACTIVE
#undef NOANONYMOUS
#undef NODICTIONARY
#undef NOPLAINTEXT
#undef PASS_CREDENTIALS
#undef POLICY_FORWARD_SECRECY
#undef POLICY_NOACTIVE
#undef POLICY_NOANONYMOUS
#undef POLICY_NODICTIONARY
#undef POLICY_NOPLAINTEXT
#undef POLICY_PASS_CREDENTIALS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $Sasl = ::javax::security::sasl::Sasl;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace util {

$FieldInfo _PolicyUtils_FieldInfo_[] = {
	{"NOPLAINTEXT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NOPLAINTEXT)},
	{"NOACTIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NOACTIVE)},
	{"NODICTIONARY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NODICTIONARY)},
	{"FORWARD_SECRECY", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, FORWARD_SECRECY)},
	{"NOANONYMOUS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, NOANONYMOUS)},
	{"PASS_CREDENTIALS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(PolicyUtils, PASS_CREDENTIALS)},
	{}
};

$MethodInfo _PolicyUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(PolicyUtils::*)()>(&PolicyUtils::init$))},
	{"checkPolicy", "(ILjava/util/Map;)Z", "(ILjava/util/Map<Ljava/lang/String;*>;)Z", $PUBLIC | $STATIC, $method(static_cast<bool(*)(int32_t,$Map*)>(&PolicyUtils::checkPolicy))},
	{"filterMechs", "([Ljava/lang/String;[ILjava/util/Map;)[Ljava/lang/String;", "([Ljava/lang/String;[ILjava/util/Map<Ljava/lang/String;*>;)[Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)($StringArray*,$ints*,$Map*)>(&PolicyUtils::filterMechs))},
	{}
};

$ClassInfo _PolicyUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.security.sasl.util.PolicyUtils",
	"java.lang.Object",
	nullptr,
	_PolicyUtils_FieldInfo_,
	_PolicyUtils_MethodInfo_
};

$Object* allocate$PolicyUtils($Class* clazz) {
	return $of($alloc(PolicyUtils));
}

void PolicyUtils::init$() {
}

bool PolicyUtils::checkPolicy(int32_t flags, $Map* props) {
	$useLocalCurrentObjectStackCache();
	if (props == nullptr) {
		return true;
	}
	$init($Sasl);
	if ("true"_s->equalsIgnoreCase($cast($String, $($nc(props)->get($Sasl::POLICY_NOPLAINTEXT)))) && ((int32_t)(flags & (uint32_t)PolicyUtils::NOPLAINTEXT)) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($cast($String, $($nc(props)->get($Sasl::POLICY_NOACTIVE)))) && ((int32_t)(flags & (uint32_t)PolicyUtils::NOACTIVE)) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($cast($String, $($nc(props)->get($Sasl::POLICY_NODICTIONARY)))) && ((int32_t)(flags & (uint32_t)PolicyUtils::NODICTIONARY)) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($cast($String, $($nc(props)->get($Sasl::POLICY_NOANONYMOUS)))) && ((int32_t)(flags & (uint32_t)PolicyUtils::NOANONYMOUS)) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($cast($String, $($nc(props)->get($Sasl::POLICY_FORWARD_SECRECY)))) && ((int32_t)(flags & (uint32_t)PolicyUtils::FORWARD_SECRECY)) == 0) {
		return false;
	}
	if ("true"_s->equalsIgnoreCase($cast($String, $($nc(props)->get($Sasl::POLICY_PASS_CREDENTIALS)))) && ((int32_t)(flags & (uint32_t)PolicyUtils::PASS_CREDENTIALS)) == 0) {
		return false;
	}
	return true;
}

$StringArray* PolicyUtils::filterMechs($StringArray* mechs, $ints* policies, $Map* props) {
	$useLocalCurrentObjectStackCache();
	if (props == nullptr) {
		return $cast($StringArray, $nc(mechs)->clone());
	}
	$var($booleans, passed, $new($booleans, $nc(mechs)->length));
	int32_t count = 0;
	for (int32_t i = 0; i < mechs->length; ++i) {
		if (passed->set(i, checkPolicy($nc(policies)->get(i), props))) {
			++count;
		}
	}
	$var($StringArray, answer, $new($StringArray, count));
	{
		int32_t i = 0;
		int32_t j = 0;
		for (; i < mechs->length; ++i) {
			if (passed->get(i)) {
				answer->set(j++, mechs->get(i));
			}
		}
	}
	return answer;
}

PolicyUtils::PolicyUtils() {
}

$Class* PolicyUtils::load$($String* name, bool initialize) {
	$loadClass(PolicyUtils, name, initialize, &_PolicyUtils_ClassInfo_, allocate$PolicyUtils);
	return class$;
}

$Class* PolicyUtils::class$ = nullptr;

				} // util
			} // sasl
		} // security
	} // sun
} // com