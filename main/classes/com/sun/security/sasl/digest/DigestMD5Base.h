#ifndef _com_sun_security_sasl_digest_DigestMD5Base_h_
#define _com_sun_security_sasl_digest_DigestMD5Base_h_
//$ class com.sun.security.sasl.digest.DigestMD5Base
//$ extends com.sun.security.sasl.util.AbstractSaslImpl

#include <com/sun/security/sasl/util/AbstractSaslImpl.h>
#include <java/lang/Array.h>

#pragma push_macro("CIPHER_MASKS")
#undef CIPHER_MASKS
#pragma push_macro("CIPHER_TOKENS")
#undef CIPHER_TOKENS
#pragma push_macro("DEFAULT_MAXBUF")
#undef DEFAULT_MAXBUF
#pragma push_macro("DES")
#undef DES
#pragma push_macro("DES3")
#undef DES3
#pragma push_macro("DES_3_STRENGTH")
#undef DES_3_STRENGTH
#pragma push_macro("DES_STRENGTH")
#undef DES_STRENGTH
#pragma push_macro("DI_CLASS_NAME")
#undef DI_CLASS_NAME
#pragma push_macro("DP_CLASS_NAME")
#undef DP_CLASS_NAME
#pragma push_macro("EMPTY_BYTE_ARRAY")
#undef EMPTY_BYTE_ARRAY
#pragma push_macro("ENCODED_NONCE_SIZE")
#undef ENCODED_NONCE_SIZE
#pragma push_macro("HIGH_STRENGTH")
#undef HIGH_STRENGTH
#pragma push_macro("H_A1")
#undef H_A1
#pragma push_macro("JCE_CIPHER_NAME")
#undef JCE_CIPHER_NAME
#pragma push_macro("LOW_STRENGTH")
#undef LOW_STRENGTH
#pragma push_macro("MASK")
#undef MASK
#pragma push_macro("MAX_CHALLENGE_LENGTH")
#undef MAX_CHALLENGE_LENGTH
#pragma push_macro("MAX_RESPONSE_LENGTH")
#undef MAX_RESPONSE_LENGTH
#pragma push_macro("MEDIUM_STRENGTH")
#undef MEDIUM_STRENGTH
#pragma push_macro("RAW_NONCE_SIZE")
#undef RAW_NONCE_SIZE
#pragma push_macro("RC4")
#undef RC4
#pragma push_macro("RC4_40_STRENGTH")
#undef RC4_40_STRENGTH
#pragma push_macro("RC4_56_STRENGTH")
#undef RC4_56_STRENGTH
#pragma push_macro("RC4_STRENGTH")
#undef RC4_STRENGTH
#pragma push_macro("SECURITY_LAYER_MARKER")
#undef SECURITY_LAYER_MARKER
#pragma push_macro("UNSET")
#undef UNSET

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {
					class SecurityCtx;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ByteArrayOutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace nio {
		namespace charset {
			class Charset;
		}
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace java {
	namespace util {
		namespace logging {
			class Logger;
		}
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace javax {
	namespace security {
		namespace auth {
			namespace callback {
				class CallbackHandler;
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace security {
			namespace sasl {
				namespace digest {

class DigestMD5Base : public ::com::sun::security::sasl::util::AbstractSaslImpl {
	$class(DigestMD5Base, 0, ::com::sun::security::sasl::util::AbstractSaslImpl)
public:
	DigestMD5Base();
	void init$(::java::util::Map* props, $String* className, int32_t firstStep, $String* digestUri, ::javax::security::auth::callback::CallbackHandler* cbh);
	static void access$000(int32_t x0, $bytes* x1, int32_t x2, int32_t x3);
	static ::java::util::logging::Logger* access$100();
	static ::java::util::logging::Logger* access$1000();
	static void access$1100($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$1200($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$1300($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$1400($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$1500($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$1600();
	static int32_t access$1700($bytes* x0, int32_t x1, int32_t x2);
	static int32_t access$1800($bytes* x0, int32_t x1, int32_t x2);
	static int32_t access$1900($bytes* x0, int32_t x1, int32_t x2);
	static void access$200($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$2000(int32_t x0, $bytes* x1, int32_t x2, int32_t x3);
	static ::java::util::logging::Logger* access$2100();
	static void access$2200($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$2300($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$2400();
	static void access$2500($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$2600($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$2700($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$2800($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$2900();
	static void access$300($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$3000($String* x0, $String* x1, $String* x2, $bytes* x3, int32_t x4, int32_t x5);
	static void access$3100($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$3200($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$3300();
	static void access$3400($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$3500();
	static void access$3600($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$3700();
	static ::java::util::logging::Logger* access$3800();
	static void access$3900($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$400();
	static ::java::util::logging::Logger* access$4000();
	static void access$4100($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$4200($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$4300($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$4400($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$4500();
	static ::java::util::logging::Logger* access$4600();
	static ::java::util::logging::Logger* access$4700();
	static void access$4800($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$4900();
	static void access$500($String* x0, $String* x1, $String* x2, $bytes* x3, int32_t x4, int32_t x5);
	static int32_t access$5000($bytes* x0, int32_t x1, int32_t x2);
	static int32_t access$5100($bytes* x0, int32_t x1, int32_t x2);
	static int32_t access$5200($bytes* x0, int32_t x1, int32_t x2);
	static void access$600($String* x0, $String* x1, $String* x2, $bytes* x3);
	static void access$700($String* x0, $String* x1, $String* x2, $bytes* x3);
	static ::java::util::logging::Logger* access$800();
	static void access$900($String* x0, $String* x1, $String* x2, $bytes* x3);
	static $bytes* addDesParity($bytes* input, int32_t offset, int32_t len);
	virtual $bytes* binaryToHex($bytes* digest);
	virtual void dispose();
	static void extractDirective($String* key, $bytes* value, $StringArray* keyTable, $Array<int8_t, 2>* valueTable, ::java::util::List* realmChoices, int32_t realmIndex);
	static $bytes* generateNonce();
	virtual $bytes* generateResponseValue($String* authMethod, $String* digestUriValue, $String* qopValue, $String* usernameValue, $String* realmValue, $chars* passwdValue, $bytes* nonceValue, $bytes* cNonceValue, int32_t nonceCount, $bytes* authzidValue);
	virtual $String* getMechanismName();
	virtual $Object* getNegotiatedProperty($String* propName) override;
	static $bytes* getPlatformCiphers();
	static bool isLws(int8_t b);
	static ::javax::crypto::SecretKey* makeDesKeys($bytes* input, $String* desStrength);
	static bool needEscape($String* str);
	static bool needEscape(char16_t ch);
	static $String* nonceCountToHex(int32_t count);
	static $Array<int8_t, 2>* parseDirectives($bytes* buf, $StringArray* keyTable, ::java::util::List* realmChoices, int32_t realmIndex);
	static $String* quotedStringValue($String* str);
	static void setParityBit($bytes* key);
	static int32_t skipLws($bytes* buf, int32_t start);
	virtual $bytes* stringToByte_8859_1($String* str);
	virtual $bytes* unwrap($bytes* incoming, int32_t start, int32_t len);
	virtual $bytes* wrap($bytes* outgoing, int32_t start, int32_t len);
	static void writeQuotedStringValue(::java::io::ByteArrayOutputStream* out, $bytes* buf);
	static $String* DI_CLASS_NAME;
	static $String* DP_CLASS_NAME;
	static const int32_t MAX_CHALLENGE_LENGTH = 2048;
	static const int32_t MAX_RESPONSE_LENGTH = 4096;
	static const int32_t DEFAULT_MAXBUF = 0x00010000;
	static const int32_t DES3 = 0;
	static const int32_t RC4 = 1;
	static const int32_t DES = 2;
	static const int32_t RC4_56 = 3;
	static const int32_t RC4_40 = 4;
	static $StringArray* CIPHER_TOKENS;
	static $StringArray* JCE_CIPHER_NAME;
	static const int8_t DES_3_STRENGTH = HIGH_STRENGTH;
	static const int8_t RC4_STRENGTH = HIGH_STRENGTH;
	static const int8_t DES_STRENGTH = MEDIUM_STRENGTH;
	static const int8_t RC4_56_STRENGTH = MEDIUM_STRENGTH;
	static const int8_t RC4_40_STRENGTH = LOW_STRENGTH;
	static const int8_t UNSET = (int8_t)0;
	static $bytes* CIPHER_MASKS;
	static $String* SECURITY_LAYER_MARKER;
	static $bytes* EMPTY_BYTE_ARRAY;
	int32_t step = 0;
	::javax::security::auth::callback::CallbackHandler* cbh = nullptr;
	::com::sun::security::sasl::digest::SecurityCtx* secCtx = nullptr;
	$bytes* H_A1 = nullptr;
	$bytes* nonce = nullptr;
	$String* negotiatedStrength = nullptr;
	$String* negotiatedCipher = nullptr;
	$String* negotiatedQop = nullptr;
	$String* negotiatedRealm = nullptr;
	bool useUTF8 = false;
	::java::nio::charset::Charset* encoding = nullptr;
	$String* digestUri = nullptr;
	$String* authzid = nullptr;
	static $chars* pem_array;
	static const int32_t RAW_NONCE_SIZE = 30;
	static const int32_t ENCODED_NONCE_SIZE = 40; // RAW_NONCE_SIZE * 4 / 3
	static ::java::math::BigInteger* MASK;
};

				} // digest
			} // sasl
		} // security
	} // sun
} // com

#pragma pop_macro("CIPHER_MASKS")
#pragma pop_macro("CIPHER_TOKENS")
#pragma pop_macro("DEFAULT_MAXBUF")
#pragma pop_macro("DES")
#pragma pop_macro("DES3")
#pragma pop_macro("DES_3_STRENGTH")
#pragma pop_macro("DES_STRENGTH")
#pragma pop_macro("DI_CLASS_NAME")
#pragma pop_macro("DP_CLASS_NAME")
#pragma pop_macro("EMPTY_BYTE_ARRAY")
#pragma pop_macro("ENCODED_NONCE_SIZE")
#pragma pop_macro("HIGH_STRENGTH")
#pragma pop_macro("H_A1")
#pragma pop_macro("JCE_CIPHER_NAME")
#pragma pop_macro("LOW_STRENGTH")
#pragma pop_macro("MASK")
#pragma pop_macro("MAX_CHALLENGE_LENGTH")
#pragma pop_macro("MAX_RESPONSE_LENGTH")
#pragma pop_macro("MEDIUM_STRENGTH")
#pragma pop_macro("RAW_NONCE_SIZE")
#pragma pop_macro("RC4")
#pragma pop_macro("RC4_40_STRENGTH")
#pragma pop_macro("RC4_56_STRENGTH")
#pragma pop_macro("RC4_STRENGTH")
#pragma pop_macro("SECURITY_LAYER_MARKER")
#pragma pop_macro("UNSET")

#endif // _com_sun_security_sasl_digest_DigestMD5Base_h_