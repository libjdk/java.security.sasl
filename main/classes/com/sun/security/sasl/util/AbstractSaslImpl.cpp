#include <com/sun/security/sasl/util/AbstractSaslImpl.h>

#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <java/util/StringTokenizer.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslException.h>
#include <sun/security/util/HexDumpEncoder.h>
#include <jcpp.h>

#undef DEFAULT_QOP
#undef DEFAULT_STRENGTH
#undef FINE
#undef FINER
#undef FINEST
#undef HIGH_STRENGTH
#undef INTEGRITY_ONLY_PROTECTION
#undef LOW_STRENGTH
#undef MAX_BUFFER
#undef MAX_SEND_BUF
#undef MEDIUM_STRENGTH
#undef NO_PROTECTION
#undef PRIVACY_PROTECTION
#undef QOP
#undef QOP_MASKS
#undef QOP_TOKENS
#undef SASL_LOGGER_NAME
#undef STRENGTH
#undef STRENGTH_MASKS
#undef STRENGTH_TOKENS
#undef WARNING

using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Map = ::java::util::Map;
using $StringTokenizer = ::java::util::StringTokenizer;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslException = ::javax::security::sasl::SaslException;
using $HexDumpEncoder = ::sun::security::util::HexDumpEncoder;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace util {

$FieldInfo _AbstractSaslImpl_FieldInfo_[] = {
	{"completed", "Z", nullptr, $PROTECTED, $field(AbstractSaslImpl, completed)},
	{"privacy", "Z", nullptr, $PROTECTED, $field(AbstractSaslImpl, privacy)},
	{"integrity", "Z", nullptr, $PROTECTED, $field(AbstractSaslImpl, integrity)},
	{"qop", "[B", nullptr, $PROTECTED, $field(AbstractSaslImpl, qop)},
	{"allQop", "B", nullptr, $PROTECTED, $field(AbstractSaslImpl, allQop)},
	{"strength", "[B", nullptr, $PROTECTED, $field(AbstractSaslImpl, strength)},
	{"sendMaxBufSize", "I", nullptr, $PROTECTED, $field(AbstractSaslImpl, sendMaxBufSize)},
	{"recvMaxBufSize", "I", nullptr, $PROTECTED, $field(AbstractSaslImpl, recvMaxBufSize)},
	{"rawSendSize", "I", nullptr, $PROTECTED, $field(AbstractSaslImpl, rawSendSize)},
	{"myClassName", "Ljava/lang/String;", nullptr, $PROTECTED, $field(AbstractSaslImpl, myClassName)},
	{"SASL_LOGGER_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, SASL_LOGGER_NAME)},
	{"MAX_SEND_BUF", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSaslImpl, MAX_SEND_BUF)},
	{"logger", "Ljava/util/logging/Logger;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AbstractSaslImpl, logger)},
	{"NO_PROTECTION", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractSaslImpl, NO_PROTECTION)},
	{"INTEGRITY_ONLY_PROTECTION", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractSaslImpl, INTEGRITY_ONLY_PROTECTION)},
	{"PRIVACY_PROTECTION", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractSaslImpl, PRIVACY_PROTECTION)},
	{"LOW_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractSaslImpl, LOW_STRENGTH)},
	{"MEDIUM_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractSaslImpl, MEDIUM_STRENGTH)},
	{"HIGH_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(AbstractSaslImpl, HIGH_STRENGTH)},
	{"DEFAULT_QOP", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, DEFAULT_QOP)},
	{"QOP_TOKENS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, QOP_TOKENS)},
	{"QOP_MASKS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, QOP_MASKS)},
	{"DEFAULT_STRENGTH", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, DEFAULT_STRENGTH)},
	{"STRENGTH_TOKENS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, STRENGTH_TOKENS)},
	{"STRENGTH_MASKS", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AbstractSaslImpl, STRENGTH_MASKS)},
	{}
};

$MethodInfo _AbstractSaslImpl_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/String;)V", "(Ljava/util/Map<Ljava/lang/String;*>;Ljava/lang/String;)V", $PROTECTED, $method(static_cast<void(AbstractSaslImpl::*)($Map*,$String*)>(&AbstractSaslImpl::init$)), "javax.security.sasl.SaslException"},
	{"combineMasks", "([B)B", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<int8_t(*)($bytes*)>(&AbstractSaslImpl::combineMasks))},
	{"findPreferredMask", "(B[B)B", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<int8_t(*)(int8_t,$bytes*)>(&AbstractSaslImpl::findPreferredMask))},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"intToNetworkByteOrder", "(I[BII)V", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<void(*)(int32_t,$bytes*,int32_t,int32_t)>(&AbstractSaslImpl::intToNetworkByteOrder))},
	{"isComplete", "()Z", nullptr, $PUBLIC},
	{"networkByteOrderToInt", "([BII)I", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&AbstractSaslImpl::networkByteOrderToInt))},
	{"parseProp", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;[B[Ljava/lang/String;Z)[B", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($String*,$String*,$StringArray*,$bytes*,$StringArray*,bool)>(&AbstractSaslImpl::parseProp)), "javax.security.sasl.SaslException"},
	{"parseQop", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($String*)>(&AbstractSaslImpl::parseQop)), "javax.security.sasl.SaslException"},
	{"parseQop", "(Ljava/lang/String;[Ljava/lang/String;Z)[B", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($String*,$StringArray*,bool)>(&AbstractSaslImpl::parseQop)), "javax.security.sasl.SaslException"},
	{"parseStrength", "(Ljava/lang/String;)[B", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($String*)>(&AbstractSaslImpl::parseStrength)), "javax.security.sasl.SaslException"},
	{"traceOutput", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&AbstractSaslImpl::traceOutput))},
	{"traceOutput", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BII)V", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*,int32_t,int32_t)>(&AbstractSaslImpl::traceOutput))},
	{}
};

$ClassInfo _AbstractSaslImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.security.sasl.util.AbstractSaslImpl",
	"java.lang.Object",
	nullptr,
	_AbstractSaslImpl_FieldInfo_,
	_AbstractSaslImpl_MethodInfo_
};

$Object* allocate$AbstractSaslImpl($Class* clazz) {
	return $of($alloc(AbstractSaslImpl));
}

$String* AbstractSaslImpl::SASL_LOGGER_NAME = nullptr;
$String* AbstractSaslImpl::MAX_SEND_BUF = nullptr;

$Logger* AbstractSaslImpl::logger = nullptr;
$bytes* AbstractSaslImpl::DEFAULT_QOP = nullptr;
$StringArray* AbstractSaslImpl::QOP_TOKENS = nullptr;
$bytes* AbstractSaslImpl::QOP_MASKS = nullptr;
$bytes* AbstractSaslImpl::DEFAULT_STRENGTH = nullptr;
$StringArray* AbstractSaslImpl::STRENGTH_TOKENS = nullptr;
$bytes* AbstractSaslImpl::STRENGTH_MASKS = nullptr;

void AbstractSaslImpl::init$($Map* props, $String* className) {
	$useLocalCurrentObjectStackCache();
	this->completed = false;
	this->privacy = false;
	this->integrity = false;
	this->sendMaxBufSize = 0;
	this->recvMaxBufSize = 0x00010000;
	$set(this, myClassName, className);
	if (props != nullptr) {
		$var($String, prop, nullptr);
		$init($Sasl);
		$set(this, qop, parseQop($assign(prop, $cast($String, props->get($Sasl::QOP)))));
		$init($Level);
		$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL01:Preferred qop property: {0}"_s, $of(prop));
		this->allQop = combineMasks(this->qop);
		if ($nc(AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
			$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL02:Preferred qop mask: {0}"_s, $($of($Byte::valueOf(this->allQop))));
			if ($nc(this->qop)->length > 0) {
				$var($StringBuilder, str, $new($StringBuilder));
				for (int32_t i = 0; i < $nc(this->qop)->length; ++i) {
					str->append($($Byte::toString($nc(this->qop)->get(i))));
					str->append(u' ');
				}
				$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL03:Preferred qops : {0}"_s, $($of(str->toString())));
			}
		}
		$set(this, strength, parseStrength($assign(prop, $cast($String, props->get($Sasl::STRENGTH)))));
		$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL04:Preferred strength property: {0}"_s, $of(prop));
		if ($nc(AbstractSaslImpl::logger)->isLoggable($Level::FINE) && $nc(this->strength)->length > 0) {
			$var($StringBuilder, str, $new($StringBuilder));
			for (int32_t i = 0; i < $nc(this->strength)->length; ++i) {
				str->append($($Byte::toString($nc(this->strength)->get(i))));
				str->append(u' ');
			}
			$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL05:Cipher strengths: {0}"_s, $($of(str->toString())));
		}
		$assign(prop, $cast($String, props->get($Sasl::MAX_BUFFER)));
		if (prop != nullptr) {
			try {
				$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL06:Max receive buffer size: {0}"_s, $of(prop));
				this->recvMaxBufSize = $Integer::parseInt(prop);
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, e, $catch());
				$throwNew($SaslException, $$str({"Property must be string representation of integer: "_s, $Sasl::MAX_BUFFER}));
			}
		}
		$assign(prop, $cast($String, props->get(AbstractSaslImpl::MAX_SEND_BUF)));
		if (prop != nullptr) {
			try {
				$nc(AbstractSaslImpl::logger)->logp($Level::FINE, this->myClassName, "constructor"_s, "SASLIMPL07:Max send buffer size: {0}"_s, $of(prop));
				this->sendMaxBufSize = $Integer::parseInt(prop);
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, e, $catch());
				$throwNew($SaslException, $$str({"Property must be string representation of integer: "_s, AbstractSaslImpl::MAX_SEND_BUF}));
			}
		}
	} else {
		$set(this, qop, AbstractSaslImpl::DEFAULT_QOP);
		this->allQop = AbstractSaslImpl::NO_PROTECTION;
		$set(this, strength, AbstractSaslImpl::STRENGTH_MASKS);
	}
}

bool AbstractSaslImpl::isComplete() {
	return this->completed;
}

$Object* AbstractSaslImpl::getNegotiatedProperty($String* propName) {
	if (!this->completed) {
		$throwNew($IllegalStateException, "SASL authentication not completed"_s);
	}
	{
		$var($String, s6263$, propName);
		int32_t tmp6263$ = -1;
		switch ($nc(s6263$)->hashCode()) {
		case (int32_t)0xA3B21A61:
			{
				if (s6263$->equals("javax.security.sasl.qop"_s)) {
					tmp6263$ = 0;
				}
				break;
			}
		case 0x591E4BB3:
			{
				if (s6263$->equals("javax.security.sasl.maxbuffer"_s)) {
					tmp6263$ = 1;
				}
				break;
			}
		case (int32_t)0x840E6100:
			{
				if (s6263$->equals("javax.security.sasl.rawsendsize"_s)) {
					tmp6263$ = 2;
				}
				break;
			}
		case (int32_t)0x9C3A55AB:
			{
				if (s6263$->equals("javax.security.sasl.sendmaxbuffer"_s)) {
					tmp6263$ = 3;
				}
				break;
			}
		}
		switch (tmp6263$) {
		case 0:
			{
				if (this->privacy) {
					return $of("auth-conf"_s);
				} else if (this->integrity) {
					return $of("auth-int"_s);
				} else {
					return $of("auth"_s);
				}
			}
		case 1:
			{
				return $of($Integer::toString(this->recvMaxBufSize));
			}
		case 2:
			{
				return $of($Integer::toString(this->rawSendSize));
			}
		case 3:
			{
				return $of($Integer::toString(this->sendMaxBufSize));
			}
		default:
			{
				return $of(nullptr);
			}
		}
	}
}

int8_t AbstractSaslImpl::combineMasks($bytes* in) {
	$init(AbstractSaslImpl);
	int8_t answer = (int8_t)0;
	for (int32_t i = 0; i < $nc(in)->length; ++i) {
		answer |= in->get(i);
	}
	return answer;
}

int8_t AbstractSaslImpl::findPreferredMask(int8_t pref, $bytes* in) {
	$init(AbstractSaslImpl);
	for (int32_t i = 0; i < $nc(in)->length; ++i) {
		if (((int32_t)(in->get(i) & (uint32_t)(int32_t)pref)) != 0) {
			return in->get(i);
		}
	}
	return (int8_t)0;
}

$bytes* AbstractSaslImpl::parseQop($String* qop) {
	$init(AbstractSaslImpl);
	return parseQop(qop, nullptr, false);
}

$bytes* AbstractSaslImpl::parseQop($String* qop, $StringArray* saveTokens, bool ignore) {
	$init(AbstractSaslImpl);
	if (qop == nullptr) {
		return AbstractSaslImpl::DEFAULT_QOP;
	}
	$init($Sasl);
	return parseProp($Sasl::QOP, qop, AbstractSaslImpl::QOP_TOKENS, AbstractSaslImpl::QOP_MASKS, saveTokens, ignore);
}

$bytes* AbstractSaslImpl::parseStrength($String* strength) {
	$init(AbstractSaslImpl);
	if (strength == nullptr) {
		return AbstractSaslImpl::DEFAULT_STRENGTH;
	}
	$init($Sasl);
	return parseProp($Sasl::STRENGTH, strength, AbstractSaslImpl::STRENGTH_TOKENS, AbstractSaslImpl::STRENGTH_MASKS, nullptr, false);
}

$bytes* AbstractSaslImpl::parseProp($String* propName, $String* propVal, $StringArray* vals, $bytes* masks, $StringArray* tokens, bool ignore) {
	$init(AbstractSaslImpl);
	$useLocalCurrentObjectStackCache();
	$var($StringTokenizer, parser, $new($StringTokenizer, propVal, ", \t\n"_s));
	$var($String, token, nullptr);
	$var($bytes, answer, $new($bytes, $nc(vals)->length));
	int32_t i = 0;
	bool found = false;
	while (parser->hasMoreTokens() && i < answer->length) {
		$assign(token, parser->nextToken());
		found = false;
		for (int32_t j = 0; !found && j < vals->length; ++j) {
			if ($nc(token)->equalsIgnoreCase(vals->get(j))) {
				found = true;
				answer->set(i++, $nc(masks)->get(j));
				if (tokens != nullptr) {
					tokens->set(j, token);
				}
			}
		}
		if (!found && !ignore) {
			$throwNew($SaslException, $$str({"Invalid token in "_s, propName, ": "_s, propVal}));
		}
	}
	for (int32_t j = i; j < answer->length; ++j) {
		answer->set(j, (int8_t)0);
	}
	return answer;
}

void AbstractSaslImpl::traceOutput($String* srcClass, $String* srcMethod, $String* traceTag, $bytes* output) {
	$init(AbstractSaslImpl);
	traceOutput(srcClass, srcMethod, traceTag, output, 0, output == nullptr ? 0 : $nc(output)->length);
}

void AbstractSaslImpl::traceOutput($String* srcClass, $String* srcMethod, $String* traceTag, $bytes* output, int32_t offset, int32_t len) {
	$init(AbstractSaslImpl);
	$useLocalCurrentObjectStackCache();
	try {
		int32_t origlen = len;
		$var($Level, lev, nullptr);
		$init($Level);
		if (!$nc(AbstractSaslImpl::logger)->isLoggable($Level::FINEST)) {
			len = $Math::min(16, len);
			$assign(lev, $Level::FINER);
		} else {
			$assign(lev, $Level::FINEST);
		}
		$var($String, content, nullptr);
		if (output != nullptr) {
			$var($ByteArrayOutputStream, out, $new($ByteArrayOutputStream, len));
			$$new($HexDumpEncoder)->encodeBuffer(static_cast<$InputStream*>($$new($ByteArrayInputStream, output, offset, len)), static_cast<$OutputStream*>(out));
			$assign(content, out->toString());
		} else {
			$assign(content, "NULL"_s);
		}
		$nc(AbstractSaslImpl::logger)->logp(lev, srcClass, srcMethod, "{0} ( {1} ): {2}"_s, $$new($ObjectArray, {
			$of(traceTag),
			$($of($Integer::valueOf(origlen))),
			$of(content)
		}));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$init($Level);
		$nc(AbstractSaslImpl::logger)->logp($Level::WARNING, srcClass, srcMethod, "SASLIMPL09:Error generating trace output: {0}"_s, static_cast<$Throwable*>(e));
	}
}

int32_t AbstractSaslImpl::networkByteOrderToInt($bytes* buf, int32_t start, int32_t count) {
	$init(AbstractSaslImpl);
	if (count > 4) {
		$throwNew($IllegalArgumentException, "Cannot handle more than 4 bytes"_s);
	}
	int32_t answer = 0;
	for (int32_t i = 0; i < count; ++i) {
		answer <<= 8;
		answer |= ((int32_t)((int32_t)$nc(buf)->get(start + i) & (uint32_t)255));
	}
	return answer;
}

void AbstractSaslImpl::intToNetworkByteOrder(int32_t num, $bytes* buf, int32_t start, int32_t count) {
	$init(AbstractSaslImpl);
	if (count > 4) {
		$throwNew($IllegalArgumentException, "Cannot handle more than 4 bytes"_s);
	}
	for (int32_t i = count - 1; i >= 0; --i) {
		$nc(buf)->set(start + i, (int8_t)((int32_t)(num & (uint32_t)255)));
		$usrAssign(num, 8);
	}
}

void clinit$AbstractSaslImpl($Class* class$) {
	$assignStatic(AbstractSaslImpl::SASL_LOGGER_NAME, "javax.security.sasl"_s);
	$assignStatic(AbstractSaslImpl::MAX_SEND_BUF, "javax.security.sasl.sendmaxbuffer"_s);
	$beforeCallerSensitive();
	$assignStatic(AbstractSaslImpl::logger, $Logger::getLogger(AbstractSaslImpl::SASL_LOGGER_NAME));
	$assignStatic(AbstractSaslImpl::DEFAULT_QOP, $new($bytes, {AbstractSaslImpl::NO_PROTECTION}));
	$assignStatic(AbstractSaslImpl::QOP_TOKENS, $new($StringArray, {
		"auth-conf"_s,
		"auth-int"_s,
		"auth"_s
	}));
	$assignStatic(AbstractSaslImpl::QOP_MASKS, $new($bytes, {
		AbstractSaslImpl::PRIVACY_PROTECTION,
		AbstractSaslImpl::INTEGRITY_ONLY_PROTECTION,
		AbstractSaslImpl::NO_PROTECTION
	}));
	$assignStatic(AbstractSaslImpl::DEFAULT_STRENGTH, $new($bytes, {
		AbstractSaslImpl::HIGH_STRENGTH,
		AbstractSaslImpl::MEDIUM_STRENGTH,
		AbstractSaslImpl::LOW_STRENGTH
	}));
	$assignStatic(AbstractSaslImpl::STRENGTH_TOKENS, $new($StringArray, {
		"low"_s,
		"medium"_s,
		"high"_s
	}));
	$assignStatic(AbstractSaslImpl::STRENGTH_MASKS, $new($bytes, {
		AbstractSaslImpl::LOW_STRENGTH,
		AbstractSaslImpl::MEDIUM_STRENGTH,
		AbstractSaslImpl::HIGH_STRENGTH
	}));
}

AbstractSaslImpl::AbstractSaslImpl() {
}

$Class* AbstractSaslImpl::load$($String* name, bool initialize) {
	$loadClass(AbstractSaslImpl, name, initialize, &_AbstractSaslImpl_ClassInfo_, clinit$AbstractSaslImpl, allocate$AbstractSaslImpl);
	return class$;
}

$Class* AbstractSaslImpl::class$ = nullptr;

				} // util
			} // sasl
		} // security
	} // sun
} // com