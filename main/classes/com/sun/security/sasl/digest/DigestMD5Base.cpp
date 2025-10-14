#include <com/sun/security/sasl/digest/DigestMD5Base.h>

#include <com/sun/security/sasl/digest/DigestMD5Base$DigestIntegrity.h>
#include <com/sun/security/sasl/digest/DigestMD5Base$DigestPrivacy.h>
#include <com/sun/security/sasl/digest/SecurityCtx.h>
#include <com/sun/security/sasl/util/AbstractSaslImpl.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Random.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/crypto/Cipher.h>
#include <javax/crypto/NoSuchPaddingException.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/SecretKeyFactory.h>
#include <javax/crypto/spec/DESKeySpec.h>
#include <javax/crypto/spec/DESedeKeySpec.h>
#include <javax/security/auth/callback/CallbackHandler.h>
#include <javax/security/sasl/Sasl.h>
#include <javax/security/sasl/SaslException.h>
#include <jcpp.h>

#undef BOUND_SERVER_NAME
#undef CIPHER_MASKS
#undef CIPHER_TOKENS
#undef DEFAULT_MAXBUF
#undef DES
#undef DES3
#undef DES_3_STRENGTH
#undef DES_STRENGTH
#undef DI_CLASS_NAME
#undef DP_CLASS_NAME
#undef EMPTY_BYTE_ARRAY
#undef ENCODED_NONCE_SIZE
#undef FINE
#undef FINEST
#undef H_A1
#undef JCE_CIPHER_NAME
#undef KD
#undef MASK
#undef MAX_CHALLENGE_LENGTH
#undef MAX_RESPONSE_LENGTH
#undef RAW_NONCE_SIZE
#undef RC4
#undef RC4_40_STRENGTH
#undef RC4_56_STRENGTH
#undef RC4_STRENGTH
#undef SECURITY_LAYER_MARKER
#undef STRENGTH
#undef UNSET
#undef UTF_8

using $byteArray2 = $Array<int8_t, 2>;
using $DigestMD5Base$DigestIntegrity = ::com::sun::security::sasl::digest::DigestMD5Base$DigestIntegrity;
using $DigestMD5Base$DigestPrivacy = ::com::sun::security::sasl::digest::DigestMD5Base$DigestPrivacy;
using $SecurityCtx = ::com::sun::security::sasl::digest::SecurityCtx;
using $AbstractSaslImpl = ::com::sun::security::sasl::util::AbstractSaslImpl;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $KeySpec = ::java::security::spec::KeySpec;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Random = ::java::util::Random;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Cipher = ::javax::crypto::Cipher;
using $NoSuchPaddingException = ::javax::crypto::NoSuchPaddingException;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeyFactory = ::javax::crypto::SecretKeyFactory;
using $DESKeySpec = ::javax::crypto::spec::DESKeySpec;
using $DESedeKeySpec = ::javax::crypto::spec::DESedeKeySpec;
using $CallbackHandler = ::javax::security::auth::callback::CallbackHandler;
using $Sasl = ::javax::security::sasl::Sasl;
using $SaslException = ::javax::security::sasl::SaslException;

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

$FieldInfo _DigestMD5Base_FieldInfo_[] = {
	{"DI_CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base, DI_CLASS_NAME)},
	{"DP_CLASS_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base, DP_CLASS_NAME)},
	{"MAX_CHALLENGE_LENGTH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, MAX_CHALLENGE_LENGTH)},
	{"MAX_RESPONSE_LENGTH", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, MAX_RESPONSE_LENGTH)},
	{"DEFAULT_MAXBUF", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, DEFAULT_MAXBUF)},
	{"DES3", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, DES3)},
	{"RC4", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, RC4)},
	{"DES", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, DES)},
	{"RC4_56", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, RC4_56)},
	{"RC4_40", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, RC4_40)},
	{"CIPHER_TOKENS", "[Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DigestMD5Base, CIPHER_TOKENS)},
	{"JCE_CIPHER_NAME", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base, JCE_CIPHER_NAME)},
	{"DES_3_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, DES_3_STRENGTH)},
	{"RC4_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, RC4_STRENGTH)},
	{"DES_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, DES_STRENGTH)},
	{"RC4_56_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, RC4_56_STRENGTH)},
	{"RC4_40_STRENGTH", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, RC4_40_STRENGTH)},
	{"UNSET", "B", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(DigestMD5Base, UNSET)},
	{"CIPHER_MASKS", "[B", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DigestMD5Base, CIPHER_MASKS)},
	{"SECURITY_LAYER_MARKER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base, SECURITY_LAYER_MARKER)},
	{"EMPTY_BYTE_ARRAY", "[B", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(DigestMD5Base, EMPTY_BYTE_ARRAY)},
	{"step", "I", nullptr, $PROTECTED, $field(DigestMD5Base, step)},
	{"cbh", "Ljavax/security/auth/callback/CallbackHandler;", nullptr, $PROTECTED, $field(DigestMD5Base, cbh)},
	{"secCtx", "Lcom/sun/security/sasl/digest/SecurityCtx;", nullptr, $PROTECTED, $field(DigestMD5Base, secCtx)},
	{"H_A1", "[B", nullptr, $PROTECTED, $field(DigestMD5Base, H_A1)},
	{"nonce", "[B", nullptr, $PROTECTED, $field(DigestMD5Base, nonce)},
	{"negotiatedStrength", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DigestMD5Base, negotiatedStrength)},
	{"negotiatedCipher", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DigestMD5Base, negotiatedCipher)},
	{"negotiatedQop", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DigestMD5Base, negotiatedQop)},
	{"negotiatedRealm", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DigestMD5Base, negotiatedRealm)},
	{"useUTF8", "Z", nullptr, $PROTECTED, $field(DigestMD5Base, useUTF8)},
	{"encoding", "Ljava/nio/charset/Charset;", nullptr, $PROTECTED, $field(DigestMD5Base, encoding)},
	{"digestUri", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DigestMD5Base, digestUri)},
	{"authzid", "Ljava/lang/String;", nullptr, $PROTECTED, $field(DigestMD5Base, authzid)},
	{"pem_array", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base, pem_array)},
	{"RAW_NONCE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Base, RAW_NONCE_SIZE)},
	{"ENCODED_NONCE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DigestMD5Base, ENCODED_NONCE_SIZE)},
	{"MASK", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigestMD5Base, MASK)},
	{}
};

$MethodInfo _DigestMD5Base_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Map;Ljava/lang/String;ILjava/lang/String;Ljavax/security/auth/callback/CallbackHandler;)V", "(Ljava/util/Map<Ljava/lang/String;*>;Ljava/lang/String;ILjava/lang/String;Ljavax/security/auth/callback/CallbackHandler;)V", $PROTECTED, $method(static_cast<void(DigestMD5Base::*)($Map*,$String*,int32_t,$String*,$CallbackHandler*)>(&DigestMD5Base::init$)), "javax.security.sasl.SaslException"},
	{"access$000", "(I[BII)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t,int32_t)>(&DigestMD5Base::access$000))},
	{"access$100", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$100))},
	{"access$1000", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$1000))},
	{"access$1100", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$1100))},
	{"access$1200", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$1200))},
	{"access$1300", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$1300))},
	{"access$1400", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$1400))},
	{"access$1500", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$1500))},
	{"access$1600", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$1600))},
	{"access$1700", "([BII)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::access$1700))},
	{"access$1800", "([BII)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::access$1800))},
	{"access$1900", "([BII)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::access$1900))},
	{"access$200", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$200))},
	{"access$2000", "(I[BII)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(int32_t,$bytes*,int32_t,int32_t)>(&DigestMD5Base::access$2000))},
	{"access$2100", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$2100))},
	{"access$2200", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$2200))},
	{"access$2300", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$2300))},
	{"access$2400", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$2400))},
	{"access$2500", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$2500))},
	{"access$2600", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$2600))},
	{"access$2700", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$2700))},
	{"access$2800", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$2800))},
	{"access$2900", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$2900))},
	{"access$300", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$300))},
	{"access$3000", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BII)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*,int32_t,int32_t)>(&DigestMD5Base::access$3000))},
	{"access$3100", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$3100))},
	{"access$3200", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$3200))},
	{"access$3300", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$3300))},
	{"access$3400", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$3400))},
	{"access$3500", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$3500))},
	{"access$3600", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$3600))},
	{"access$3700", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$3700))},
	{"access$3800", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$3800))},
	{"access$3900", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$3900))},
	{"access$400", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$400))},
	{"access$4000", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$4000))},
	{"access$4100", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$4100))},
	{"access$4200", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$4200))},
	{"access$4300", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$4300))},
	{"access$4400", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$4400))},
	{"access$4500", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$4500))},
	{"access$4600", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$4600))},
	{"access$4700", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$4700))},
	{"access$4800", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$4800))},
	{"access$4900", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$4900))},
	{"access$500", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[BII)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*,int32_t,int32_t)>(&DigestMD5Base::access$500))},
	{"access$5000", "([BII)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::access$5000))},
	{"access$5100", "([BII)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::access$5100))},
	{"access$5200", "([BII)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::access$5200))},
	{"access$600", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$600))},
	{"access$700", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$700))},
	{"access$800", "()Ljava/util/logging/Logger;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Logger*(*)()>(&DigestMD5Base::access$800))},
	{"access$900", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[B)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)($String*,$String*,$String*,$bytes*)>(&DigestMD5Base::access$900))},
	{"addDesParity", "([BII)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t,int32_t)>(&DigestMD5Base::addDesParity))},
	{"binaryToHex", "([B)[B", nullptr, $PROTECTED},
	{"dispose", "()V", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"extractDirective", "(Ljava/lang/String;[B[Ljava/lang/String;[[BLjava/util/List;I)V", "(Ljava/lang/String;[B[Ljava/lang/String;[[BLjava/util/List<[B>;I)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$bytes*,$StringArray*,$byteArray2*,$List*,int32_t)>(&DigestMD5Base::extractDirective)), "javax.security.sasl.SaslException"},
	{"generateNonce", "()[B", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$bytes*(*)()>(&DigestMD5Base::generateNonce))},
	{"generateResponseValue", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[C[B[BI[B)[B", nullptr, $PROTECTED, nullptr, "java.security.NoSuchAlgorithmException,java.io.IOException"},
	{"getMechanismName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getNegotiatedProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getPlatformCiphers", "()[B", nullptr, $PROTECTED | $STATIC, $method(static_cast<$bytes*(*)()>(&DigestMD5Base::getPlatformCiphers))},
	{"isLws", "(B)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int8_t)>(&DigestMD5Base::isLws))},
	{"makeDesKeys", "([BLjava/lang/String;)Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SecretKey*(*)($bytes*,$String*)>(&DigestMD5Base::makeDesKeys)), "java.security.NoSuchAlgorithmException,java.security.InvalidKeyException,java.security.spec.InvalidKeySpecException"},
	{"needEscape", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&DigestMD5Base::needEscape))},
	{"needEscape", "(C)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(char16_t)>(&DigestMD5Base::needEscape))},
	{"nonceCountToHex", "(I)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)(int32_t)>(&DigestMD5Base::nonceCountToHex))},
	{"parseDirectives", "([B[Ljava/lang/String;Ljava/util/List;I)[[B", "([B[Ljava/lang/String;Ljava/util/List<[B>;I)[[B", $PROTECTED | $STATIC, $method(static_cast<$byteArray2*(*)($bytes*,$StringArray*,$List*,int32_t)>(&DigestMD5Base::parseDirectives)), "javax.security.sasl.SaslException"},
	{"quotedStringValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$String*(*)($String*)>(&DigestMD5Base::quotedStringValue))},
	{"setParityBit", "([B)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($bytes*)>(&DigestMD5Base::setParityBit))},
	{"skipLws", "([BI)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($bytes*,int32_t)>(&DigestMD5Base::skipLws))},
	{"stringToByte_8859_1", "(Ljava/lang/String;)[B", nullptr, $PROTECTED},
	{"unwrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"wrap", "([BII)[B", nullptr, $PUBLIC, nullptr, "javax.security.sasl.SaslException"},
	{"writeQuotedStringValue", "(Ljava/io/ByteArrayOutputStream;[B)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($ByteArrayOutputStream*,$bytes*)>(&DigestMD5Base::writeQuotedStringValue))},
	{}
};

$InnerClassInfo _DigestMD5Base_InnerClassesInfo_[] = {
	{"com.sun.security.sasl.digest.DigestMD5Base$DigestPrivacy", "com.sun.security.sasl.digest.DigestMD5Base", "DigestPrivacy", $FINAL},
	{"com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity", "com.sun.security.sasl.digest.DigestMD5Base", "DigestIntegrity", 0},
	{}
};

$ClassInfo _DigestMD5Base_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.security.sasl.digest.DigestMD5Base",
	"com.sun.security.sasl.util.AbstractSaslImpl",
	nullptr,
	_DigestMD5Base_FieldInfo_,
	_DigestMD5Base_MethodInfo_,
	nullptr,
	nullptr,
	_DigestMD5Base_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.security.sasl.digest.DigestMD5Base$DigestPrivacy,com.sun.security.sasl.digest.DigestMD5Base$DigestIntegrity"
};

$Object* allocate$DigestMD5Base($Class* clazz) {
	return $of($alloc(DigestMD5Base));
}

$String* DigestMD5Base::DI_CLASS_NAME = nullptr;
$String* DigestMD5Base::DP_CLASS_NAME = nullptr;
$StringArray* DigestMD5Base::CIPHER_TOKENS = nullptr;
$StringArray* DigestMD5Base::JCE_CIPHER_NAME = nullptr;
$bytes* DigestMD5Base::CIPHER_MASKS = nullptr;
$String* DigestMD5Base::SECURITY_LAYER_MARKER = nullptr;
$bytes* DigestMD5Base::EMPTY_BYTE_ARRAY = nullptr;

$chars* DigestMD5Base::pem_array = nullptr;
$BigInteger* DigestMD5Base::MASK = nullptr;

int32_t DigestMD5Base::access$5200($bytes* x0, int32_t x1, int32_t x2) {
	$init(DigestMD5Base);
	return networkByteOrderToInt(x0, x1, x2);
}

int32_t DigestMD5Base::access$5100($bytes* x0, int32_t x1, int32_t x2) {
	$init(DigestMD5Base);
	return networkByteOrderToInt(x0, x1, x2);
}

int32_t DigestMD5Base::access$5000($bytes* x0, int32_t x1, int32_t x2) {
	$init(DigestMD5Base);
	return networkByteOrderToInt(x0, x1, x2);
}

$Logger* DigestMD5Base::access$4900() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$4800($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$4700() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

$Logger* DigestMD5Base::access$4600() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

$Logger* DigestMD5Base::access$4500() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$4400($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$4300($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$4200($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$4100($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$4000() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$3900($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$3800() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

$Logger* DigestMD5Base::access$3700() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$3600($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$3500() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$3400($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$3300() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$3200($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$3100($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$3000($String* x0, $String* x1, $String* x2, $bytes* x3, int32_t x4, int32_t x5) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3, x4, x5);
}

$Logger* DigestMD5Base::access$2900() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$2800($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$2700($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$2600($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$2500($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$2400() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$2300($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$2200($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$2100() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$2000(int32_t x0, $bytes* x1, int32_t x2, int32_t x3) {
	$init(DigestMD5Base);
	intToNetworkByteOrder(x0, x1, x2, x3);
}

int32_t DigestMD5Base::access$1900($bytes* x0, int32_t x1, int32_t x2) {
	$init(DigestMD5Base);
	return networkByteOrderToInt(x0, x1, x2);
}

int32_t DigestMD5Base::access$1800($bytes* x0, int32_t x1, int32_t x2) {
	$init(DigestMD5Base);
	return networkByteOrderToInt(x0, x1, x2);
}

int32_t DigestMD5Base::access$1700($bytes* x0, int32_t x1, int32_t x2) {
	$init(DigestMD5Base);
	return networkByteOrderToInt(x0, x1, x2);
}

$Logger* DigestMD5Base::access$1600() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$1500($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$1400($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$1300($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$1200($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$1100($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$1000() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$900($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$800() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$700($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$600($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$500($String* x0, $String* x1, $String* x2, $bytes* x3, int32_t x4, int32_t x5) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3, x4, x5);
}

$Logger* DigestMD5Base::access$400() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$300($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

void DigestMD5Base::access$200($String* x0, $String* x1, $String* x2, $bytes* x3) {
	$init(DigestMD5Base);
	traceOutput(x0, x1, x2, x3);
}

$Logger* DigestMD5Base::access$100() {
	$init(DigestMD5Base);
	$init($AbstractSaslImpl);
	return $AbstractSaslImpl::logger;
}

void DigestMD5Base::access$000(int32_t x0, $bytes* x1, int32_t x2, int32_t x3) {
	$init(DigestMD5Base);
	intToNetworkByteOrder(x0, x1, x2, x3);
}

void DigestMD5Base::init$($Map* props, $String* className, int32_t firstStep, $String* digestUri, $CallbackHandler* cbh) {
	$AbstractSaslImpl::init$(props, className);
	this->useUTF8 = false;
	$init($StandardCharsets);
	$set(this, encoding, $StandardCharsets::ISO_8859_1);
	this->step = firstStep;
	$set(this, digestUri, digestUri);
	$set(this, cbh, cbh);
}

$String* DigestMD5Base::getMechanismName() {
	return "DIGEST-MD5"_s;
}

$bytes* DigestMD5Base::unwrap($bytes* incoming, int32_t start, int32_t len) {
	if (!this->completed) {
		$throwNew($IllegalStateException, "DIGEST-MD5 authentication not completed"_s);
	}
	if (this->secCtx == nullptr) {
		$throwNew($IllegalStateException, "Neither integrity nor privacy was negotiated"_s);
	}
	return ($nc(this->secCtx)->unwrap(incoming, start, len));
}

$bytes* DigestMD5Base::wrap($bytes* outgoing, int32_t start, int32_t len) {
	if (!this->completed) {
		$throwNew($IllegalStateException, "DIGEST-MD5 authentication not completed"_s);
	}
	if (this->secCtx == nullptr) {
		$throwNew($IllegalStateException, "Neither integrity nor privacy was negotiated"_s);
	}
	return ($nc(this->secCtx)->wrap(outgoing, start, len));
}

void DigestMD5Base::dispose() {
	if (this->secCtx != nullptr) {
		$set(this, secCtx, nullptr);
	}
}

$Object* DigestMD5Base::getNegotiatedProperty($String* propName) {
	if (this->completed) {
		$init($Sasl);
		if ($nc(propName)->equals($Sasl::STRENGTH)) {
			return $of(this->negotiatedStrength);
		} else {
			if (propName->equals($Sasl::BOUND_SERVER_NAME)) {
				return $of($nc(this->digestUri)->substring($nc(this->digestUri)->indexOf((int32_t)u'/') + 1));
			} else {
				return $of($AbstractSaslImpl::getNegotiatedProperty(propName));
			}
		}
	} else {
		$throwNew($IllegalStateException, "DIGEST-MD5 authentication not completed"_s);
	}
}

$bytes* DigestMD5Base::generateNonce() {
	$init(DigestMD5Base);
	$var($Random, random, $new($Random));
	$var($bytes, randomData, $new($bytes, DigestMD5Base::RAW_NONCE_SIZE));
	random->nextBytes(randomData);
	$var($bytes, nonce, $new($bytes, DigestMD5Base::ENCODED_NONCE_SIZE));
	int8_t a = 0;
	int8_t b = 0;
	int8_t c = 0;
	int32_t j = 0;
	for (int32_t i = 0; i < randomData->length; i += 3) {
		a = randomData->get(i);
		b = randomData->get(i + 1);
		c = randomData->get(i + 2);
		nonce->set(j++, (int8_t)($nc(DigestMD5Base::pem_array)->get((int32_t)(((int32_t)((uint32_t)a >> 2)) & (uint32_t)63))));
		nonce->set(j++, (int8_t)($nc(DigestMD5Base::pem_array)->get(((int32_t)((a << 4) & (uint32_t)48)) + ((int32_t)(((int32_t)((uint32_t)b >> 4)) & (uint32_t)15)))));
		nonce->set(j++, (int8_t)($nc(DigestMD5Base::pem_array)->get(((int32_t)((b << 2) & (uint32_t)60)) + ((int32_t)(((int32_t)((uint32_t)c >> 6)) & (uint32_t)3)))));
		nonce->set(j++, (int8_t)($nc(DigestMD5Base::pem_array)->get((int32_t)(c & (uint32_t)63))));
	}
	return nonce;
}

void DigestMD5Base::writeQuotedStringValue($ByteArrayOutputStream* out, $bytes* buf) {
	$init(DigestMD5Base);
	int32_t len = $nc(buf)->length;
	int8_t ch = 0;
	for (int32_t i = 0; i < len; ++i) {
		ch = buf->get(i);
		if (needEscape((char16_t)ch)) {
			$nc(out)->write((int32_t)u'\\');
		}
		$nc(out)->write((int32_t)ch);
	}
}

bool DigestMD5Base::needEscape($String* str) {
	$init(DigestMD5Base);
	int32_t len = $nc(str)->length();
	for (int32_t i = 0; i < len; ++i) {
		if (needEscape(str->charAt(i))) {
			return true;
		}
	}
	return false;
}

bool DigestMD5Base::needEscape(char16_t ch) {
	$init(DigestMD5Base);
	return ch == u'\"' || ch == u'\\' || ch == 127 || (ch >= 0 && ch <= 31 && ch != 13 && ch != 9 && ch != 10);
}

$String* DigestMD5Base::quotedStringValue($String* str) {
	$init(DigestMD5Base);
	if (needEscape(str)) {
		int32_t len = $nc(str)->length();
		$var($chars, buf, $new($chars, len + len));
		int32_t j = 0;
		char16_t ch = 0;
		for (int32_t i = 0; i < len; ++i) {
			ch = str->charAt(i);
			if (needEscape(ch)) {
				buf->set(j++, u'\\');
			}
			buf->set(j++, ch);
		}
		return $new($String, buf, 0, j);
	} else {
		return str;
	}
}

$bytes* DigestMD5Base::binaryToHex($bytes* digest) {
	$var($StringBuilder, digestString, $new($StringBuilder));
	for (int32_t i = 0; i < $nc(digest)->length; ++i) {
		if (((int32_t)(digest->get(i) & (uint32_t)255)) < 16) {
			digestString->append(u'0')->append($($Integer::toHexString((int32_t)(digest->get(i) & (uint32_t)255))));
		} else {
			digestString->append($($Integer::toHexString((int32_t)(digest->get(i) & (uint32_t)255))));
		}
	}
	return $nc($(digestString->toString()))->getBytes(this->encoding);
}

$bytes* DigestMD5Base::stringToByte_8859_1($String* str) {
	$var($chars, buffer, $nc(str)->toCharArray());
	if (this->useUTF8) {
		for (int32_t i = 0; i < buffer->length; ++i) {
			if (buffer->get(i) > (char16_t)0xFF) {
				$init($StandardCharsets);
				return str->getBytes($StandardCharsets::UTF_8);
			}
		}
	}
	$init($StandardCharsets);
	return str->getBytes($StandardCharsets::ISO_8859_1);
}

$bytes* DigestMD5Base::getPlatformCiphers() {
	$init(DigestMD5Base);
	$var($bytes, ciphers, $new($bytes, $nc(DigestMD5Base::CIPHER_TOKENS)->length));
	for (int32_t i = 0; i < $nc(DigestMD5Base::JCE_CIPHER_NAME)->length; ++i) {
		try {
			$Cipher::getInstance($nc(DigestMD5Base::JCE_CIPHER_NAME)->get(i));
			$init($AbstractSaslImpl);
			$init($Level);
			$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST01:Platform supports {0}"_s, $of($nc(DigestMD5Base::JCE_CIPHER_NAME)->get(i)));
			(*ciphers)[i] |= $nc(DigestMD5Base::CIPHER_MASKS)->get(i);
		} catch ($NoSuchAlgorithmException&) {
			$catch();
		} catch ($NoSuchPaddingException&) {
			$catch();
		}
	}
	if (ciphers->get(DigestMD5Base::RC4) != DigestMD5Base::UNSET) {
		(*ciphers)[DigestMD5Base::RC4_56] |= $nc(DigestMD5Base::CIPHER_MASKS)->get(DigestMD5Base::RC4_56);
		(*ciphers)[DigestMD5Base::RC4_40] |= $nc(DigestMD5Base::CIPHER_MASKS)->get(DigestMD5Base::RC4_40);
	}
	return ciphers;
}

$bytes* DigestMD5Base::generateResponseValue($String* authMethod, $String* digestUriValue, $String* qopValue, $String* usernameValue, $String* realmValue, $chars* passwdValue, $bytes* nonceValue, $bytes* cNonceValue, int32_t nonceCount, $bytes* authzidValue) {
	$var($MessageDigest, md5, $MessageDigest::getInstance("MD5"_s));
	$var($bytes, hexA1, nullptr);
	$var($bytes, hexA2, nullptr);
	$var($ByteArrayOutputStream, A2, nullptr);
	$var($ByteArrayOutputStream, beginA1, nullptr);
	$var($ByteArrayOutputStream, A1, nullptr);
	$var($ByteArrayOutputStream, KD, nullptr);
	$assign(A2, $new($ByteArrayOutputStream));
	A2->write($($nc(($$str({authMethod, ":"_s, digestUriValue})))->getBytes(this->encoding)));
	bool var$0 = $nc(qopValue)->equals("auth-conf"_s);
	if (var$0 || $nc(qopValue)->equals("auth-int"_s)) {
		$init($AbstractSaslImpl);
		$init($Level);
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST04:QOP: {0}"_s, $of(qopValue));
		A2->write($($nc(DigestMD5Base::SECURITY_LAYER_MARKER)->getBytes(this->encoding)));
	}
	$init($AbstractSaslImpl);
	$init($Level);
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST05:A2: {0}"_s, $($of(A2->toString())));
	}
	$nc(md5)->update($(A2->toByteArray()));
	$var($bytes, digest, md5->digest());
	$assign(hexA2, binaryToHex(digest));
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST06:HEX(H(A2)): {0}"_s, $of($$new($String, hexA2)));
	}
	$assign(beginA1, $new($ByteArrayOutputStream));
	beginA1->write($(stringToByte_8859_1(usernameValue)));
	beginA1->write((int32_t)u':');
	beginA1->write($(stringToByte_8859_1(realmValue)));
	beginA1->write((int32_t)u':');
	beginA1->write($(stringToByte_8859_1($$new($String, passwdValue))));
	md5->update($(beginA1->toByteArray()));
	$assign(digest, md5->digest());
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST07:H({0}) = {1}"_s, $$new($ObjectArray, {
			$($of(beginA1->toString())),
			$of($$new($String, $(binaryToHex(digest))))
		}));
	}
	$assign(A1, $new($ByteArrayOutputStream));
	A1->write(digest);
	A1->write((int32_t)u':');
	A1->write(nonceValue);
	A1->write((int32_t)u':');
	A1->write(cNonceValue);
	if (authzidValue != nullptr) {
		A1->write((int32_t)u':');
		A1->write(authzidValue);
	}
	md5->update($(A1->toByteArray()));
	$assign(digest, md5->digest());
	$set(this, H_A1, digest);
	$assign(hexA1, binaryToHex(digest));
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST08:H(A1) = {0}"_s, $of($$new($String, hexA1)));
	}
	$assign(KD, $new($ByteArrayOutputStream));
	KD->write(hexA1);
	KD->write((int32_t)u':');
	KD->write(nonceValue);
	KD->write((int32_t)u':');
	KD->write($($nc($(nonceCountToHex(nonceCount)))->getBytes(this->encoding)));
	KD->write((int32_t)u':');
	KD->write(cNonceValue);
	KD->write((int32_t)u':');
	KD->write($($nc(qopValue)->getBytes(this->encoding)));
	KD->write((int32_t)u':');
	KD->write(hexA2);
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST09:KD: {0}"_s, $($of(KD->toString())));
	}
	md5->update($(KD->toByteArray()));
	$assign(digest, md5->digest());
	$var($bytes, answer, binaryToHex(digest));
	if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
		$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST10:response-value: {0}"_s, $of($$new($String, answer)));
	}
	return (answer);
}

$String* DigestMD5Base::nonceCountToHex(int32_t count) {
	$init(DigestMD5Base);
	$var($String, str, $Integer::toHexString(count));
	$var($StringBuilder, pad, $new($StringBuilder));
	if ($nc(str)->length() < 8) {
		for (int32_t i = 0; i < 8 - str->length(); ++i) {
			pad->append("0"_s);
		}
	}
	return $str({$(pad->toString()), str});
}

$byteArray2* DigestMD5Base::parseDirectives($bytes* buf, $StringArray* keyTable, $List* realmChoices, int32_t realmIndex) {
	$init(DigestMD5Base);
	$var($byteArray2, valueTable, $new($byteArray2, $nc(keyTable)->length));
	$var($ByteArrayOutputStream, key, $new($ByteArrayOutputStream, 10));
	$var($ByteArrayOutputStream, value, $new($ByteArrayOutputStream, 10));
	bool gettingKey = true;
	bool gettingQuotedValue = false;
	bool expectSeparator = false;
	int8_t bch = 0;
	int32_t i = skipLws(buf, 0);
	while (i < $nc(buf)->length) {
		bch = buf->get(i);
		if (gettingKey) {
			if (bch == u',') {
				if (key->size() != 0) {
					$throwNew($SaslException, $$str({"Directive key contains a \',\':"_s, key}));
				}
				i = skipLws(buf, i + 1);
			} else if (bch == u'=') {
				if (key->size() == 0) {
					$throwNew($SaslException, "Empty directive key"_s);
				}
				gettingKey = false;
				i = skipLws(buf, i + 1);
				if (i < buf->length) {
					if (buf->get(i) == u'\"') {
						gettingQuotedValue = true;
						++i;
					}
				} else {
					$throwNew($SaslException, $$str({"Valueless directive found: "_s, $(key->toString())}));
				}
			} else if (isLws(bch)) {
				i = skipLws(buf, i + 1);
				if (i < buf->length) {
					if (buf->get(i) != u'=') {
						$throwNew($SaslException, $$str({"\'=\' expected after key: "_s, $(key->toString())}));
					}
				} else {
					$throwNew($SaslException, $$str({"\'=\' expected after key: "_s, $(key->toString())}));
				}
			} else {
				key->write((int32_t)bch);
				++i;
			}
		} else if (gettingQuotedValue) {
			if (bch == u'\\') {
				++i;
				if (i < buf->length) {
					value->write((int32_t)buf->get(i));
					++i;
				} else {
					$var($String, var$0, $$str({"Unmatched quote found for directive: "_s, $(key->toString()), " with value: "_s}));
					$throwNew($SaslException, $$concat(var$0, $(value->toString())));
				}
			} else if (bch == u'\"') {
				++i;
				gettingQuotedValue = false;
				expectSeparator = true;
			} else {
				value->write((int32_t)bch);
				++i;
			}
		} else if (isLws(bch) || bch == u',') {
			$var($String, var$1, key->toString());
			extractDirective(var$1, $(value->toByteArray()), keyTable, valueTable, realmChoices, realmIndex);
			key->reset();
			value->reset();
			gettingKey = true;
			gettingQuotedValue = (expectSeparator = false);
			i = skipLws(buf, i + 1);
		} else if (expectSeparator) {
			$throwNew($SaslException, $$str({"Expecting comma or linear whitespace after quoted string: \""_s, $(value->toString()), "\""_s}));
		} else {
			value->write((int32_t)bch);
			++i;
		}
	}
	if (gettingQuotedValue) {
		$var($String, var$2, $$str({"Unmatched quote found for directive: "_s, $(key->toString()), " with value: "_s}));
		$throwNew($SaslException, $$concat(var$2, $(value->toString())));
	}
	if (key->size() > 0) {
		$var($String, var$3, key->toString());
		extractDirective(var$3, $(value->toByteArray()), keyTable, valueTable, realmChoices, realmIndex);
	}
	return valueTable;
}

bool DigestMD5Base::isLws(int8_t b) {
	$init(DigestMD5Base);
	switch (b) {
	case 13:
		{}
	case 10:
		{}
	case 32:
		{}
	case 9:
		{
			return true;
		}
	}
	return false;
}

int32_t DigestMD5Base::skipLws($bytes* buf, int32_t start) {
	$init(DigestMD5Base);
	int32_t i = 0;
	for (i = start; i < $nc(buf)->length; ++i) {
		if (!isLws(buf->get(i))) {
			return i;
		}
	}
	return i;
}

void DigestMD5Base::extractDirective($String* key, $bytes* value, $StringArray* keyTable, $byteArray2* valueTable, $List* realmChoices, int32_t realmIndex) {
	$init(DigestMD5Base);
	for (int32_t i = 0; i < $nc(keyTable)->length; ++i) {
		if ($nc(key)->equalsIgnoreCase(keyTable->get(i))) {
			if ($nc(valueTable)->get(i) == nullptr) {
				valueTable->set(i, value);
				$init($AbstractSaslImpl);
				$init($Level);
				if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINE)) {
					$nc($AbstractSaslImpl::logger)->log($Level::FINE, "DIGEST11:Directive {0} = {1}"_s, $$new($ObjectArray, {
						$of(keyTable->get(i)),
						$of($$new($String, valueTable->get(i)))
					}));
				}
			} else if (realmChoices != nullptr && i == realmIndex) {
				if (realmChoices->isEmpty()) {
					realmChoices->add(valueTable->get(i));
				}
				realmChoices->add(value);
			} else {
				$throwNew($SaslException, $$str({"DIGEST-MD5: peer sent more than one "_s, key, " directive: "_s, $$new($String, value)}));
			}
			break;
		}
	}
}

void DigestMD5Base::setParityBit($bytes* key) {
	$init(DigestMD5Base);
	for (int32_t i = 0; i < $nc(key)->length; ++i) {
		int32_t b = (int32_t)(key->get(i) & (uint32_t)254);
		b |= ((int32_t)($Integer::bitCount(b) & (uint32_t)1)) ^ 1;
		key->set(i, (int8_t)b);
	}
}

$bytes* DigestMD5Base::addDesParity($bytes* input, int32_t offset, int32_t len) {
	$init(DigestMD5Base);
	if (len != 7) {
		$throwNew($IllegalArgumentException, $$str({"Invalid length of DES Key Value:"_s, $$str(len)}));
	}
	$var($bytes, raw, $new($bytes, 7));
	$System::arraycopy(input, offset, raw, 0, len);
	$var($bytes, result, $new($bytes, 8));
	$var($BigInteger, in, $new($BigInteger, raw));
	for (int32_t i = result->length - 1; i >= 0; --i) {
		result->set(i, $nc($($nc($($nc(in)->and$(DigestMD5Base::MASK)))->toByteArray()))->get(0));
		(*result)[i] <<= 1;
		$assign(in, in->shiftRight(7));
	}
	setParityBit(result);
	return result;
}

$SecretKey* DigestMD5Base::makeDesKeys($bytes* input, $String* desStrength) {
	$init(DigestMD5Base);
	$var($bytes, subkey1, addDesParity(input, 0, 7));
	$var($KeySpec, spec, nullptr);
	$var($SecretKeyFactory, desFactory, $SecretKeyFactory::getInstance(desStrength));
	{
		$var($String, s60595$, desStrength);
		int32_t tmp60595$ = -1;
		switch ($nc(s60595$)->hashCode()) {
		case 0x00018412:
			{
				if (s60595$->equals("des"_s)) {
					tmp60595$ = 0;
				}
				break;
			}
		case (int32_t)0xB069B254:
			{
				if (s60595$->equals("desede"_s)) {
					tmp60595$ = 1;
				}
				break;
			}
		}
		{
			$var($bytes, subkey2, nullptr)
			$var($bytes, ede, nullptr)
			switch (tmp60595$) {
			case 0:
				{
					$assign(spec, $new($DESKeySpec, subkey1, 0));
					$init($AbstractSaslImpl);
					$init($Level);
					if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINEST)) {
						traceOutput(DigestMD5Base::DP_CLASS_NAME, "makeDesKeys"_s, "DIGEST42:DES key input: "_s, input);
						traceOutput(DigestMD5Base::DP_CLASS_NAME, "makeDesKeys"_s, "DIGEST43:DES key parity-adjusted: "_s, subkey1);
						traceOutput(DigestMD5Base::DP_CLASS_NAME, "makeDesKeys"_s, "DIGEST44:DES key material: "_s, $($nc(($cast($DESKeySpec, spec)))->getKey()));
						$nc($AbstractSaslImpl::logger)->log($Level::FINEST, "DIGEST45: is parity-adjusted? {0}"_s, $($of($Boolean::valueOf($DESKeySpec::isParityAdjusted(subkey1, 0)))));
					}
					break;
				}
			case 1:
				{
					$assign(subkey2, addDesParity(input, 7, 7));
					$assign(ede, $new($bytes, $nc(subkey1)->length * 2 + $nc(subkey2)->length));
					$System::arraycopy(subkey1, 0, ede, 0, subkey1->length);
					$System::arraycopy(subkey2, 0, ede, subkey1->length, subkey2->length);
					$System::arraycopy(subkey1, 0, ede, subkey1->length + subkey2->length, subkey1->length);
					$assign(spec, $new($DESedeKeySpec, ede, 0));
					$init($AbstractSaslImpl);
					$init($Level);
					if ($nc($AbstractSaslImpl::logger)->isLoggable($Level::FINEST)) {
						traceOutput(DigestMD5Base::DP_CLASS_NAME, "makeDesKeys"_s, "DIGEST46:3DES key input: "_s, input);
						traceOutput(DigestMD5Base::DP_CLASS_NAME, "makeDesKeys"_s, "DIGEST47:3DES key ede: "_s, ede);
						traceOutput(DigestMD5Base::DP_CLASS_NAME, "makeDesKeys"_s, "DIGEST48:3DES key material: "_s, $($nc(($cast($DESedeKeySpec, spec)))->getKey()));
						$nc($AbstractSaslImpl::logger)->log($Level::FINEST, "DIGEST49: is parity-adjusted? "_s, $($of($Boolean::valueOf($DESedeKeySpec::isParityAdjusted(ede, 0)))));
					}
					break;
				}
			default:
				{
					$throwNew($IllegalArgumentException, $$str({"Invalid DES strength:"_s, desStrength}));
				}
			}
		}
	}
	return $nc(desFactory)->generateSecret(spec);
}

void clinit$DigestMD5Base($Class* class$) {
	$assignStatic(DigestMD5Base::SECURITY_LAYER_MARKER, ":00000000000000000000000000000000"_s);
	$load($DigestMD5Base$DigestIntegrity);
	$assignStatic(DigestMD5Base::DI_CLASS_NAME, $DigestMD5Base$DigestIntegrity::class$->getName());
	$load($DigestMD5Base$DigestPrivacy);
	$assignStatic(DigestMD5Base::DP_CLASS_NAME, $DigestMD5Base$DigestPrivacy::class$->getName());
	$assignStatic(DigestMD5Base::CIPHER_TOKENS, $new($StringArray, {
		"3des"_s,
		"rc4"_s,
		"des"_s,
		"rc4-56"_s,
		"rc4-40"_s
	}));
	$assignStatic(DigestMD5Base::JCE_CIPHER_NAME, $new($StringArray, {
		"DESede/CBC/NoPadding"_s,
		"RC4"_s,
		"DES/CBC/NoPadding"_s
	}));
	$assignStatic(DigestMD5Base::CIPHER_MASKS, $new($bytes, {
		DigestMD5Base::DES_3_STRENGTH,
		DigestMD5Base::RC4_STRENGTH,
		DigestMD5Base::DES_STRENGTH,
		DigestMD5Base::RC4_56_STRENGTH,
		DigestMD5Base::RC4_40_STRENGTH
	}));
	$assignStatic(DigestMD5Base::EMPTY_BYTE_ARRAY, $new($bytes, 0));
	$assignStatic(DigestMD5Base::pem_array, $new($chars, {
		u'A',
		u'B',
		u'C',
		u'D',
		u'E',
		u'F',
		u'G',
		u'H',
		u'I',
		u'J',
		u'K',
		u'L',
		u'M',
		u'N',
		u'O',
		u'P',
		u'Q',
		u'R',
		u'S',
		u'T',
		u'U',
		u'V',
		u'W',
		u'X',
		u'Y',
		u'Z',
		u'a',
		u'b',
		u'c',
		u'd',
		u'e',
		u'f',
		u'g',
		u'h',
		u'i',
		u'j',
		u'k',
		u'l',
		u'm',
		u'n',
		u'o',
		u'p',
		u'q',
		u'r',
		u's',
		u't',
		u'u',
		u'v',
		u'w',
		u'x',
		u'y',
		u'z',
		u'0',
		u'1',
		u'2',
		u'3',
		u'4',
		u'5',
		u'6',
		u'7',
		u'8',
		u'9',
		u'+',
		u'/'
	}));
	$assignStatic(DigestMD5Base::MASK, $new($BigInteger, "7f"_s, 16));
}

DigestMD5Base::DigestMD5Base() {
}

$Class* DigestMD5Base::load$($String* name, bool initialize) {
	$loadClass(DigestMD5Base, name, initialize, &_DigestMD5Base_ClassInfo_, clinit$DigestMD5Base, allocate$DigestMD5Base);
	return class$;
}

$Class* DigestMD5Base::class$ = nullptr;

				} // digest
			} // sasl
		} // security
	} // sun
} // com