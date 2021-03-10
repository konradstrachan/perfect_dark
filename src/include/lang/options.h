#include "lang.h"

enum l_options {
	L_OPTIONS_000 = LANG_FIRST(LANGBANK_OPTIONS),
	L_OPTIONS_001,
	L_OPTIONS_002,
	L_OPTIONS_003,
	L_OPTIONS_004,
	L_OPTIONS_005,
	L_OPTIONS_006,
	L_OPTIONS_007,
	L_OPTIONS_008,
	L_OPTIONS_009,
	L_OPTIONS_010,
	L_OPTIONS_011,
	L_OPTIONS_012,
	L_OPTIONS_013,
	L_OPTIONS_014,
	L_OPTIONS_015,
	L_OPTIONS_016,
	L_OPTIONS_017,
	L_OPTIONS_018,
	L_OPTIONS_019,
	L_OPTIONS_020,
	L_OPTIONS_021,
	L_OPTIONS_022,
	L_OPTIONS_023,
	L_OPTIONS_024,
	L_OPTIONS_025,
	L_OPTIONS_026,
	L_OPTIONS_027,
	L_OPTIONS_028,
	L_OPTIONS_029,
	L_OPTIONS_030,
	L_OPTIONS_031,
	L_OPTIONS_032,
	L_OPTIONS_033,
	L_OPTIONS_034,
	L_OPTIONS_035,
	L_OPTIONS_036,
	L_OPTIONS_037,
	L_OPTIONS_038,
	L_OPTIONS_039,
	L_OPTIONS_040,
	L_OPTIONS_041,
	L_OPTIONS_042,
	L_OPTIONS_043,
	L_OPTIONS_044,
	L_OPTIONS_045,
	L_OPTIONS_046,
	L_OPTIONS_047,
	L_OPTIONS_048,
	L_OPTIONS_049,
	L_OPTIONS_050,
	L_OPTIONS_051,
	L_OPTIONS_052,
	L_OPTIONS_053,
	L_OPTIONS_054,
	L_OPTIONS_055,
	L_OPTIONS_056,
	L_OPTIONS_057,
	L_OPTIONS_058,
	L_OPTIONS_059,
	L_OPTIONS_060,
	L_OPTIONS_061,
	L_OPTIONS_062,
	L_OPTIONS_063,
	L_OPTIONS_064,
	L_OPTIONS_065,
	L_OPTIONS_066,
	L_OPTIONS_067,
	L_OPTIONS_068,
	L_OPTIONS_069,
	L_OPTIONS_070,
	L_OPTIONS_071,
	L_OPTIONS_072,
	L_OPTIONS_073,
	L_OPTIONS_074,
	L_OPTIONS_075,
	L_OPTIONS_076,
	L_OPTIONS_077,
	L_OPTIONS_078,
	L_OPTIONS_079,
	L_OPTIONS_080,
	L_OPTIONS_081,
	L_OPTIONS_082,
	L_OPTIONS_083,
	L_OPTIONS_084,
	L_OPTIONS_085,
	L_OPTIONS_086,
	L_OPTIONS_087,
	L_OPTIONS_088,
	L_OPTIONS_089,
	L_OPTIONS_090,
	L_OPTIONS_091,
	L_OPTIONS_092,
	L_OPTIONS_093,
	L_OPTIONS_094,
	L_OPTIONS_095,
	L_OPTIONS_096,
	L_OPTIONS_097,
	L_OPTIONS_098,
	L_OPTIONS_099,
	L_OPTIONS_100,
	L_OPTIONS_101,
	L_OPTIONS_102,
	L_OPTIONS_103,
	L_OPTIONS_104,
	L_OPTIONS_105,
	L_OPTIONS_106,
	L_OPTIONS_107,
	L_OPTIONS_108,
	L_OPTIONS_109,
	L_OPTIONS_110,
	L_OPTIONS_111,
	L_OPTIONS_112,
	L_OPTIONS_113,
	L_OPTIONS_114,
	L_OPTIONS_115,
	L_OPTIONS_116,
	L_OPTIONS_117,
	L_OPTIONS_118,
	L_OPTIONS_119,
	L_OPTIONS_120,
	L_OPTIONS_121,
	L_OPTIONS_122,
	L_OPTIONS_123,
	L_OPTIONS_124,
	L_OPTIONS_125,
	L_OPTIONS_126,
	L_OPTIONS_127,
	L_OPTIONS_128,
	L_OPTIONS_129,
	L_OPTIONS_130,
	L_OPTIONS_131,
	L_OPTIONS_132,
	L_OPTIONS_133,
	L_OPTIONS_134,
	L_OPTIONS_135,
	L_OPTIONS_136,
	L_OPTIONS_137,
	L_OPTIONS_138,
	L_OPTIONS_139,
	L_OPTIONS_140,
	L_OPTIONS_141,
	L_OPTIONS_142,
	L_OPTIONS_143,
	L_OPTIONS_144,
	L_OPTIONS_145,
	L_OPTIONS_146,
	L_OPTIONS_147,
	L_OPTIONS_148,
	L_OPTIONS_149,
	L_OPTIONS_150,
	L_OPTIONS_151,
	L_OPTIONS_152,
	L_OPTIONS_153,
	L_OPTIONS_154,
	L_OPTIONS_155,
	L_OPTIONS_156,
	L_OPTIONS_157,
	L_OPTIONS_158,
	L_OPTIONS_159,
	L_OPTIONS_160,
	L_OPTIONS_161,
	L_OPTIONS_162,
	L_OPTIONS_163,
	L_OPTIONS_164,
	L_OPTIONS_165,
	L_OPTIONS_166,
	L_OPTIONS_167,
	L_OPTIONS_168,
	L_OPTIONS_169,
	L_OPTIONS_170,
	L_OPTIONS_171,
	L_OPTIONS_172,
	L_OPTIONS_173,
	L_OPTIONS_174,
	L_OPTIONS_175,
	L_OPTIONS_176,
	L_OPTIONS_177,
	L_OPTIONS_178,
	L_OPTIONS_179,
	L_OPTIONS_180,
	L_OPTIONS_181,
	L_OPTIONS_182,
	L_OPTIONS_183,
	L_OPTIONS_184,
	L_OPTIONS_185,
	L_OPTIONS_186,
	L_OPTIONS_187,
	L_OPTIONS_188,
	L_OPTIONS_189,
	L_OPTIONS_190,
	L_OPTIONS_191,
	L_OPTIONS_192,
	L_OPTIONS_193,
	L_OPTIONS_194,
	L_OPTIONS_195,
	L_OPTIONS_196,
	L_OPTIONS_197,
	L_OPTIONS_198,
	L_OPTIONS_199,
	L_OPTIONS_200,
	L_OPTIONS_201,
	L_OPTIONS_202,
	L_OPTIONS_203,
	L_OPTIONS_204,
	L_OPTIONS_205,
	L_OPTIONS_206,
	L_OPTIONS_207,
	L_OPTIONS_208,
	L_OPTIONS_209,
	L_OPTIONS_210,
	L_OPTIONS_211,
	L_OPTIONS_212,
	L_OPTIONS_213,
	L_OPTIONS_214,
	L_OPTIONS_215,
	L_OPTIONS_216,
	L_OPTIONS_217,
	L_OPTIONS_218,
	L_OPTIONS_219,
	L_OPTIONS_220,
	L_OPTIONS_221,
	L_OPTIONS_222,
	L_OPTIONS_223,
	L_OPTIONS_224,
	L_OPTIONS_225,
	L_OPTIONS_226,
	L_OPTIONS_227,
	L_OPTIONS_228,
	L_OPTIONS_229,
	L_OPTIONS_230,
	L_OPTIONS_231,
	L_OPTIONS_232,
	L_OPTIONS_233,
	L_OPTIONS_234,
	L_OPTIONS_235,
	L_OPTIONS_236,
	L_OPTIONS_237,
	L_OPTIONS_238,
	L_OPTIONS_239,
	L_OPTIONS_240,
	L_OPTIONS_241,
	L_OPTIONS_242,
	L_OPTIONS_243,
	L_OPTIONS_244,
	L_OPTIONS_245,
	L_OPTIONS_246,
	L_OPTIONS_247,
	L_OPTIONS_248,
	L_OPTIONS_249,
	L_OPTIONS_250,
	L_OPTIONS_251,
	L_OPTIONS_252,
	L_OPTIONS_253,
	L_OPTIONS_254,
	L_OPTIONS_255,
	L_OPTIONS_256,
	L_OPTIONS_257,
	L_OPTIONS_258,
	L_OPTIONS_259,
	L_OPTIONS_260,
	L_OPTIONS_261,
	L_OPTIONS_262,
	L_OPTIONS_263,
	L_OPTIONS_264,
	L_OPTIONS_265,
	L_OPTIONS_266,
	L_OPTIONS_267,
	L_OPTIONS_268,
	L_OPTIONS_269,
	L_OPTIONS_270,
	L_OPTIONS_271,
	L_OPTIONS_272,
	L_OPTIONS_273,
	L_OPTIONS_274,
	L_OPTIONS_275,
	L_OPTIONS_276,
	L_OPTIONS_277,
	L_OPTIONS_278,
	L_OPTIONS_279,
	L_OPTIONS_280,
	L_OPTIONS_281,
	L_OPTIONS_282,
	L_OPTIONS_283,
	L_OPTIONS_284,
	L_OPTIONS_285,
	L_OPTIONS_286,
	L_OPTIONS_287,
	L_OPTIONS_288,
	L_OPTIONS_289,
	L_OPTIONS_290,
	L_OPTIONS_291,
	L_OPTIONS_292,
	L_OPTIONS_293,
	L_OPTIONS_294,
	L_OPTIONS_295,
	L_OPTIONS_296,
	L_OPTIONS_297,
	L_OPTIONS_298,
	L_OPTIONS_299,
	L_OPTIONS_300,
	L_OPTIONS_301,
	L_OPTIONS_302,
	L_OPTIONS_303,
	L_OPTIONS_304,
	L_OPTIONS_305,
	L_OPTIONS_306,
	L_OPTIONS_307,
	L_OPTIONS_308,
	L_OPTIONS_309,
	L_OPTIONS_310,
	L_OPTIONS_311,
	L_OPTIONS_312,
	L_OPTIONS_313,
	L_OPTIONS_314,
	L_OPTIONS_315,
	L_OPTIONS_316,
	L_OPTIONS_317,
	L_OPTIONS_318,
	L_OPTIONS_319,
	L_OPTIONS_320,
	L_OPTIONS_321,
	L_OPTIONS_322,
	L_OPTIONS_323,
	L_OPTIONS_324,
	L_OPTIONS_325,
	L_OPTIONS_326,
	L_OPTIONS_327,
	L_OPTIONS_328,
	L_OPTIONS_329,
	L_OPTIONS_330,
	L_OPTIONS_331,
	L_OPTIONS_332,
	L_OPTIONS_333,
	L_OPTIONS_334,
	L_OPTIONS_335,
	L_OPTIONS_336,
	L_OPTIONS_337,
	L_OPTIONS_338,
	L_OPTIONS_339,
	L_OPTIONS_340,
	L_OPTIONS_341,
	L_OPTIONS_342,
	L_OPTIONS_343,
	L_OPTIONS_344,
	L_OPTIONS_345,
	L_OPTIONS_346,
	L_OPTIONS_347,
	L_OPTIONS_348,
	L_OPTIONS_349,
	L_OPTIONS_350,
	L_OPTIONS_351,
	L_OPTIONS_352,
	L_OPTIONS_353,
	L_OPTIONS_354,
	L_OPTIONS_355,
	L_OPTIONS_356,
	L_OPTIONS_357,
	L_OPTIONS_358,
	L_OPTIONS_359,
	L_OPTIONS_360,
	L_OPTIONS_361,
	L_OPTIONS_362,
	L_OPTIONS_363,
	L_OPTIONS_364,
	L_OPTIONS_365,
	L_OPTIONS_366,
	L_OPTIONS_367,
	L_OPTIONS_368,
	L_OPTIONS_369,
	L_OPTIONS_370,
	L_OPTIONS_371,
	L_OPTIONS_372,
	L_OPTIONS_373,
	L_OPTIONS_374,
	L_OPTIONS_375,
	L_OPTIONS_376,
	L_OPTIONS_377,
	L_OPTIONS_378,
	L_OPTIONS_379,
	L_OPTIONS_380,
	L_OPTIONS_381,
	L_OPTIONS_382,
	L_OPTIONS_383,
	L_OPTIONS_384,
	L_OPTIONS_385,
	L_OPTIONS_386,
	L_OPTIONS_387,
	L_OPTIONS_388,
	L_OPTIONS_389,
	L_OPTIONS_390,
	L_OPTIONS_391,
	L_OPTIONS_392,
	L_OPTIONS_393,
	L_OPTIONS_394,
	L_OPTIONS_395,
	L_OPTIONS_396,
	L_OPTIONS_397,
	L_OPTIONS_398,
	L_OPTIONS_399,
	L_OPTIONS_400,
	L_OPTIONS_401,
	L_OPTIONS_402,
	L_OPTIONS_403,
	L_OPTIONS_404,
	L_OPTIONS_405,
	L_OPTIONS_406,
	L_OPTIONS_407,
	L_OPTIONS_408,
	L_OPTIONS_409,
	L_OPTIONS_410,
	L_OPTIONS_411,
	L_OPTIONS_412,
	L_OPTIONS_413,
	L_OPTIONS_414,
	L_OPTIONS_415,
	L_OPTIONS_416,
	L_OPTIONS_417,
	L_OPTIONS_418,
	L_OPTIONS_419,
	L_OPTIONS_420,
	L_OPTIONS_421,
	L_OPTIONS_422,
	L_OPTIONS_423,
	L_OPTIONS_424,
	L_OPTIONS_425,
	L_OPTIONS_426,
	L_OPTIONS_427,
	L_OPTIONS_428,
	L_OPTIONS_429,
	L_OPTIONS_430,
	L_OPTIONS_431,
	L_OPTIONS_432,
	L_OPTIONS_433,
	L_OPTIONS_434,
	L_OPTIONS_435,
	L_OPTIONS_436,
	L_OPTIONS_437,
	L_OPTIONS_438,
	L_OPTIONS_439,
	L_OPTIONS_440,
	L_OPTIONS_441,
	L_OPTIONS_442,
	L_OPTIONS_443,
	L_OPTIONS_444,
	L_OPTIONS_445,
	L_OPTIONS_446,
	L_OPTIONS_447,
	L_OPTIONS_448,
	L_OPTIONS_449,
	L_OPTIONS_450,
	L_OPTIONS_451,
	L_OPTIONS_452,
	L_OPTIONS_453,
	L_OPTIONS_454,
	L_OPTIONS_455,
	L_OPTIONS_456,
	L_OPTIONS_457,
	L_OPTIONS_458,
	L_OPTIONS_459,
	L_OPTIONS_460,
	L_OPTIONS_461,
	L_OPTIONS_462,
	L_OPTIONS_463,
	L_OPTIONS_464,
	L_OPTIONS_465,
	L_OPTIONS_466,
	L_OPTIONS_467,
	L_OPTIONS_468,
	L_OPTIONS_469,
	L_OPTIONS_470,
	L_OPTIONS_471,
	L_OPTIONS_472,
	L_OPTIONS_473,
	L_OPTIONS_474,
	L_OPTIONS_475,
	L_OPTIONS_476,
	L_OPTIONS_477,
	L_OPTIONS_478,
	L_OPTIONS_479,
	L_OPTIONS_480,
	L_OPTIONS_481,
	L_OPTIONS_482,
	L_OPTIONS_483,
	L_OPTIONS_484,
	L_OPTIONS_485,
	L_OPTIONS_486,
	L_OPTIONS_487,
	L_OPTIONS_488,
	L_OPTIONS_489,
	L_OPTIONS_490,
	L_OPTIONS_491,
	L_OPTIONS_492,
	L_OPTIONS_493,
	L_OPTIONS_494,
	L_OPTIONS_495
};
