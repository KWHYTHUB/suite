
template<class Derived>
struct Modify<Derived, UploadMessageDelegate> : ModifyBase<Modify<Derived, UploadMessageDelegate>> {
	using ModifyBase<Modify<Derived, UploadMessageDelegate>>::ModifyBase;
	using Base = UploadMessageDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, UILayer> : ModifyBase<Modify<Derived, UILayer>> {
	using ModifyBase<Modify<Derived, UILayer>>::ModifyBase;
	using Base = UILayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2259, DefaultConv, UILayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2260, DefaultConv, UILayer, disableMenu)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2261, DefaultConv, UILayer, enableMenu)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2262, DefaultConv, UILayer, pCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2263, DefaultConv, UILayer, toggleCheckpointsMenu)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2264, DefaultConv, UILayer, onCheck)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2265, DefaultConv, UILayer, onDeleteCheck)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2266, DefaultConv, UILayer, onPause)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2267, DefaultConv, UILayer, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2268, DefaultConv, UILayer, keyUp)
	}
};

template<class Derived>
struct Modify<Derived, TextInputDelegate> : ModifyBase<Modify<Derived, TextInputDelegate>> {
	using ModifyBase<Modify<Derived, TextInputDelegate>>::ModifyBase;
	using Base = TextInputDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TextArea> : ModifyBase<Modify<Derived, TextArea>> {
	using ModifyBase<Modify<Derived, TextArea>>::ModifyBase;
	using Base = TextArea;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2237, DefaultConv, TextArea, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2238, DefaultConv, TextArea, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2239, DefaultConv, TextArea, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2240, DefaultConv, TextArea, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2241, DefaultConv, TextArea, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2243, DefaultConv, TextArea, setString)
	}
};

template<class Derived>
struct Modify<Derived, TextAlertPopup> : ModifyBase<Modify<Derived, TextAlertPopup>> {
	using ModifyBase<Modify<Derived, TextAlertPopup>>::ModifyBase;
	using Base = TextAlertPopup;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TableViewDelegate> : ModifyBase<Modify<Derived, TableViewDelegate>> {
	using ModifyBase<Modify<Derived, TableViewDelegate>>::ModifyBase;
	using Base = TableViewDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TableViewDataSource> : ModifyBase<Modify<Derived, TableViewDataSource>> {
	using ModifyBase<Modify<Derived, TableViewDataSource>>::ModifyBase;
	using Base = TableViewDataSource;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, StatsCell> : ModifyBase<Modify<Derived, StatsCell>> {
	using ModifyBase<Modify<Derived, StatsCell>>::ModifyBase;
	using Base = StatsCell;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2222, DefaultConv, StatsCell, draw)
	}
};

template<class Derived>
struct Modify<Derived, StartPosObject> : ModifyBase<Modify<Derived, StartPosObject>> {
	using ModifyBase<Modify<Derived, StartPosObject>>::ModifyBase;
	using Base = StartPosObject;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SongCell> : ModifyBase<Modify<Derived, SongCell>> {
	using ModifyBase<Modify<Derived, SongCell>>::ModifyBase;
	using Base = SongCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SliderTouchLogic> : ModifyBase<Modify<Derived, SliderTouchLogic>> {
	using ModifyBase<Modify<Derived, SliderTouchLogic>>::ModifyBase;
	using Base = SliderTouchLogic;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SliderThumb> : ModifyBase<Modify<Derived, SliderThumb>> {
	using ModifyBase<Modify<Derived, SliderThumb>>::ModifyBase;
	using Base = SliderThumb;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2211, DefaultConv, SliderThumb, setValue)
	}
};

template<class Derived>
struct Modify<Derived, SimplePlayer> : ModifyBase<Modify<Derived, SimplePlayer>> {
	using ModifyBase<Modify<Derived, SimplePlayer>>::ModifyBase;
	using Base = SimplePlayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2198, DefaultConv, SimplePlayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2199, DefaultConv, SimplePlayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2200, DefaultConv, SimplePlayer, updatePlayerFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2201, DefaultConv, SimplePlayer, updateColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2203, DefaultConv, SimplePlayer, setColor)
	}
};

template<class Derived>
struct Modify<Derived, SpawnTriggerAction> : ModifyBase<Modify<Derived, SpawnTriggerAction>> {
	using ModifyBase<Modify<Derived, SpawnTriggerAction>>::ModifyBase;
	using Base = SpawnTriggerAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2220, DefaultConv, SpawnTriggerAction, createFromString)
	}
};

template<class Derived>
struct Modify<Derived, SetupSpawnPopup> : ModifyBase<Modify<Derived, SetupSpawnPopup>> {
	using ModifyBase<Modify<Derived, SetupSpawnPopup>>::ModifyBase;
	using Base = SetupSpawnPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2186, DefaultConv, SetupSpawnPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2187, DefaultConv, SetupSpawnPopup, createToggleButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2188, DefaultConv, SetupSpawnPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2189, DefaultConv, SetupSpawnPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2190, DefaultConv, SetupSpawnPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, SetupShakePopup> : ModifyBase<Modify<Derived, SetupShakePopup>> {
	using ModifyBase<Modify<Derived, SetupShakePopup>>::ModifyBase;
	using Base = SetupShakePopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2185, DefaultConv, SetupShakePopup, create)
	}
};

template<class Derived>
struct Modify<Derived, SetupPulsePopup> : ModifyBase<Modify<Derived, SetupPulsePopup>> {
	using ModifyBase<Modify<Derived, SetupPulsePopup>>::ModifyBase;
	using Base = SetupPulsePopup;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupObjectTogglePopup> : ModifyBase<Modify<Derived, SetupObjectTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupObjectTogglePopup>>::ModifyBase;
	using Base = SetupObjectTogglePopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2166, DefaultConv, SetupObjectTogglePopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2167, DefaultConv, SetupObjectTogglePopup, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2168, DefaultConv, SetupObjectTogglePopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2169, DefaultConv, SetupObjectTogglePopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2170, DefaultConv, SetupObjectTogglePopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, SetupCountTriggerPopup> : ModifyBase<Modify<Derived, SetupCountTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCountTriggerPopup>>::ModifyBase;
	using Base = SetupCountTriggerPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2154, DefaultConv, SetupCountTriggerPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2155, DefaultConv, SetupCountTriggerPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2156, DefaultConv, SetupCountTriggerPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2157, DefaultConv, SetupCountTriggerPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, SetupAnimationPopup> : ModifyBase<Modify<Derived, SetupAnimationPopup>> {
	using ModifyBase<Modify<Derived, SetupAnimationPopup>>::ModifyBase;
	using Base = SetupAnimationPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2146, DefaultConv, SetupAnimationPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2147, DefaultConv, SetupAnimationPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2148, DefaultConv, SetupAnimationPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2149, DefaultConv, SetupAnimationPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, SetTargetIDLayer> : ModifyBase<Modify<Derived, SetTargetIDLayer>> {
	using ModifyBase<Modify<Derived, SetTargetIDLayer>>::ModifyBase;
	using Base = SetTargetIDLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2142, DefaultConv, SetTargetIDLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2143, DefaultConv, SetTargetIDLayer, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2144, DefaultConv, SetTargetIDLayer, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2145, DefaultConv, SetTargetIDLayer, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, SetIDPopup> : ModifyBase<Modify<Derived, SetIDPopup>> {
	using ModifyBase<Modify<Derived, SetIDPopup>>::ModifyBase;
	using Base = SetIDPopup;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SelectArtLayer> : ModifyBase<Modify<Derived, SelectArtLayer>> {
	using ModifyBase<Modify<Derived, SelectArtLayer>>::ModifyBase;
	using Base = SelectArtLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ScrollingLayer> : ModifyBase<Modify<Derived, ScrollingLayer>> {
	using ModifyBase<Modify<Derived, ScrollingLayer>>::ModifyBase;
	using Base = ScrollingLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2130, DefaultConv, ScrollingLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, RetryLevelLayer> : ModifyBase<Modify<Derived, RetryLevelLayer>> {
	using ModifyBase<Modify<Derived, RetryLevelLayer>>::ModifyBase;
	using Base = RetryLevelLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2129, DefaultConv, RetryLevelLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, SetupPickupTriggerPopup> : ModifyBase<Modify<Derived, SetupPickupTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupPickupTriggerPopup>>::ModifyBase;
	using Base = SetupPickupTriggerPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2175, DefaultConv, SetupPickupTriggerPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2176, DefaultConv, SetupPickupTriggerPopup, onItemIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2177, DefaultConv, SetupPickupTriggerPopup, onNextItemID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2178, DefaultConv, SetupPickupTriggerPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2179, DefaultConv, SetupPickupTriggerPopup, updateItemID)
	}
};

template<class Derived>
struct Modify<Derived, PointNode> : ModifyBase<Modify<Derived, PointNode>> {
	using ModifyBase<Modify<Derived, PointNode>>::ModifyBase;
	using Base = PointNode;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, PlayerObject> : ModifyBase<Modify<Derived, PlayerObject>> {
	using ModifyBase<Modify<Derived, PlayerObject>>::ModifyBase;
	using Base = PlayerObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1968, DefaultConv, PlayerObject, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1969, DefaultConv, PlayerObject, update)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1970, DefaultConv, PlayerObject, setScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1971, DefaultConv, PlayerObject, setScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1972, DefaultConv, PlayerObject, setScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1973, DefaultConv, PlayerObject, setPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1974, DefaultConv, PlayerObject, setVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1975, DefaultConv, PlayerObject, setRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1976, DefaultConv, PlayerObject, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1977, DefaultConv, PlayerObject, setColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1978, DefaultConv, PlayerObject, setFlipX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1979, DefaultConv, PlayerObject, setFlipY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1980, DefaultConv, PlayerObject, resetObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1981, DefaultConv, PlayerObject, getRealPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1982, DefaultConv, PlayerObject, getOrientedBox)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1983, DefaultConv, PlayerObject, animationFinished)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1984, DefaultConv, PlayerObject, activateStreak)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1985, DefaultConv, PlayerObject, addAllParticles)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1986, DefaultConv, PlayerObject, addToTouchedRings)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1987, DefaultConv, PlayerObject, boostPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1988, DefaultConv, PlayerObject, bumpPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1989, DefaultConv, PlayerObject, buttonDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1990, DefaultConv, PlayerObject, checkSnapJumpToObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1991, DefaultConv, PlayerObject, collidedWithObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1992, DefaultConv, PlayerObject, collidedWithObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1993, DefaultConv, PlayerObject, collidedWithSlope)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1994, DefaultConv, PlayerObject, convertToClosestRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1995, DefaultConv, PlayerObject, copyAttributes)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1996, DefaultConv, PlayerObject, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1997, DefaultConv, PlayerObject, deactivateParticle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1998, DefaultConv, PlayerObject, deactivateStreak)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1999, DefaultConv, PlayerObject, fadeOutStreak2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2000, DefaultConv, PlayerObject, flashPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2001, DefaultConv, PlayerObject, flipGravity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2002, DefaultConv, PlayerObject, flipMod)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2003, DefaultConv, PlayerObject, getActiveMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2004, DefaultConv, PlayerObject, getModifiedSlopeYVel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2005, DefaultConv, PlayerObject, getOldPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2006, DefaultConv, PlayerObject, getSecondColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2007, DefaultConv, PlayerObject, gravityDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2008, DefaultConv, PlayerObject, gravityUp)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2009, DefaultConv, PlayerObject, hardFlipGravity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2010, DefaultConv, PlayerObject, hitGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2011, DefaultConv, PlayerObject, incrementJumps)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2012, DefaultConv, PlayerObject, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2013, DefaultConv, PlayerObject, isBoostValid)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2014, DefaultConv, PlayerObject, isFlying)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2015, DefaultConv, PlayerObject, isSafeFlip)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2016, DefaultConv, PlayerObject, isSafeMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2017, DefaultConv, PlayerObject, isSafeSpiderFlip)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2018, DefaultConv, PlayerObject, levelFlipFinished)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2019, DefaultConv, PlayerObject, levelFlipping)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2020, DefaultConv, PlayerObject, levelWillFlip)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2021, DefaultConv, PlayerObject, loadFromCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2022, DefaultConv, PlayerObject, lockPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2023, DefaultConv, PlayerObject, logValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2024, DefaultConv, PlayerObject, modeDidChange)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2025, DefaultConv, PlayerObject, placeStreakPoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2026, DefaultConv, PlayerObject, playBurstEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2027, DefaultConv, PlayerObject, playDeathEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2028, DefaultConv, PlayerObject, playDynamicSpiderRun)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2029, DefaultConv, PlayerObject, playerDestroyed)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2030, DefaultConv, PlayerObject, playerIsFalling)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2031, DefaultConv, PlayerObject, playerTeleported)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2032, DefaultConv, PlayerObject, playingEndEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2033, DefaultConv, PlayerObject, postCollision)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2034, DefaultConv, PlayerObject, preCollision)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2035, DefaultConv, PlayerObject, preSlopeCollision)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2036, DefaultConv, PlayerObject, propellPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2037, DefaultConv, PlayerObject, pushButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2038, DefaultConv, PlayerObject, pushDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2039, DefaultConv, PlayerObject, pushPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2040, DefaultConv, PlayerObject, releaseButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2041, DefaultConv, PlayerObject, removeAllParticles)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2042, DefaultConv, PlayerObject, removePendingCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2043, DefaultConv, PlayerObject, resetAllParticles)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2044, DefaultConv, PlayerObject, resetCollisionLog)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2045, DefaultConv, PlayerObject, resetPlayerIcon)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2046, DefaultConv, PlayerObject, resetStateVariables)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2047, DefaultConv, PlayerObject, resetStreak)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2048, DefaultConv, PlayerObject, ringJump)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2049, DefaultConv, PlayerObject, runBallRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2050, DefaultConv, PlayerObject, runBallRotation2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2051, DefaultConv, PlayerObject, runNormalRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2052, DefaultConv, PlayerObject, runRotateAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2053, DefaultConv, PlayerObject, saveToCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2054, DefaultConv, PlayerObject, setSecondColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2055, DefaultConv, PlayerObject, setupStreak)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2056, DefaultConv, PlayerObject, spawnCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2057, DefaultConv, PlayerObject, spawnCircle2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2058, DefaultConv, PlayerObject, spawnDualCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2059, DefaultConv, PlayerObject, spawnFromPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2060, DefaultConv, PlayerObject, spawnPortalCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2061, DefaultConv, PlayerObject, spawnScaleCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2062, DefaultConv, PlayerObject, specialGroundHit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2063, DefaultConv, PlayerObject, speedDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2064, DefaultConv, PlayerObject, speedUp)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2065, DefaultConv, PlayerObject, spiderTestJump)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2066, DefaultConv, PlayerObject, startDashing)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2067, DefaultConv, PlayerObject, stopBurstEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2068, DefaultConv, PlayerObject, stopDashing)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2069, DefaultConv, PlayerObject, stopRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2070, DefaultConv, PlayerObject, storeCollision)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2071, DefaultConv, PlayerObject, switchedToMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2072, DefaultConv, PlayerObject, testForMoving)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2073, DefaultConv, PlayerObject, toggleBirdMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2074, DefaultConv, PlayerObject, toggleDartMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2075, DefaultConv, PlayerObject, toggleFlyMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2076, DefaultConv, PlayerObject, toggleGhostEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2077, DefaultConv, PlayerObject, togglePlayerScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2078, DefaultConv, PlayerObject, toggleRobotMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2079, DefaultConv, PlayerObject, toggleRollMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2080, DefaultConv, PlayerObject, toggleSpiderMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2081, DefaultConv, PlayerObject, toggleVisibility)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2082, DefaultConv, PlayerObject, touchedObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2083, DefaultConv, PlayerObject, tryPlaceCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2084, DefaultConv, PlayerObject, updateCheckpointMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2085, DefaultConv, PlayerObject, updateCheckpointTest)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2086, DefaultConv, PlayerObject, updateCollide)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2087, DefaultConv, PlayerObject, updateCollideBottom)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2088, DefaultConv, PlayerObject, updateCollideTop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2089, DefaultConv, PlayerObject, updateDashAnimation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2090, DefaultConv, PlayerObject, updateDashArt)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2091, DefaultConv, PlayerObject, updateGlowColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2092, DefaultConv, PlayerObject, updateJump)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2093, DefaultConv, PlayerObject, updateJumpVariables)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2094, DefaultConv, PlayerObject, updatePlayerBirdFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2095, DefaultConv, PlayerObject, updatePlayerDartFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2096, DefaultConv, PlayerObject, updatePlayerFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2097, DefaultConv, PlayerObject, updatePlayerGlow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2098, DefaultConv, PlayerObject, updatePlayerRobotFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2099, DefaultConv, PlayerObject, updatePlayerRollFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2100, DefaultConv, PlayerObject, updatePlayerScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2101, DefaultConv, PlayerObject, updatePlayerShipFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2102, DefaultConv, PlayerObject, updatePlayerSpiderFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2103, DefaultConv, PlayerObject, updatePlayerSpriteExtra)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2104, DefaultConv, PlayerObject, updateRobotAnimationSpeed)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2105, DefaultConv, PlayerObject, updateRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2106, DefaultConv, PlayerObject, updateRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2107, DefaultConv, PlayerObject, updateShipRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2108, DefaultConv, PlayerObject, updateShipSpriteExtra)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2109, DefaultConv, PlayerObject, updateSlopeRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2110, DefaultConv, PlayerObject, updateSlopeYVelocity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2111, DefaultConv, PlayerObject, updateSpecial)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2112, DefaultConv, PlayerObject, updateStateVariables)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2113, DefaultConv, PlayerObject, updateTimeMod)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2114, DefaultConv, PlayerObject, usingWallLimitedMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2115, DefaultConv, PlayerObject, yStartDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2116, DefaultConv, PlayerObject, yStartUp)
	}
};

template<class Derived>
struct Modify<Derived, PlayerCheckpoint> : ModifyBase<Modify<Derived, PlayerCheckpoint>> {
	using ModifyBase<Modify<Derived, PlayerCheckpoint>>::ModifyBase;
	using Base = PlayerCheckpoint;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1965, DefaultConv, PlayerCheckpoint, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1966, DefaultConv, PlayerCheckpoint, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1967, DefaultConv, PlayerCheckpoint, create)
	}
};

template<class Derived>
struct Modify<Derived, PlayLayer> : ModifyBase<Modify<Derived, PlayLayer>> {
	using ModifyBase<Modify<Derived, PlayLayer>>::ModifyBase;
	using Base = PlayLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1813, DefaultConv, PlayLayer, addCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1814, DefaultConv, PlayLayer, addObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1815, DefaultConv, PlayLayer, addToGroupOld)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1816, DefaultConv, PlayLayer, addToSpeedObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1817, DefaultConv, PlayLayer, animateInDualGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1818, DefaultConv, PlayLayer, animateInGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1819, DefaultConv, PlayLayer, animateOutGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1820, DefaultConv, PlayLayer, animateOutGroundFinished)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1821, DefaultConv, PlayLayer, applyEnterEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1822, DefaultConv, PlayLayer, calculateColorValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1823, DefaultConv, PlayLayer, cameraMoveX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1824, DefaultConv, PlayLayer, cameraMoveY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1825, DefaultConv, PlayLayer, checkCollisions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1826, DefaultConv, PlayLayer, circleWaveWillBeRemoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1827, DefaultConv, PlayLayer, claimParticle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1828, DefaultConv, PlayLayer, clearPickedUpItems)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1829, DefaultConv, PlayLayer, colorObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1830, DefaultConv, PlayLayer, commitJumps)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1831, DefaultConv, PlayLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1832, DefaultConv, PlayLayer, createCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1833, DefaultConv, PlayLayer, createObjectsFromSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1834, DefaultConv, PlayLayer, createParticle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1835, DefaultConv, PlayLayer, currencyWillExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1836, DefaultConv, PlayLayer, delayedResetLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1837, DefaultConv, PlayLayer, destroyPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1838, DefaultConv, PlayLayer, dialogClosed)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1839, DefaultConv, PlayLayer, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1840, DefaultConv, PlayLayer, enterDualMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1841, DefaultConv, PlayLayer, exitAirMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1842, DefaultConv, PlayLayer, exitBirdMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1843, DefaultConv, PlayLayer, exitDartMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1844, DefaultConv, PlayLayer, exitFlyMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1845, DefaultConv, PlayLayer, exitRobotMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1846, DefaultConv, PlayLayer, exitRollMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1847, DefaultConv, PlayLayer, exitSpiderMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1848, DefaultConv, PlayLayer, flipFinished)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1849, DefaultConv, PlayLayer, flipGravity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1850, DefaultConv, PlayLayer, flipObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1851, DefaultConv, PlayLayer, fullReset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1852, DefaultConv, PlayLayer, getLastCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1853, DefaultConv, PlayLayer, getMaxPortalY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1854, DefaultConv, PlayLayer, getMinPortalY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1855, DefaultConv, PlayLayer, getObjectsState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1856, DefaultConv, PlayLayer, getOtherPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1857, DefaultConv, PlayLayer, getParticleKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1858, DefaultConv, PlayLayer, getParticleKey2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1859, DefaultConv, PlayLayer, getRelativeMod)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1860, DefaultConv, PlayLayer, getTempMilliTime)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1861, DefaultConv, PlayLayer, gravityEffectFinished)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1862, DefaultConv, PlayLayer, hasItem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1863, DefaultConv, PlayLayer, hasUniqueCoin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1864, DefaultConv, PlayLayer, incrementJumps)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1865, DefaultConv, PlayLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1866, DefaultConv, PlayLayer, isFlipping)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1867, DefaultConv, PlayLayer, levelComplete)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1868, DefaultConv, PlayLayer, lightningFlash)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1869, DefaultConv, PlayLayer, lightningFlash)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1870, DefaultConv, PlayLayer, loadDefaultColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1871, DefaultConv, PlayLayer, loadFromCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1872, DefaultConv, PlayLayer, loadLastCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1873, DefaultConv, PlayLayer, loadSavedObjectsState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1874, DefaultConv, PlayLayer, markCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1875, DefaultConv, PlayLayer, moveCameraToPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1876, DefaultConv, PlayLayer, onEnterTransitionDidFinish)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1877, DefaultConv, PlayLayer, onExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1878, DefaultConv, PlayLayer, onQuit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1879, DefaultConv, PlayLayer, optimizeColorGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1880, DefaultConv, PlayLayer, optimizeOpacityGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1881, DefaultConv, PlayLayer, optimizeSaveRequiredGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1882, DefaultConv, PlayLayer, pauseGame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1883, DefaultConv, PlayLayer, pickupItem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1884, DefaultConv, PlayLayer, playAnimationCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1885, DefaultConv, PlayLayer, playEndAnimationToPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1886, DefaultConv, PlayLayer, playExitDualEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1887, DefaultConv, PlayLayer, playFlashEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1888, DefaultConv, PlayLayer, playGravityEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1889, DefaultConv, PlayLayer, playSpeedParticle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1890, DefaultConv, PlayLayer, playerWillSwitchMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1891, DefaultConv, PlayLayer, prepareSpawnObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1892, DefaultConv, PlayLayer, processItems)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1893, DefaultConv, PlayLayer, processLoadedMoveActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1894, DefaultConv, PlayLayer, recordAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1895, DefaultConv, PlayLayer, registerActiveObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1896, DefaultConv, PlayLayer, registerStateObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1897, DefaultConv, PlayLayer, removeAllObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1898, DefaultConv, PlayLayer, removeFromGroupOld)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1899, DefaultConv, PlayLayer, removeLastCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1900, DefaultConv, PlayLayer, removePlayer2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1901, DefaultConv, PlayLayer, resetLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1902, DefaultConv, PlayLayer, resume)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1903, DefaultConv, PlayLayer, resumeAndRestart)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1904, DefaultConv, PlayLayer, saveRecordAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1905, DefaultConv, PlayLayer, scene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1906, DefaultConv, PlayLayer, setupLevelStart)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1907, DefaultConv, PlayLayer, setupReplay)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1908, DefaultConv, PlayLayer, shakeCamera)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1909, DefaultConv, PlayLayer, shouldBlend)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1910, DefaultConv, PlayLayer, showCompleteEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1911, DefaultConv, PlayLayer, showCompleteText)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1912, DefaultConv, PlayLayer, showEndLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1913, DefaultConv, PlayLayer, showHint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1914, DefaultConv, PlayLayer, showNewBest)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1915, DefaultConv, PlayLayer, showRetryLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1916, DefaultConv, PlayLayer, showTwoPlayerGuide)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1917, DefaultConv, PlayLayer, sortGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1918, DefaultConv, PlayLayer, spawnCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1919, DefaultConv, PlayLayer, spawnFirework)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1920, DefaultConv, PlayLayer, spawnParticle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1921, DefaultConv, PlayLayer, spawnPlayer2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1922, DefaultConv, PlayLayer, startGame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1923, DefaultConv, PlayLayer, startMusic)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1924, DefaultConv, PlayLayer, startRecording)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1925, DefaultConv, PlayLayer, startRecordingDelayed)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1926, DefaultConv, PlayLayer, stopCameraShake)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1927, DefaultConv, PlayLayer, stopRecording)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1928, DefaultConv, PlayLayer, storeCheckpoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1929, DefaultConv, PlayLayer, switchToFlyMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1930, DefaultConv, PlayLayer, switchToRobotMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1931, DefaultConv, PlayLayer, switchToRollMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1932, DefaultConv, PlayLayer, switchToSpiderMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1933, DefaultConv, PlayLayer, timeForXPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1934, DefaultConv, PlayLayer, timeForXPos2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1935, DefaultConv, PlayLayer, toggleBGEffectVisibility)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1936, DefaultConv, PlayLayer, toggleDualMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1937, DefaultConv, PlayLayer, toggleFlipped)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1938, DefaultConv, PlayLayer, toggleGhostEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1939, DefaultConv, PlayLayer, toggleGlitter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1940, DefaultConv, PlayLayer, togglePracticeMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1941, DefaultConv, PlayLayer, toggleProgressbar)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1942, DefaultConv, PlayLayer, tryStartRecord)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1943, DefaultConv, PlayLayer, unclaimParticle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1944, DefaultConv, PlayLayer, unregisterActiveObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1945, DefaultConv, PlayLayer, unregisterStateObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1946, DefaultConv, PlayLayer, update)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1947, DefaultConv, PlayLayer, updateAttempts)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1948, DefaultConv, PlayLayer, updateCamera)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1949, DefaultConv, PlayLayer, updateColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1950, DefaultConv, PlayLayer, updateDualGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1951, DefaultConv, PlayLayer, updateEffectPositions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1952, DefaultConv, PlayLayer, updateLevelColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1953, DefaultConv, PlayLayer, updateMoveObjectsLastPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1954, DefaultConv, PlayLayer, updateProgressbar)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1955, DefaultConv, PlayLayer, updateReplay)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1956, DefaultConv, PlayLayer, updateTimeMod)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1957, DefaultConv, PlayLayer, updateTweenAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1958, DefaultConv, PlayLayer, updateVisibility)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1959, DefaultConv, PlayLayer, vfDChk)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1960, DefaultConv, PlayLayer, visit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1961, DefaultConv, PlayLayer, visitWithColorFlash)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1962, DefaultConv, PlayLayer, willSwitchToMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1963, DefaultConv, PlayLayer, xPosForTime)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1964, DefaultConv, PlayLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, PlatformToolbox> : ModifyBase<Modify<Derived, PlatformToolbox>> {
	using ModifyBase<Modify<Derived, PlatformToolbox>>::ModifyBase;
	using Base = PlatformToolbox;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1809, DefaultConv, PlatformToolbox, hideCursor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1810, DefaultConv, PlatformToolbox, showCursor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1811, DefaultConv, PlatformToolbox, isControllerConnected)
	}
};

template<class Derived>
struct Modify<Derived, OptionsLayer> : ModifyBase<Modify<Derived, OptionsLayer>> {
	using ModifyBase<Modify<Derived, OptionsLayer>>::ModifyBase;
	using Base = OptionsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1803, DefaultConv, OptionsLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, OpacityEffectAction> : ModifyBase<Modify<Derived, OpacityEffectAction>> {
	using ModifyBase<Modify<Derived, OpacityEffectAction>>::ModifyBase;
	using Base = OpacityEffectAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1795, DefaultConv, OpacityEffectAction, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1796, DefaultConv, OpacityEffectAction, createFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1797, DefaultConv, OpacityEffectAction, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1798, DefaultConv, OpacityEffectAction, step)
	}
};

template<class Derived>
struct Modify<Derived, ObjectToolbox> : ModifyBase<Modify<Derived, ObjectToolbox>> {
	using ModifyBase<Modify<Derived, ObjectToolbox>>::ModifyBase;
	using Base = ObjectToolbox;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1791, DefaultConv, ObjectToolbox, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1792, DefaultConv, ObjectToolbox, sharedState)
	}
};

template<class Derived>
struct Modify<Derived, OBB2D> : ModifyBase<Modify<Derived, OBB2D>> {
	using ModifyBase<Modify<Derived, OBB2D>>::ModifyBase;
	using Base = OBB2D;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1779, DefaultConv, OBB2D, calculateWithCenter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1780, DefaultConv, OBB2D, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1781, DefaultConv, OBB2D, getBoundingRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1782, DefaultConv, OBB2D, overlaps)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1783, DefaultConv, OBB2D, overlaps1Way)
	}
};

template<class Derived>
struct Modify<Derived, NumberInputLayer> : ModifyBase<Modify<Derived, NumberInputLayer>> {
	using ModifyBase<Modify<Derived, NumberInputLayer>>::ModifyBase;
	using Base = NumberInputLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, NumberInputDelegate> : ModifyBase<Modify<Derived, NumberInputDelegate>> {
	using ModifyBase<Modify<Derived, NumberInputDelegate>>::ModifyBase;
	using Base = NumberInputDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MusicDownloadManager> : ModifyBase<Modify<Derived, MusicDownloadManager>> {
	using ModifyBase<Modify<Derived, MusicDownloadManager>>::ModifyBase;
	using Base = MusicDownloadManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1773, DefaultConv, MusicDownloadManager, incrementPriorityForSong)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1774, DefaultConv, MusicDownloadManager, sharedState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1775, DefaultConv, MusicDownloadManager, pathForSong)
	}
};

template<class Derived>
struct Modify<Derived, MusicDownloadDelegate> : ModifyBase<Modify<Derived, MusicDownloadDelegate>> {
	using ModifyBase<Modify<Derived, MusicDownloadDelegate>>::ModifyBase;
	using Base = MusicDownloadDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MultilineBitmapFont> : ModifyBase<Modify<Derived, MultilineBitmapFont>> {
	using ModifyBase<Modify<Derived, MultilineBitmapFont>>::ModifyBase;
	using Base = MultilineBitmapFont;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MoreVideoOptionsLayer> : ModifyBase<Modify<Derived, MoreVideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreVideoOptionsLayer>>::ModifyBase;
	using Base = MoreVideoOptionsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1765, DefaultConv, MoreVideoOptionsLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1766, DefaultConv, MoreVideoOptionsLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1767, DefaultConv, MoreVideoOptionsLayer, onClose)
	}
};

template<class Derived>
struct Modify<Derived, MenuLayer> : ModifyBase<Modify<Derived, MenuLayer>> {
	using ModifyBase<Modify<Derived, MenuLayer>>::ModifyBase;
	using Base = MenuLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1737, DefaultConv, MenuLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1738, DefaultConv, MenuLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1739, DefaultConv, MenuLayer, keyBackClicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1740, DefaultConv, MenuLayer, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1741, DefaultConv, MenuLayer, googlePlaySignedIn)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1742, DefaultConv, MenuLayer, FLAlert_Clicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1743, DefaultConv, MenuLayer, onMoreGames)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1745, DefaultConv, MenuLayer, onQuit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1746, DefaultConv, MenuLayer, onMyProfile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1758, DefaultConv, MenuLayer, scene)
	}
};

template<class Derived>
struct Modify<Derived, TableViewCell> : ModifyBase<Modify<Derived, TableViewCell>> {
	using ModifyBase<Modify<Derived, TableViewCell>>::ModifyBase;
	using Base = TableViewCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MenuGameLayer> : ModifyBase<Modify<Derived, MenuGameLayer>> {
	using ModifyBase<Modify<Derived, MenuGameLayer>>::ModifyBase;
	using Base = MenuGameLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1735, DefaultConv, MenuGameLayer, resetPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1736, DefaultConv, MenuGameLayer, update)
	}
};

template<class Derived>
struct Modify<Derived, MapPackCell> : ModifyBase<Modify<Derived, MapPackCell>> {
	using ModifyBase<Modify<Derived, MapPackCell>>::ModifyBase;
	using Base = MapPackCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LoadingCircle> : ModifyBase<Modify<Derived, LoadingCircle>> {
	using ModifyBase<Modify<Derived, LoadingCircle>>::ModifyBase;
	using Base = LoadingCircle;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1723, DefaultConv, LoadingCircle, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1724, DefaultConv, LoadingCircle, show)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1725, DefaultConv, LoadingCircle, fadeAndRemove)
	}
};

template<class Derived>
struct Modify<Derived, ListButtonBar> : ModifyBase<Modify<Derived, ListButtonBar>> {
	using ModifyBase<Modify<Derived, ListButtonBar>>::ModifyBase;
	using Base = ListButtonBar;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelUploadDelegate> : ModifyBase<Modify<Derived, LevelUploadDelegate>> {
	using ModifyBase<Modify<Derived, LevelUploadDelegate>>::ModifyBase;
	using Base = LevelUploadDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsDelegate> : ModifyBase<Modify<Derived, LevelSettingsDelegate>> {
	using ModifyBase<Modify<Derived, LevelSettingsDelegate>>::ModifyBase;
	using Base = LevelSettingsDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelSearchLayer> : ModifyBase<Modify<Derived, LevelSearchLayer>> {
	using ModifyBase<Modify<Derived, LevelSearchLayer>>::ModifyBase;
	using Base = LevelSearchLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelLeaderboard> : ModifyBase<Modify<Derived, LevelLeaderboard>> {
	using ModifyBase<Modify<Derived, LevelLeaderboard>>::ModifyBase;
	using Base = LevelLeaderboard;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelCell> : ModifyBase<Modify<Derived, LevelCell>> {
	using ModifyBase<Modify<Derived, LevelCell>>::ModifyBase;
	using Base = LevelCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, MoreSearchLayer> : ModifyBase<Modify<Derived, MoreSearchLayer>> {
	using ModifyBase<Modify<Derived, MoreSearchLayer>>::ModifyBase;
	using Base = MoreSearchLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LeaderboardsLayer> : ModifyBase<Modify<Derived, LeaderboardsLayer>> {
	using ModifyBase<Modify<Derived, LeaderboardsLayer>>::ModifyBase;
	using Base = LeaderboardsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupInstantCountPopup> : ModifyBase<Modify<Derived, SetupInstantCountPopup>> {
	using ModifyBase<Modify<Derived, SetupInstantCountPopup>>::ModifyBase;
	using Base = SetupInstantCountPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2158, DefaultConv, SetupInstantCountPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2159, DefaultConv, SetupInstantCountPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2160, DefaultConv, SetupInstantCountPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2161, DefaultConv, SetupInstantCountPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, InheritanceNode> : ModifyBase<Modify<Derived, InheritanceNode>> {
	using ModifyBase<Modify<Derived, InheritanceNode>>::ModifyBase;
	using Base = InheritanceNode;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelUpdateDelegate> : ModifyBase<Modify<Derived, LevelUpdateDelegate>> {
	using ModifyBase<Modify<Derived, LevelUpdateDelegate>>::ModifyBase;
	using Base = LevelUpdateDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, InfoLayer> : ModifyBase<Modify<Derived, InfoLayer>> {
	using ModifyBase<Modify<Derived, InfoLayer>>::ModifyBase;
	using Base = InfoLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, InfoAlertButton> : ModifyBase<Modify<Derived, InfoAlertButton>> {
	using ModifyBase<Modify<Derived, InfoAlertButton>>::ModifyBase;
	using Base = InfoAlertButton;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GhostTrailEffect> : ModifyBase<Modify<Derived, GhostTrailEffect>> {
	using ModifyBase<Modify<Derived, GhostTrailEffect>>::ModifyBase;
	using Base = GhostTrailEffect;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelInfoLayer> : ModifyBase<Modify<Derived, LevelInfoLayer>> {
	using ModifyBase<Modify<Derived, LevelInfoLayer>>::ModifyBase;
	using Base = LevelInfoLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1697, DefaultConv, LevelInfoLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, GauntletSelectLayer> : ModifyBase<Modify<Derived, GauntletSelectLayer>> {
	using ModifyBase<Modify<Derived, GauntletSelectLayer>>::ModifyBase;
	using Base = GauntletSelectLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameRateDelegate> : ModifyBase<Modify<Derived, GameRateDelegate>> {
	using ModifyBase<Modify<Derived, GameRateDelegate>>::ModifyBase;
	using Base = GameRateDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameObject> : ModifyBase<Modify<Derived, GameObject>> {
	using ModifyBase<Modify<Derived, GameObject>>::ModifyBase;
	using Base = GameObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1424, DefaultConv, GameObject, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1425, DefaultConv, GameObject, update)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1426, DefaultConv, GameObject, setScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1427, DefaultConv, GameObject, setScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1428, DefaultConv, GameObject, setScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1429, DefaultConv, GameObject, setPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1430, DefaultConv, GameObject, setVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1431, DefaultConv, GameObject, setRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1432, DefaultConv, GameObject, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1433, DefaultConv, GameObject, initWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1434, DefaultConv, GameObject, setChildColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1435, DefaultConv, GameObject, setFlipX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1436, DefaultConv, GameObject, setFlipY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1437, DefaultConv, GameObject, customSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1438, DefaultConv, GameObject, setupCustomSprites)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1439, DefaultConv, GameObject, addMainSpriteToParent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1440, DefaultConv, GameObject, resetObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1441, DefaultConv, GameObject, triggerObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1442, DefaultConv, GameObject, activateObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1443, DefaultConv, GameObject, deactivateObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1444, DefaultConv, GameObject, getObjectRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1445, DefaultConv, GameObject, getObjectRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1446, DefaultConv, GameObject, getObjectRect2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1447, DefaultConv, GameObject, getObjectTextureRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1448, DefaultConv, GameObject, getRealPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1449, DefaultConv, GameObject, setStartPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1450, DefaultConv, GameObject, updateStartValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1451, DefaultConv, GameObject, customObjectSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1452, DefaultConv, GameObject, getSaveString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1453, DefaultConv, GameObject, isFlipX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1454, DefaultConv, GameObject, isFlipY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1455, DefaultConv, GameObject, setRScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1456, DefaultConv, GameObject, setRScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1457, DefaultConv, GameObject, setRScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1458, DefaultConv, GameObject, getRScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1459, DefaultConv, GameObject, getRScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1460, DefaultConv, GameObject, calculateSpawnXPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1461, DefaultConv, GameObject, triggerActivated)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1462, DefaultConv, GameObject, powerOnObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1463, DefaultConv, GameObject, powerOffObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1464, DefaultConv, GameObject, setObjectColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1465, DefaultConv, GameObject, setGlowColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1466, DefaultConv, GameObject, getOrientedBox)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1467, DefaultConv, GameObject, addToGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1468, DefaultConv, GameObject, removeFromGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1469, DefaultConv, GameObject, spawnXPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1470, DefaultConv, GameObject, getObjectRectDirty)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1471, DefaultConv, GameObject, setObjectRectDirty)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1472, DefaultConv, GameObject, getOrientedRectDirty)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1473, DefaultConv, GameObject, setOrientedRectDirty)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1474, DefaultConv, GameObject, getType)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1475, DefaultConv, GameObject, setType)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1476, DefaultConv, GameObject, getStartPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1477, DefaultConv, GameObject, activatedByPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1478, DefaultConv, GameObject, addColorSprite)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1479, DefaultConv, GameObject, addColorSpriteToParent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1480, DefaultConv, GameObject, addToTempOffset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1481, DefaultConv, GameObject, calculateOrientedBox)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1482, DefaultConv, GameObject, canChangeCustomColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1483, DefaultConv, GameObject, colorForMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1484, DefaultConv, GameObject, commonSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1485, DefaultConv, GameObject, copyGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1486, DefaultConv, GameObject, createWithFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1487, DefaultConv, GameObject, createWithKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1488, DefaultConv, GameObject, destroyObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1489, DefaultConv, GameObject, determineSlopeDirection)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1490, DefaultConv, GameObject, getActiveColorForMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1491, DefaultConv, GameObject, getBallFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1492, DefaultConv, GameObject, getBoxOffset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1493, DefaultConv, GameObject, getColorIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1494, DefaultConv, GameObject, getDidUpdateLastPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1495, DefaultConv, GameObject, getLastPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1496, DefaultConv, GameObject, getMainColorMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1497, DefaultConv, GameObject, getObjectZOrder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1498, DefaultConv, GameObject, getObjectRadius)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1499, DefaultConv, GameObject, getSecondaryColorMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1500, DefaultConv, GameObject, getSectionIdx)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1501, DefaultConv, GameObject, groupWasDisabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1502, DefaultConv, GameObject, groupWasEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1503, DefaultConv, GameObject, hasBeenActivated)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1504, DefaultConv, GameObject, hasBeenActivatedByPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1505, DefaultConv, GameObject, hasSecondaryColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1506, DefaultConv, GameObject, ignoreEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1507, DefaultConv, GameObject, ignoreFade)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1508, DefaultConv, GameObject, isBasicTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1509, DefaultConv, GameObject, isColorTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1510, DefaultConv, GameObject, isSpawnableTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1511, DefaultConv, GameObject, isSpecialObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1512, DefaultConv, GameObject, objectFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1513, DefaultConv, GameObject, playShineEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1514, DefaultConv, GameObject, quickUpdatePosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1515, DefaultConv, GameObject, removeGlow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1516, DefaultConv, GameObject, resetGroupDisabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1517, DefaultConv, GameObject, saveActiveColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1518, DefaultConv, GameObject, selectObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1519, DefaultConv, GameObject, setDefaultMainColorMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1520, DefaultConv, GameObject, setDidUpdateLastPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1521, DefaultConv, GameObject, setGlowOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1522, DefaultConv, GameObject, setLastPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1523, DefaultConv, GameObject, setMainColorMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1524, DefaultConv, GameObject, setSectionIdx)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1525, DefaultConv, GameObject, setupCoinArt)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1526, DefaultConv, GameObject, slopeFloorTop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1527, DefaultConv, GameObject, slopeWallLeft)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1528, DefaultConv, GameObject, updateCustomScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1529, DefaultConv, GameObject, updateMainColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1530, DefaultConv, GameObject, updateOrientedBox)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1531, DefaultConv, GameObject, updateSecondaryColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1532, DefaultConv, GameObject, updateStartPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1533, DefaultConv, GameObject, updateState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1534, DefaultConv, GameObject, updateSyncedAnimation)
	}
};

template<class Derived>
struct Modify<Derived, GJRobotSprite> : ModifyBase<Modify<Derived, GJRobotSprite>> {
	using ModifyBase<Modify<Derived, GJRobotSprite>>::ModifyBase;
	using Base = GJRobotSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1279, DefaultConv, GJRobotSprite, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1280, DefaultConv, GJRobotSprite, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1281, DefaultConv, GJRobotSprite, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1282, DefaultConv, GJRobotSprite, hideSecondary)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1283, DefaultConv, GJRobotSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1284, DefaultConv, GJRobotSprite, updateColor02)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1285, DefaultConv, GJRobotSprite, updateFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1286, DefaultConv, GJRobotSprite, hideGlow)
	}
};

template<class Derived>
struct Modify<Derived, GooglePlayDelegate> : ModifyBase<Modify<Derived, GooglePlayDelegate>> {
	using ModifyBase<Modify<Derived, GooglePlayDelegate>>::ModifyBase;
	using Base = GooglePlayDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetIDPopupDelegate> : ModifyBase<Modify<Derived, SetIDPopupDelegate>> {
	using ModifyBase<Modify<Derived, SetIDPopupDelegate>>::ModifyBase;
	using Base = SetIDPopupDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GManager> : ModifyBase<Modify<Derived, GManager>> {
	using ModifyBase<Modify<Derived, GManager>>::ModifyBase;
	using Base = GManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1330, DefaultConv, GManager, save)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1331, DefaultConv, GManager, saveData)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1332, DefaultConv, GManager, saveGMTo)
	}
};

template<class Derived>
struct Modify<Derived, GJUserScore> : ModifyBase<Modify<Derived, GJUserScore>> {
	using ModifyBase<Modify<Derived, GJUserScore>>::ModifyBase;
	using Base = GJUserScore;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJSpriteColor> : ModifyBase<Modify<Derived, GJSpriteColor>> {
	using ModifyBase<Modify<Derived, GJSpriteColor>>::ModifyBase;
	using Base = GJSpriteColor;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJSpecialColorSelectDelegate> : ModifyBase<Modify<Derived, GJSpecialColorSelectDelegate>> {
	using ModifyBase<Modify<Derived, GJSpecialColorSelectDelegate>>::ModifyBase;
	using Base = GJSpecialColorSelectDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEGLView> : ModifyBase<Modify<Derived, cocos2d::CCEGLView>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEGLView>>::ModifyBase;
	using Base = cocos2d::CCEGLView;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(102, DefaultConv, cocos2d::CCEGLView, swapBuffers)
	}
};

template<class Derived>
struct Modify<Derived, GJScoreCell> : ModifyBase<Modify<Derived, GJScoreCell>> {
	using ModifyBase<Modify<Derived, GJScoreCell>>::ModifyBase;
	using Base = GJScoreCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJScaleControlDelegate> : ModifyBase<Modify<Derived, GJScaleControlDelegate>> {
	using ModifyBase<Modify<Derived, GJScaleControlDelegate>>::ModifyBase;
	using Base = GJScaleControlDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CCMenuItemToggler> : ModifyBase<Modify<Derived, CCMenuItemToggler>> {
	using ModifyBase<Modify<Derived, CCMenuItemToggler>>::ModifyBase;
	using Base = CCMenuItemToggler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(760, DefaultConv, CCMenuItemToggler, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(761, DefaultConv, CCMenuItemToggler, setSizeMult)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(762, DefaultConv, CCMenuItemToggler, toggle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(763, DefaultConv, CCMenuItemToggler, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(764, DefaultConv, CCMenuItemToggler, activate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(765, DefaultConv, CCMenuItemToggler, selected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(766, DefaultConv, CCMenuItemToggler, unselected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(767, DefaultConv, CCMenuItemToggler, setEnabled)
	}
};

template<class Derived>
struct Modify<Derived, GJRewardObject> : ModifyBase<Modify<Derived, GJRewardObject>> {
	using ModifyBase<Modify<Derived, GJRewardObject>>::ModifyBase;
	using Base = GJRewardObject;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, OnlineListDelegate> : ModifyBase<Modify<Derived, OnlineListDelegate>> {
	using ModifyBase<Modify<Derived, OnlineListDelegate>>::ModifyBase;
	using Base = OnlineListDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJMessageCell> : ModifyBase<Modify<Derived, GJMessageCell>> {
	using ModifyBase<Modify<Derived, GJMessageCell>>::ModifyBase;
	using Base = GJMessageCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJMapPack> : ModifyBase<Modify<Derived, GJMapPack>> {
	using ModifyBase<Modify<Derived, GJMapPack>>::ModifyBase;
	using Base = GJMapPack;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMouseHandler> : ModifyBase<Modify<Derived, cocos2d::CCMouseHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMouseHandler>>::ModifyBase;
	using Base = cocos2d::CCMouseHandler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(276, DefaultConv, cocos2d::CCMouseHandler, handlerWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(277, DefaultConv, cocos2d::CCMouseHandler, initWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(278, DefaultConv, cocos2d::CCMouseHandler, destructor)
	}
};

template<class Derived>
struct Modify<Derived, GJLevelScoreCell> : ModifyBase<Modify<Derived, GJLevelScoreCell>> {
	using ModifyBase<Modify<Derived, GJLevelScoreCell>>::ModifyBase;
	using Base = GJLevelScoreCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJGarageLayer> : ModifyBase<Modify<Derived, GJGarageLayer>> {
	using ModifyBase<Modify<Derived, GJGarageLayer>>::ModifyBase;
	using Base = GJGarageLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1256, DefaultConv, GJGarageLayer, onPlayerColor1)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1257, DefaultConv, GJGarageLayer, onPlayerColor2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1259, DefaultConv, GJGarageLayer, init)
	}
};

template<class Derived>
struct Modify<Derived, ListButtonBarDelegate> : ModifyBase<Modify<Derived, ListButtonBarDelegate>> {
	using ModifyBase<Modify<Derived, ListButtonBarDelegate>>::ModifyBase;
	using Base = ListButtonBarDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJGameLevel> : ModifyBase<Modify<Derived, GJGameLevel>> {
	using ModifyBase<Modify<Derived, GJGameLevel>>::ModifyBase;
	using Base = GJGameLevel;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1242, DefaultConv, GJGameLevel, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1243, DefaultConv, GJGameLevel, encodeWithCoder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1244, DefaultConv, GJGameLevel, canEncode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1245, DefaultConv, GJGameLevel, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1246, DefaultConv, GJGameLevel, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1247, DefaultConv, GJGameLevel, getAudioFileName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1248, DefaultConv, GJGameLevel, getCoinKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1249, DefaultConv, GJGameLevel, getLengthKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1250, DefaultConv, GJGameLevel, getNormalPercent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1251, DefaultConv, GJGameLevel, levelWasAltered)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1252, DefaultConv, GJGameLevel, savePercentage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1253, DefaultConv, GJGameLevel, dataLoaded)
	}
};

template<class Derived>
struct Modify<Derived, TableView> : ModifyBase<Modify<Derived, TableView>> {
	using ModifyBase<Modify<Derived, TableView>>::ModifyBase;
	using Base = TableView;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2223, DefaultConv, TableView, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2224, DefaultConv, TableView, reloadData)
	}
};

template<class Derived>
struct Modify<Derived, GJDropDownLayerDelegate> : ModifyBase<Modify<Derived, GJDropDownLayerDelegate>> {
	using ModifyBase<Modify<Derived, GJDropDownLayerDelegate>>::ModifyBase;
	using Base = GJDropDownLayerDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TopArtistsLayer> : ModifyBase<Modify<Derived, TopArtistsLayer>> {
	using ModifyBase<Modify<Derived, TopArtistsLayer>>::ModifyBase;
	using Base = TopArtistsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2251, DefaultConv, TopArtistsLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2252, DefaultConv, TopArtistsLayer, setupLeaderboard)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2253, DefaultConv, TopArtistsLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2254, DefaultConv, TopArtistsLayer, loadPage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2255, DefaultConv, TopArtistsLayer, setupPageInfo)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTransitionFade> : ModifyBase<Modify<Derived, cocos2d::CCTransitionFade>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTransitionFade>>::ModifyBase;
	using Base = cocos2d::CCTransitionFade;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(569, DefaultConv, cocos2d::CCTransitionFade, create)
	}
};

template<class Derived>
struct Modify<Derived, GJDropDownLayer> : ModifyBase<Modify<Derived, GJDropDownLayer>> {
	using ModifyBase<Modify<Derived, GJDropDownLayer>>::ModifyBase;
	using Base = GJDropDownLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1137, DefaultConv, GJDropDownLayer, enterLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1138, DefaultConv, GJDropDownLayer, exitLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1139, DefaultConv, GJDropDownLayer, showLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1140, DefaultConv, GJDropDownLayer, hideLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1141, DefaultConv, GJDropDownLayer, layerVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1142, DefaultConv, GJDropDownLayer, layerHidden)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1144, DefaultConv, GJDropDownLayer, disableUI)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1145, DefaultConv, GJDropDownLayer, enableUI)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1151, DefaultConv, GJDropDownLayer, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1152, DefaultConv, GJDropDownLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1153, DefaultConv, GJDropDownLayer, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1154, DefaultConv, GJDropDownLayer, keyBackClicked)
	}
};

template<class Derived>
struct Modify<Derived, GJDailyLevelDelegate> : ModifyBase<Modify<Derived, GJDailyLevelDelegate>> {
	using ModifyBase<Modify<Derived, GJDailyLevelDelegate>>::ModifyBase;
	using Base = GJDailyLevelDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AnimatedSpriteDelegate> : ModifyBase<Modify<Derived, AnimatedSpriteDelegate>> {
	using ModifyBase<Modify<Derived, AnimatedSpriteDelegate>>::ModifyBase;
	using Base = AnimatedSpriteDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJColorSetupLayer> : ModifyBase<Modify<Derived, GJColorSetupLayer>> {
	using ModifyBase<Modify<Derived, GJColorSetupLayer>>::ModifyBase;
	using Base = GJColorSetupLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, PlatformDownloadDelegate> : ModifyBase<Modify<Derived, PlatformDownloadDelegate>> {
	using ModifyBase<Modify<Derived, PlatformDownloadDelegate>>::ModifyBase;
	using Base = PlatformDownloadDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJChallengeDelegate> : ModifyBase<Modify<Derived, GJChallengeDelegate>> {
	using ModifyBase<Modify<Derived, GJChallengeDelegate>>::ModifyBase;
	using Base = GJChallengeDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LeaderboardManagerDelegate> : ModifyBase<Modify<Derived, LeaderboardManagerDelegate>> {
	using ModifyBase<Modify<Derived, LeaderboardManagerDelegate>>::ModifyBase;
	using Base = LeaderboardManagerDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, EndPortalObject> : ModifyBase<Modify<Derived, EndPortalObject>> {
	using ModifyBase<Modify<Derived, EndPortalObject>>::ModifyBase;
	using Base = EndPortalObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1026, DefaultConv, EndPortalObject, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1027, DefaultConv, EndPortalObject, updateColors)
	}
};

template<class Derived>
struct Modify<Derived, GJBaseGameLayer> : ModifyBase<Modify<Derived, GJBaseGameLayer>> {
	using ModifyBase<Modify<Derived, GJBaseGameLayer>>::ModifyBase;
	using Base = GJBaseGameLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1062, DefaultConv, GJBaseGameLayer, objectsCollided)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1063, DefaultConv, GJBaseGameLayer, createMoveCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1064, DefaultConv, GJBaseGameLayer, updateColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1065, DefaultConv, GJBaseGameLayer, flipGravity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1066, DefaultConv, GJBaseGameLayer, calculateColorValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1067, DefaultConv, GJBaseGameLayer, toggleGroupTriggered)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1068, DefaultConv, GJBaseGameLayer, spawnGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1069, DefaultConv, GJBaseGameLayer, addToSection)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1070, DefaultConv, GJBaseGameLayer, addToGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1071, DefaultConv, GJBaseGameLayer, removeFromGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1072, DefaultConv, GJBaseGameLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1073, DefaultConv, GJBaseGameLayer, addObjectCounter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1074, DefaultConv, GJBaseGameLayer, addToGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1075, DefaultConv, GJBaseGameLayer, atlasValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1076, DefaultConv, GJBaseGameLayer, bumpPlayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1077, DefaultConv, GJBaseGameLayer, calculateOpacityValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1078, DefaultConv, GJBaseGameLayer, checkSpawnObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1079, DefaultConv, GJBaseGameLayer, collectItem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1080, DefaultConv, GJBaseGameLayer, collectedObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1081, DefaultConv, GJBaseGameLayer, createTextLayers)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1082, DefaultConv, GJBaseGameLayer, damagingObjectsInRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1083, DefaultConv, GJBaseGameLayer, enableHighCapacityMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1084, DefaultConv, GJBaseGameLayer, getCapacityString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1085, DefaultConv, GJBaseGameLayer, getGroundHeightForMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1086, DefaultConv, GJBaseGameLayer, getGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1087, DefaultConv, GJBaseGameLayer, getMoveDeltaForObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1088, DefaultConv, GJBaseGameLayer, getOptimizedGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1089, DefaultConv, GJBaseGameLayer, getStaticGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1090, DefaultConv, GJBaseGameLayer, isGroupDisabledForObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1091, DefaultConv, GJBaseGameLayer, isGroupDisabledForObjectFull)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1092, DefaultConv, GJBaseGameLayer, loadUpToPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1093, DefaultConv, GJBaseGameLayer, objectIntersectsCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1094, DefaultConv, GJBaseGameLayer, objectTriggered)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1095, DefaultConv, GJBaseGameLayer, optimizeMoveGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1096, DefaultConv, GJBaseGameLayer, parentForZLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1097, DefaultConv, GJBaseGameLayer, playerTouchedRing)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1098, DefaultConv, GJBaseGameLayer, processColorObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1099, DefaultConv, GJBaseGameLayer, processFollowActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1100, DefaultConv, GJBaseGameLayer, processMoveActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1101, DefaultConv, GJBaseGameLayer, processMoveActionsStep)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1102, DefaultConv, GJBaseGameLayer, processOpacityObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1103, DefaultConv, GJBaseGameLayer, processPlayerFollowActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1104, DefaultConv, GJBaseGameLayer, processRotationActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1105, DefaultConv, GJBaseGameLayer, pushButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1106, DefaultConv, GJBaseGameLayer, rectIntersectsCircle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1107, DefaultConv, GJBaseGameLayer, refreshCounterLabels)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1108, DefaultConv, GJBaseGameLayer, releaseButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1109, DefaultConv, GJBaseGameLayer, removeFromGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1110, DefaultConv, GJBaseGameLayer, removeObjectFromSection)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1111, DefaultConv, GJBaseGameLayer, reorderObjectSection)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1112, DefaultConv, GJBaseGameLayer, resetGroupCounters)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1113, DefaultConv, GJBaseGameLayer, resetMoveOptimizedValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1114, DefaultConv, GJBaseGameLayer, sectionForPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1115, DefaultConv, GJBaseGameLayer, setupLayers)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1116, DefaultConv, GJBaseGameLayer, shouldExitHackedLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1117, DefaultConv, GJBaseGameLayer, spawnGroupTriggered)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1118, DefaultConv, GJBaseGameLayer, staticObjectsInRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1119, DefaultConv, GJBaseGameLayer, testInstantCountTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1120, DefaultConv, GJBaseGameLayer, toggleGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1121, DefaultConv, GJBaseGameLayer, togglePlayerVisibility)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1122, DefaultConv, GJBaseGameLayer, triggerMoveCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1123, DefaultConv, GJBaseGameLayer, updateCollisionBlocks)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1124, DefaultConv, GJBaseGameLayer, updateCounters)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1125, DefaultConv, GJBaseGameLayer, updateDisabledObjectsLastPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1126, DefaultConv, GJBaseGameLayer, updateLayerCapacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1127, DefaultConv, GJBaseGameLayer, updateLegacyLayerCapacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1128, DefaultConv, GJBaseGameLayer, updateOBB2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1129, DefaultConv, GJBaseGameLayer, updateQueuedLabels)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1130, DefaultConv, GJBaseGameLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, LevelPage> : ModifyBase<Modify<Derived, LevelPage>> {
	using ModifyBase<Modify<Derived, LevelPage>>::ModifyBase;
	using Base = LevelPage;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJAccountSyncDelegate> : ModifyBase<Modify<Derived, GJAccountSyncDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountSyncDelegate>>::ModifyBase;
	using Base = GJAccountSyncDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, FriendRequestDelegate> : ModifyBase<Modify<Derived, FriendRequestDelegate>> {
	using ModifyBase<Modify<Derived, FriendRequestDelegate>>::ModifyBase;
	using Base = FriendRequestDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SongInfoLayer> : ModifyBase<Modify<Derived, SongInfoLayer>> {
	using ModifyBase<Modify<Derived, SongInfoLayer>>::ModifyBase;
	using Base = SongInfoLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ObjectManager> : ModifyBase<Modify<Derived, ObjectManager>> {
	using ModifyBase<Modify<Derived, ObjectManager>>::ModifyBase;
	using Base = ObjectManager;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, DrawGridLayer> : ModifyBase<Modify<Derived, DrawGridLayer>> {
	using ModifyBase<Modify<Derived, DrawGridLayer>>::ModifyBase;
	using Base = DrawGridLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, FMODAudioEngine> : ModifyBase<Modify<Derived, FMODAudioEngine>> {
	using ModifyBase<Modify<Derived, FMODAudioEngine>>::ModifyBase;
	using Base = FMODAudioEngine;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1045, DefaultConv, FMODAudioEngine, sharedEngine)
	}
};

template<class Derived>
struct Modify<Derived, PulseEffectAction> : ModifyBase<Modify<Derived, PulseEffectAction>> {
	using ModifyBase<Modify<Derived, PulseEffectAction>>::ModifyBase;
	using Base = PulseEffectAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2126, DefaultConv, PulseEffectAction, createFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2127, DefaultConv, PulseEffectAction, getSaveString)
	}
};

template<class Derived>
struct Modify<Derived, FLAlertLayerProtocol> : ModifyBase<Modify<Derived, FLAlertLayerProtocol>> {
	using ModifyBase<Modify<Derived, FLAlertLayerProtocol>>::ModifyBase;
	using Base = FLAlertLayerProtocol;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, EditorPauseLayer> : ModifyBase<Modify<Derived, EditorPauseLayer>> {
	using ModifyBase<Modify<Derived, EditorPauseLayer>>::ModifyBase;
	using Base = EditorPauseLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(917, DefaultConv, EditorPauseLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(918, DefaultConv, EditorPauseLayer, keyBackClicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(919, DefaultConv, EditorPauseLayer, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(920, DefaultConv, EditorPauseLayer, customSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(921, DefaultConv, EditorPauseLayer, FLAlert_Clicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(922, DefaultConv, EditorPauseLayer, saveLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(923, DefaultConv, EditorPauseLayer, init)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseOut>>::ModifyBase;
	using Base = cocos2d::CCEaseOut;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(101, DefaultConv, cocos2d::CCEaseOut, create)
	}
};

template<class Derived>
struct Modify<Derived, EditLevelLayer> : ModifyBase<Modify<Derived, EditLevelLayer>> {
	using ModifyBase<Modify<Derived, EditLevelLayer>>::ModifyBase;
	using Base = EditLevelLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(913, DefaultConv, EditLevelLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, EditButtonBar> : ModifyBase<Modify<Derived, EditButtonBar>> {
	using ModifyBase<Modify<Derived, EditButtonBar>>::ModifyBase;
	using Base = EditButtonBar;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(911, DefaultConv, EditButtonBar, loadFromItems)
	}
};

template<class Derived>
struct Modify<Derived, ToggleTriggerAction> : ModifyBase<Modify<Derived, ToggleTriggerAction>> {
	using ModifyBase<Modify<Derived, ToggleTriggerAction>>::ModifyBase;
	using Base = ToggleTriggerAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2250, DefaultConv, ToggleTriggerAction, createFromString)
	}
};

template<class Derived>
struct Modify<Derived, DownloadMessageDelegate> : ModifyBase<Modify<Derived, DownloadMessageDelegate>> {
	using ModifyBase<Modify<Derived, DownloadMessageDelegate>>::ModifyBase;
	using Base = DownloadMessageDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LoadingLayer> : ModifyBase<Modify<Derived, LoadingLayer>> {
	using ModifyBase<Modify<Derived, LoadingLayer>>::ModifyBase;
	using Base = LoadingLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1727, DefaultConv, LoadingLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1728, DefaultConv, LoadingLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1730, DefaultConv, LoadingLayer, loadAssets)
	}
};

template<class Derived>
struct Modify<Derived, DialogObject> : ModifyBase<Modify<Derived, DialogObject>> {
	using ModifyBase<Modify<Derived, DialogObject>>::ModifyBase;
	using Base = DialogObject;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, DialogDelegate> : ModifyBase<Modify<Derived, DialogDelegate>> {
	using ModifyBase<Modify<Derived, DialogDelegate>>::ModifyBase;
	using Base = DialogDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetIDLayer> : ModifyBase<Modify<Derived, SetIDLayer>> {
	using ModifyBase<Modify<Derived, SetIDLayer>>::ModifyBase;
	using Base = SetIDLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2139, DefaultConv, SetIDLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, CustomizeObjectLayer> : ModifyBase<Modify<Derived, CustomizeObjectLayer>> {
	using ModifyBase<Modify<Derived, CustomizeObjectLayer>>::ModifyBase;
	using Base = CustomizeObjectLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameLevelManager> : ModifyBase<Modify<Derived, GameLevelManager>> {
	using ModifyBase<Modify<Derived, GameLevelManager>>::ModifyBase;
	using Base = GameLevelManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1335, DefaultConv, GameLevelManager, createNewLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1336, DefaultConv, GameLevelManager, sharedState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1340, DefaultConv, GameLevelManager, getPageInfo)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1342, DefaultConv, GameLevelManager, getStoredOnlineLevels)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1343, DefaultConv, GameLevelManager, getTopArtists)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1344, DefaultConv, GameLevelManager, getTopArtistsKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1345, DefaultConv, GameLevelManager, makeTimeStamp)
	}
};

template<class Derived>
struct Modify<Derived, CustomSongLayer> : ModifyBase<Modify<Derived, CustomSongLayer>> {
	using ModifyBase<Modify<Derived, CustomSongLayer>>::ModifyBase;
	using Base = CustomSongLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(876, DefaultConv, CustomSongLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(877, DefaultConv, CustomSongLayer, onArtists)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(878, DefaultConv, CustomSongLayer, onSongBrowser)
	}
};

template<class Derived>
struct Modify<Derived, CustomSongCell> : ModifyBase<Modify<Derived, CustomSongCell>> {
	using ModifyBase<Modify<Derived, CustomSongCell>>::ModifyBase;
	using Base = CustomSongCell;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(875, DefaultConv, CustomSongCell, loadFromObject)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEGLViewProtocol> : ModifyBase<Modify<Derived, cocos2d::CCEGLViewProtocol>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEGLViewProtocol>>::ModifyBase;
	using Base = cocos2d::CCEGLViewProtocol;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(119, DefaultConv, cocos2d::CCEGLViewProtocol, getViewPortRect)
	}
};

template<class Derived>
struct Modify<Derived, CreatorLayer> : ModifyBase<Modify<Derived, CreatorLayer>> {
	using ModifyBase<Modify<Derived, CreatorLayer>>::ModifyBase;
	using Base = CreatorLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(862, DefaultConv, CreatorLayer, onMyLevels)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(863, DefaultConv, CreatorLayer, onSavedLevels)
	}
};

template<class Derived>
struct Modify<Derived, CurrencyRewardDelegate> : ModifyBase<Modify<Derived, CurrencyRewardDelegate>> {
	using ModifyBase<Modify<Derived, CurrencyRewardDelegate>>::ModifyBase;
	using Base = CurrencyRewardDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CreateGuidelinesLayer> : ModifyBase<Modify<Derived, CreateGuidelinesLayer>> {
	using ModifyBase<Modify<Derived, CreateGuidelinesLayer>>::ModifyBase;
	using Base = CreateGuidelinesLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameObjectCopy> : ModifyBase<Modify<Derived, GameObjectCopy>> {
	using ModifyBase<Modify<Derived, GameObjectCopy>>::ModifyBase;
	using Base = GameObjectCopy;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1538, DefaultConv, GameObjectCopy, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1539, DefaultConv, GameObjectCopy, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1540, DefaultConv, GameObjectCopy, resetObject)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCString> : ModifyBase<Modify<Derived, cocos2d::CCString>> {
	using ModifyBase<Modify<Derived, cocos2d::CCString>>::ModifyBase;
	using Base = cocos2d::CCString;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(523, DefaultConv, cocos2d::CCString, isEqual)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(524, DefaultConv, cocos2d::CCString, acceptVisitor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(525, DefaultConv, cocos2d::CCString, copyWithZone)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(526, DefaultConv, cocos2d::CCString, boolValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(527, DefaultConv, cocos2d::CCString, doubleValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(528, DefaultConv, cocos2d::CCString, floatValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(529, DefaultConv, cocos2d::CCString, getCString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(530, DefaultConv, cocos2d::CCString, intValue)
	}
};

template<class Derived>
struct Modify<Derived, CommentUploadDelegate> : ModifyBase<Modify<Derived, CommentUploadDelegate>> {
	using ModifyBase<Modify<Derived, CommentUploadDelegate>>::ModifyBase;
	using Base = CommentUploadDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CommentCell> : ModifyBase<Modify<Derived, CommentCell>> {
	using ModifyBase<Modify<Derived, CommentCell>>::ModifyBase;
	using Base = CommentCell;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(852, DefaultConv, CommentCell, loadFromComment)
	}
};

template<class Derived>
struct Modify<Derived, MoreOptionsLayer> : ModifyBase<Modify<Derived, MoreOptionsLayer>> {
	using ModifyBase<Modify<Derived, MoreOptionsLayer>>::ModifyBase;
	using Base = MoreOptionsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJRotationControl> : ModifyBase<Modify<Derived, GJRotationControl>> {
	using ModifyBase<Modify<Derived, GJRotationControl>>::ModifyBase;
	using Base = GJRotationControl;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CCSpritePlus> : ModifyBase<Modify<Derived, CCSpritePlus>> {
	using ModifyBase<Modify<Derived, CCSpritePlus>>::ModifyBase;
	using Base = CCSpritePlus;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(795, DefaultConv, CCSpritePlus, initWithSpriteFrameName)
	}
};

template<class Derived>
struct Modify<Derived, ColorSetupDelegate> : ModifyBase<Modify<Derived, ColorSetupDelegate>> {
	using ModifyBase<Modify<Derived, ColorSetupDelegate>>::ModifyBase;
	using Base = ColorSetupDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ColorChannelSprite> : ModifyBase<Modify<Derived, ColorChannelSprite>> {
	using ModifyBase<Modify<Derived, ColorChannelSprite>>::ModifyBase;
	using Base = ColorChannelSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(842, DefaultConv, ColorChannelSprite, updateBlending)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(843, DefaultConv, ColorChannelSprite, updateCopyLabel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(844, DefaultConv, ColorChannelSprite, updateOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(845, DefaultConv, ColorChannelSprite, updateValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(846, DefaultConv, ColorChannelSprite, create)
	}
};

template<class Derived>
struct Modify<Derived, ExtendedLayer> : ModifyBase<Modify<Derived, ExtendedLayer>> {
	using ModifyBase<Modify<Derived, ExtendedLayer>>::ModifyBase;
	using Base = ExtendedLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ColorAction> : ModifyBase<Modify<Derived, ColorAction>> {
	using ModifyBase<Modify<Derived, ColorAction>>::ModifyBase;
	using Base = ColorAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(839, DefaultConv, ColorAction, getSaveString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(840, DefaultConv, ColorAction, setupFromDict)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(841, DefaultConv, ColorAction, setupFromString)
	}
};

template<class Derived>
struct Modify<Derived, CollisionTriggerAction> : ModifyBase<Modify<Derived, CollisionTriggerAction>> {
	using ModifyBase<Modify<Derived, CollisionTriggerAction>>::ModifyBase;
	using Base = CollisionTriggerAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(838, DefaultConv, CollisionTriggerAction, createFromString)
	}
};

template<class Derived>
struct Modify<Derived, EditorUI> : ModifyBase<Modify<Derived, EditorUI>> {
	using ModifyBase<Modify<Derived, EditorUI>>::ModifyBase;
	using Base = EditorUI;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(934, DefaultConv, EditorUI, constrainGameLayerPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(935, DefaultConv, EditorUI, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(936, DefaultConv, EditorUI, deselectAll)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(937, DefaultConv, EditorUI, onDeselectAll)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(938, DefaultConv, EditorUI, disableButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(939, DefaultConv, EditorUI, editButtonUsable)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(940, DefaultConv, EditorUI, editObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(941, DefaultConv, EditorUI, enableButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(942, DefaultConv, EditorUI, getCreateBtn)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(943, DefaultConv, EditorUI, getGroupCenter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(944, DefaultConv, EditorUI, getSelectedObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(945, DefaultConv, EditorUI, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(946, DefaultConv, EditorUI, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(947, DefaultConv, EditorUI, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(948, DefaultConv, EditorUI, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(949, DefaultConv, EditorUI, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(950, DefaultConv, EditorUI, moveObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(951, DefaultConv, EditorUI, onDuplicate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(952, DefaultConv, EditorUI, pasteObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(953, DefaultConv, EditorUI, playerTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(954, DefaultConv, EditorUI, playtestStopped)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(955, DefaultConv, EditorUI, redoLastAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(956, DefaultConv, EditorUI, replaceGroupID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(957, DefaultConv, EditorUI, scaleChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(958, DefaultConv, EditorUI, scaleObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(959, DefaultConv, EditorUI, selectObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(960, DefaultConv, EditorUI, setupCreateMenu)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(961, DefaultConv, EditorUI, undoLastAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(962, DefaultConv, EditorUI, updateButtons)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(963, DefaultConv, EditorUI, updateObjectInfoLabel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(964, DefaultConv, EditorUI, updateSlider)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(965, DefaultConv, EditorUI, updateZoom)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(966, DefaultConv, EditorUI, selectObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(975, DefaultConv, EditorUI, updateCreateMenu)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(976, DefaultConv, EditorUI, toggleMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(977, DefaultConv, EditorUI, zoomIn)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(978, DefaultConv, EditorUI, zoomOut)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(980, DefaultConv, EditorUI, updateGridNodeSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(982, DefaultConv, EditorUI, constrainGameLayerPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(983, DefaultConv, EditorUI, moveGameLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(984, DefaultConv, EditorUI, showUI)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(987, DefaultConv, EditorUI, moveObjectCall)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(988, DefaultConv, EditorUI, transformObjectCall)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(989, DefaultConv, EditorUI, onDeleteSelected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(990, DefaultConv, EditorUI, onCopy)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(991, DefaultConv, EditorUI, onPaste)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(992, DefaultConv, EditorUI, toggleEnableRotate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(993, DefaultConv, EditorUI, toggleFreeMove)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(994, DefaultConv, EditorUI, toggleSwipe)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(995, DefaultConv, EditorUI, toggleSnap)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(996, DefaultConv, EditorUI, onPlayback)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(997, DefaultConv, EditorUI, onPlaytest)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(998, DefaultConv, EditorUI, onStopPlaytest)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(999, DefaultConv, EditorUI, onGroupUp)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1000, DefaultConv, EditorUI, onGroupDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1001, DefaultConv, EditorUI, selectBuildTab)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1002, DefaultConv, EditorUI, onPause)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1019, DefaultConv, EditorUI, keyUp)
	}
};

template<class Derived>
struct Modify<Derived, CollisionBlockPopup> : ModifyBase<Modify<Derived, CollisionBlockPopup>> {
	using ModifyBase<Modify<Derived, CollisionBlockPopup>>::ModifyBase;
	using Base = CollisionBlockPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(836, DefaultConv, CollisionBlockPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(837, DefaultConv, CollisionBlockPopup, onNextItemID)
	}
};

template<class Derived>
struct Modify<Derived, CheckpointObject> : ModifyBase<Modify<Derived, CheckpointObject>> {
	using ModifyBase<Modify<Derived, CheckpointObject>>::ModifyBase;
	using Base = CheckpointObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(834, DefaultConv, CheckpointObject, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(835, DefaultConv, CheckpointObject, getObject)
	}
};

template<class Derived>
struct Modify<Derived, CreateMenuItem> : ModifyBase<Modify<Derived, CreateMenuItem>> {
	using ModifyBase<Modify<Derived, CreateMenuItem>>::ModifyBase;
	using Base = CreateMenuItem;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(858, DefaultConv, CreateMenuItem, create)
	}
};

template<class Derived>
struct Modify<Derived, LocalLevelManager> : ModifyBase<Modify<Derived, LocalLevelManager>> {
	using ModifyBase<Modify<Derived, LocalLevelManager>>::ModifyBase;
	using Base = LocalLevelManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1733, DefaultConv, LocalLevelManager, sharedState)
	}
};

template<class Derived>
struct Modify<Derived, CCScrollLayerExt> : ModifyBase<Modify<Derived, CCScrollLayerExt>> {
	using ModifyBase<Modify<Derived, CCScrollLayerExt>>::ModifyBase;
	using Base = CCScrollLayerExt;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(777, DefaultConv, CCScrollLayerExt, visit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(778, DefaultConv, CCScrollLayerExt, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(779, DefaultConv, CCScrollLayerExt, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(780, DefaultConv, CCScrollLayerExt, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(781, DefaultConv, CCScrollLayerExt, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(782, DefaultConv, CCScrollLayerExt, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(783, DefaultConv, CCScrollLayerExt, preVisitWithClippingRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(784, DefaultConv, CCScrollLayerExt, postVisit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(785, DefaultConv, CCScrollLayerExt, moveToTop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(786, DefaultConv, CCScrollLayerExt, moveToTopWithOffset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(787, DefaultConv, CCScrollLayerExt, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(788, DefaultConv, CCScrollLayerExt, scrollLayer)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCStandardTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCStandardTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCStandardTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCStandardTouchHandler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(520, DefaultConv, cocos2d::CCStandardTouchHandler, handlerWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(521, DefaultConv, cocos2d::CCStandardTouchHandler, initWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(522, DefaultConv, cocos2d::CCStandardTouchHandler, destructor)
	}
};

template<class Derived>
struct Modify<Derived, CCMoveCNode> : ModifyBase<Modify<Derived, CCMoveCNode>> {
	using ModifyBase<Modify<Derived, CCMoveCNode>>::ModifyBase;
	using Base = CCMoveCNode;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(768, DefaultConv, CCMoveCNode, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(769, DefaultConv, CCMoveCNode, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(770, DefaultConv, CCMoveCNode, destructor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemLabel> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemLabel>>::ModifyBase;
	using Base = cocos2d::CCMenuItemLabel;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(247, DefaultConv, cocos2d::CCMenuItemLabel, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(248, DefaultConv, cocos2d::CCMenuItemLabel, activate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(249, DefaultConv, cocos2d::CCMenuItemLabel, selected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(250, DefaultConv, cocos2d::CCMenuItemLabel, unselected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(251, DefaultConv, cocos2d::CCMenuItemLabel, setEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(252, DefaultConv, cocos2d::CCMenuItemLabel, getDisabledColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(253, DefaultConv, cocos2d::CCMenuItemLabel, setDisabledColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(254, DefaultConv, cocos2d::CCMenuItemLabel, getLabel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(255, DefaultConv, cocos2d::CCMenuItemLabel, setLabel)
	}
};

template<class Derived>
struct Modify<Derived, CCIndexPath> : ModifyBase<Modify<Derived, CCIndexPath>> {
	using ModifyBase<Modify<Derived, CCIndexPath>>::ModifyBase;
	using Base = CCIndexPath;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFadeOut> : ModifyBase<Modify<Derived, cocos2d::CCFadeOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFadeOut>>::ModifyBase;
	using Base = cocos2d::CCFadeOut;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(120, DefaultConv, cocos2d::CCFadeOut, create)
	}
};

template<class Derived>
struct Modify<Derived, CCContentLayer> : ModifyBase<Modify<Derived, CCContentLayer>> {
	using ModifyBase<Modify<Derived, CCContentLayer>>::ModifyBase;
	using Base = CCContentLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameStatsManager> : ModifyBase<Modify<Derived, GameStatsManager>> {
	using ModifyBase<Modify<Derived, GameStatsManager>>::ModifyBase;
	using Base = GameStatsManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1549, DefaultConv, GameStatsManager, awardCurrencyForLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1550, DefaultConv, GameStatsManager, awardDiamondsForLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1551, DefaultConv, GameStatsManager, awardSecretKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1556, DefaultConv, GameStatsManager, getSecretCoinKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1557, DefaultConv, GameStatsManager, getStat)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1558, DefaultConv, GameStatsManager, hasPendingUserCoin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1559, DefaultConv, GameStatsManager, hasSecretCoin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1560, DefaultConv, GameStatsManager, hasUserCoin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1562, DefaultConv, GameStatsManager, incrementStat)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1563, DefaultConv, GameStatsManager, incrementStat)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1564, DefaultConv, GameStatsManager, sharedState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1565, DefaultConv, GameStatsManager, storePendingUserCoin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1566, DefaultConv, GameStatsManager, storeSecretCoin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1567, DefaultConv, GameStatsManager, storeUserCoin)
	}
};

template<class Derived>
struct Modify<Derived, CCCircleWaveDelegate> : ModifyBase<Modify<Derived, CCCircleWaveDelegate>> {
	using ModifyBase<Modify<Derived, CCCircleWaveDelegate>>::ModifyBase;
	using Base = CCCircleWaveDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CCCircleWave> : ModifyBase<Modify<Derived, CCCircleWave>> {
	using ModifyBase<Modify<Derived, CCCircleWave>>::ModifyBase;
	using Base = CCCircleWave;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(726, DefaultConv, CCCircleWave, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(727, DefaultConv, CCCircleWave, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(728, DefaultConv, CCCircleWave, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(729, DefaultConv, CCCircleWave, followObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(730, DefaultConv, CCCircleWave, updatePosition)
	}
};

template<class Derived>
struct Modify<Derived, LevelBrowserLayer> : ModifyBase<Modify<Derived, LevelBrowserLayer>> {
	using ModifyBase<Modify<Derived, LevelBrowserLayer>>::ModifyBase;
	using Base = LevelBrowserLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1612, DefaultConv, LevelBrowserLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, CCBlockLayer> : ModifyBase<Modify<Derived, CCBlockLayer>> {
	using ModifyBase<Modify<Derived, CCBlockLayer>>::ModifyBase;
	using Base = CCBlockLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(714, DefaultConv, CCBlockLayer, disableUI)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(715, DefaultConv, CCBlockLayer, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(716, DefaultConv, CCBlockLayer, enableUI)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(717, DefaultConv, CCBlockLayer, enterAnimFinished)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(718, DefaultConv, CCBlockLayer, enterLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(719, DefaultConv, CCBlockLayer, exitLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(720, DefaultConv, CCBlockLayer, hideLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(721, DefaultConv, CCBlockLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(722, DefaultConv, CCBlockLayer, layerHidden)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(723, DefaultConv, CCBlockLayer, layerVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(724, DefaultConv, CCBlockLayer, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(725, DefaultConv, CCBlockLayer, showLayer)
	}
};

template<class Derived>
struct Modify<Derived, ArtistCell> : ModifyBase<Modify<Derived, ArtistCell>> {
	using ModifyBase<Modify<Derived, ArtistCell>>::ModifyBase;
	using Base = ArtistCell;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(676, DefaultConv, ArtistCell, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(677, DefaultConv, ArtistCell, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(678, DefaultConv, ArtistCell, loadFromObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(679, DefaultConv, ArtistCell, onNewgrounds)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(680, DefaultConv, ArtistCell, updateBGColor)
	}
};

template<class Derived>
struct Modify<Derived, AchievementsLayer> : ModifyBase<Modify<Derived, AchievementsLayer>> {
	using ModifyBase<Modify<Derived, AchievementsLayer>>::ModifyBase;
	using Base = AchievementsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(660, DefaultConv, AchievementsLayer, customSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(661, DefaultConv, AchievementsLayer, loadPage)
	}
};

template<class Derived>
struct Modify<Derived, AchievementNotifier> : ModifyBase<Modify<Derived, AchievementNotifier>> {
	using ModifyBase<Modify<Derived, AchievementNotifier>>::ModifyBase;
	using Base = AchievementNotifier;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(657, DefaultConv, AchievementNotifier, sharedState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(658, DefaultConv, AchievementNotifier, willSwitchToScene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(659, DefaultConv, AchievementNotifier, showNextAchievement)
	}
};

template<class Derived>
struct Modify<Derived, MessageListDelegate> : ModifyBase<Modify<Derived, MessageListDelegate>> {
	using ModifyBase<Modify<Derived, MessageListDelegate>>::ModifyBase;
	using Base = MessageListDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AchievementCell> : ModifyBase<Modify<Derived, AchievementCell>> {
	using ModifyBase<Modify<Derived, AchievementCell>>::ModifyBase;
	using Base = AchievementCell;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(653, DefaultConv, AchievementCell, loadFromDict)
	}
};

template<class Derived>
struct Modify<Derived, AchievementBar> : ModifyBase<Modify<Derived, AchievementBar>> {
	using ModifyBase<Modify<Derived, AchievementBar>>::ModifyBase;
	using Base = AchievementBar;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(652, DefaultConv, AchievementBar, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCActionTween> : ModifyBase<Modify<Derived, cocos2d::CCActionTween>> {
	using ModifyBase<Modify<Derived, cocos2d::CCActionTween>>::ModifyBase;
	using Base = cocos2d::CCActionTween;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1, DefaultConv, cocos2d::CCActionTween, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCApplication> : ModifyBase<Modify<Derived, cocos2d::CCApplication>> {
	using ModifyBase<Modify<Derived, cocos2d::CCApplication>>::ModifyBase;
	using Base = cocos2d::CCApplication;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(5, DefaultConv, cocos2d::CCApplication, getCurrentLanguage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(6, DefaultConv, cocos2d::CCApplication, getTargetPlatform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(7, DefaultConv, cocos2d::CCApplication, openURL)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(8, DefaultConv, cocos2d::CCApplication, setAnimationInterval)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(9, DefaultConv, cocos2d::CCApplication, sharedApplication)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(10, DefaultConv, cocos2d::CCApplication, destructor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScrollView> : ModifyBase<Modify<Derived, cocos2d::extension::CCScrollView>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScrollView>>::ModifyBase;
	using Base = cocos2d::extension::CCScrollView;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(635, DefaultConv, cocos2d::extension::CCScrollView, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(636, DefaultConv, cocos2d::extension::CCScrollView, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(637, DefaultConv, cocos2d::extension::CCScrollView, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(638, DefaultConv, cocos2d::extension::CCScrollView, setContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(639, DefaultConv, cocos2d::extension::CCScrollView, getContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(640, DefaultConv, cocos2d::extension::CCScrollView, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(641, DefaultConv, cocos2d::extension::CCScrollView, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(642, DefaultConv, cocos2d::extension::CCScrollView, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(643, DefaultConv, cocos2d::extension::CCScrollView, visit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(644, DefaultConv, cocos2d::extension::CCScrollView, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(645, DefaultConv, cocos2d::extension::CCScrollView, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(646, DefaultConv, cocos2d::extension::CCScrollView, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(647, DefaultConv, cocos2d::extension::CCScrollView, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(648, DefaultConv, cocos2d::extension::CCScrollView, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(649, DefaultConv, cocos2d::extension::CCScrollView, setTouchEnabled)
	}
};

template<class Derived>
struct Modify<Derived, CurrencyRewardLayer> : ModifyBase<Modify<Derived, CurrencyRewardLayer>> {
	using ModifyBase<Modify<Derived, CurrencyRewardLayer>>::ModifyBase;
	using Base = CurrencyRewardLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(867, DefaultConv, CurrencyRewardLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(868, DefaultConv, CurrencyRewardLayer, update)
	}
};

template<class Derived>
struct Modify<Derived, LevelDeleteDelegate> : ModifyBase<Modify<Derived, LevelDeleteDelegate>> {
	using ModifyBase<Modify<Derived, LevelDeleteDelegate>>::ModifyBase;
	using Base = LevelDeleteDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, ChallengesPage> : ModifyBase<Modify<Derived, ChallengesPage>> {
	using ModifyBase<Modify<Derived, ChallengesPage>>::ModifyBase;
	using Base = ChallengesPage;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRenderTexture> : ModifyBase<Modify<Derived, cocos2d::CCRenderTexture>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRenderTexture>>::ModifyBase;
	using Base = cocos2d::CCRenderTexture;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(428, DefaultConv, cocos2d::CCRenderTexture, begin)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(429, DefaultConv, cocos2d::CCRenderTexture, end)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(430, DefaultConv, cocos2d::CCRenderTexture, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(431, DefaultConv, cocos2d::CCRenderTexture, newCCImage)
	}
};

template<class Derived>
struct Modify<Derived, LikeItemDelegate> : ModifyBase<Modify<Derived, LikeItemDelegate>> {
	using ModifyBase<Modify<Derived, LikeItemDelegate>>::ModifyBase;
	using Base = LikeItemDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRotateBy> : ModifyBase<Modify<Derived, cocos2d::CCRotateBy>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRotateBy>>::ModifyBase;
	using Base = cocos2d::CCRotateBy;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(433, DefaultConv, cocos2d::CCRotateBy, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSet> : ModifyBase<Modify<Derived, cocos2d::CCSet>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSet>>::ModifyBase;
	using Base = cocos2d::CCSet;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(443, DefaultConv, cocos2d::CCSet, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(444, DefaultConv, cocos2d::CCSet, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(445, DefaultConv, cocos2d::CCSet, acceptVisitor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(446, DefaultConv, cocos2d::CCSet, anyObject)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControlUtils> : ModifyBase<Modify<Derived, cocos2d::extension::CCControlUtils>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControlUtils>>::ModifyBase;
	using Base = cocos2d::extension::CCControlUtils;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(594, DefaultConv, cocos2d::extension::CCControlUtils, HSVfromRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(595, DefaultConv, cocos2d::extension::CCControlUtils, RGBfromHSV)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCAnimation> : ModifyBase<Modify<Derived, cocos2d::CCAnimation>> {
	using ModifyBase<Modify<Derived, cocos2d::CCAnimation>>::ModifyBase;
	using Base = cocos2d::CCAnimation;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(4, DefaultConv, cocos2d::CCAnimation, createWithSpriteFrames)
	}
};

template<class Derived>
struct Modify<Derived, AchievementManager> : ModifyBase<Modify<Derived, AchievementManager>> {
	using ModifyBase<Modify<Derived, AchievementManager>>::ModifyBase;
	using Base = AchievementManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(654, DefaultConv, AchievementManager, getAllAchievements)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(655, DefaultConv, AchievementManager, sharedState)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCTouchHandler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(566, DefaultConv, cocos2d::CCTouchHandler, initWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(567, DefaultConv, cocos2d::CCTouchHandler, getPriority)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(568, DefaultConv, cocos2d::CCTouchHandler, destructor)
	}
};

template<class Derived>
struct Modify<Derived, ConfigureHSVWidget> : ModifyBase<Modify<Derived, ConfigureHSVWidget>> {
	using ModifyBase<Modify<Derived, ConfigureHSVWidget>>::ModifyBase;
	using Base = ConfigureHSVWidget;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetupInteractObjectPopup> : ModifyBase<Modify<Derived, SetupInteractObjectPopup>> {
	using ModifyBase<Modify<Derived, SetupInteractObjectPopup>>::ModifyBase;
	using Base = SetupInteractObjectPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2162, DefaultConv, SetupInteractObjectPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2163, DefaultConv, SetupInteractObjectPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2164, DefaultConv, SetupInteractObjectPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2165, DefaultConv, SetupInteractObjectPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSprite> : ModifyBase<Modify<Derived, cocos2d::CCSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSprite>>::ModifyBase;
	using Base = cocos2d::CCSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(447, DefaultConv, cocos2d::CCSprite, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(448, DefaultConv, cocos2d::CCSprite, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(449, DefaultConv, cocos2d::CCSprite, setVertexZ)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(450, DefaultConv, cocos2d::CCSprite, setScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(451, DefaultConv, cocos2d::CCSprite, setScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(452, DefaultConv, cocos2d::CCSprite, setScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(453, DefaultConv, cocos2d::CCSprite, setPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(454, DefaultConv, cocos2d::CCSprite, setSkewX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(455, DefaultConv, cocos2d::CCSprite, setSkewY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(456, DefaultConv, cocos2d::CCSprite, setAnchorPoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(457, DefaultConv, cocos2d::CCSprite, setVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(458, DefaultConv, cocos2d::CCSprite, setRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(459, DefaultConv, cocos2d::CCSprite, setRotationX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(460, DefaultConv, cocos2d::CCSprite, setRotationY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(461, DefaultConv, cocos2d::CCSprite, ignoreAnchorPointForPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(462, DefaultConv, cocos2d::CCSprite, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(463, DefaultConv, cocos2d::CCSprite, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(464, DefaultConv, cocos2d::CCSprite, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(465, DefaultConv, cocos2d::CCSprite, removeChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(466, DefaultConv, cocos2d::CCSprite, removeAllChildrenWithCleanup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(467, DefaultConv, cocos2d::CCSprite, reorderChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(468, DefaultConv, cocos2d::CCSprite, sortAllChildren)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(469, DefaultConv, cocos2d::CCSprite, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(470, DefaultConv, cocos2d::CCSprite, updateTransform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(471, DefaultConv, cocos2d::CCSprite, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(472, DefaultConv, cocos2d::CCSprite, updateDisplayedOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(473, DefaultConv, cocos2d::CCSprite, setColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(474, DefaultConv, cocos2d::CCSprite, updateDisplayedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(475, DefaultConv, cocos2d::CCSprite, setOpacityModifyRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(476, DefaultConv, cocos2d::CCSprite, isOpacityModifyRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(477, DefaultConv, cocos2d::CCSprite, initWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(478, DefaultConv, cocos2d::CCSprite, initWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(479, DefaultConv, cocos2d::CCSprite, initWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(480, DefaultConv, cocos2d::CCSprite, initWithSpriteFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(481, DefaultConv, cocos2d::CCSprite, initWithSpriteFrameName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(482, DefaultConv, cocos2d::CCSprite, initWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(483, DefaultConv, cocos2d::CCSprite, initWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(484, DefaultConv, cocos2d::CCSprite, setTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(485, DefaultConv, cocos2d::CCSprite, getTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(486, DefaultConv, cocos2d::CCSprite, setChildColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(487, DefaultConv, cocos2d::CCSprite, setChildOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(488, DefaultConv, cocos2d::CCSprite, getBatchNode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(489, DefaultConv, cocos2d::CCSprite, setBatchNode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(490, DefaultConv, cocos2d::CCSprite, refreshTextureRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(491, DefaultConv, cocos2d::CCSprite, setTextureRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(492, DefaultConv, cocos2d::CCSprite, setTextureRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(493, DefaultConv, cocos2d::CCSprite, setVertexRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(494, DefaultConv, cocos2d::CCSprite, setDisplayFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(495, DefaultConv, cocos2d::CCSprite, isFrameDisplayed)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(496, DefaultConv, cocos2d::CCSprite, displayFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(497, DefaultConv, cocos2d::CCSprite, setDisplayFrameWithAnimationName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(498, DefaultConv, cocos2d::CCSprite, setTextureCoords)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(499, DefaultConv, cocos2d::CCSprite, updateBlendFunc)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(500, DefaultConv, cocos2d::CCSprite, setReorderChildDirtyRecursively)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(501, DefaultConv, cocos2d::CCSprite, setDirtyRecursively)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(502, DefaultConv, cocos2d::CCSprite, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(503, DefaultConv, cocos2d::CCSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(504, DefaultConv, cocos2d::CCSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(505, DefaultConv, cocos2d::CCSprite, createWithSpriteFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(506, DefaultConv, cocos2d::CCSprite, createWithSpriteFrameName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(507, DefaultConv, cocos2d::CCSprite, createWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(508, DefaultConv, cocos2d::CCSprite, createWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(509, DefaultConv, cocos2d::CCSprite, setFlipX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(510, DefaultConv, cocos2d::CCSprite, setFlipY)
	}
};

template<class Derived>
struct Modify<Derived, RateLevelDelegate> : ModifyBase<Modify<Derived, RateLevelDelegate>> {
	using ModifyBase<Modify<Derived, RateLevelDelegate>>::ModifyBase;
	using Base = RateLevelDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouchDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCTouchDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouchDispatcher>>::ModifyBase;
	using Base = cocos2d::CCTouchDispatcher;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(561, DefaultConv, cocos2d::CCTouchDispatcher, addTargetedDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(562, DefaultConv, cocos2d::CCTouchDispatcher, decrementForcePrio)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(563, DefaultConv, cocos2d::CCTouchDispatcher, incrementForcePrio)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(564, DefaultConv, cocos2d::CCTouchDispatcher, touches)
	}
};

template<class Derived>
struct Modify<Derived, GJAccountLoginDelegate> : ModifyBase<Modify<Derived, GJAccountLoginDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountLoginDelegate>>::ModifyBase;
	using Base = GJAccountLoginDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, EndLevelLayer> : ModifyBase<Modify<Derived, EndLevelLayer>> {
	using ModifyBase<Modify<Derived, EndLevelLayer>>::ModifyBase;
	using Base = EndLevelLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1025, DefaultConv, EndLevelLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, AnimatedGameObject> : ModifyBase<Modify<Derived, AnimatedGameObject>> {
	using ModifyBase<Modify<Derived, AnimatedGameObject>>::ModifyBase;
	using Base = AnimatedGameObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(662, DefaultConv, AnimatedGameObject, playAnimation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(663, DefaultConv, AnimatedGameObject, updateChildSpriteColor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTime> : ModifyBase<Modify<Derived, cocos2d::CCTime>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTime>>::ModifyBase;
	using Base = cocos2d::CCTime;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(555, DefaultConv, cocos2d::CCTime, gettimeofdayCocos2d)
	}
};

template<class Derived>
struct Modify<Derived, UndoObject> : ModifyBase<Modify<Derived, UndoObject>> {
	using ModifyBase<Modify<Derived, UndoObject>>::ModifyBase;
	using Base = UndoObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2271, DefaultConv, UndoObject, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2272, DefaultConv, UndoObject, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2273, DefaultConv, UndoObject, createWithArray)
	}
};

template<class Derived>
struct Modify<Derived, GJSearchObject> : ModifyBase<Modify<Derived, GJSearchObject>> {
	using ModifyBase<Modify<Derived, GJSearchObject>>::ModifyBase;
	using Base = GJSearchObject;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMotionStreak> : ModifyBase<Modify<Derived, cocos2d::CCMotionStreak>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMotionStreak>>::ModifyBase;
	using Base = cocos2d::CCMotionStreak;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(270, DefaultConv, cocos2d::CCMotionStreak, reset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(271, DefaultConv, cocos2d::CCMotionStreak, resumeStroke)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(272, DefaultConv, cocos2d::CCMotionStreak, stopStroke)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(273, DefaultConv, cocos2d::CCMotionStreak, initWithFade)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTintTo> : ModifyBase<Modify<Derived, cocos2d::CCTintTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTintTo>>::ModifyBase;
	using Base = cocos2d::CCTintTo;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(556, DefaultConv, cocos2d::CCTintTo, create)
	}
};

template<class Derived>
struct Modify<Derived, CountTriggerAction> : ModifyBase<Modify<Derived, CountTriggerAction>> {
	using ModifyBase<Modify<Derived, CountTriggerAction>>::ModifyBase;
	using Base = CountTriggerAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(856, DefaultConv, CountTriggerAction, createFromString)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTextFieldDelegate> : ModifyBase<Modify<Derived, cocos2d::CCTextFieldDelegate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTextFieldDelegate>>::ModifyBase;
	using Base = cocos2d::CCTextFieldDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFadeTo> : ModifyBase<Modify<Derived, cocos2d::CCFadeTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFadeTo>>::ModifyBase;
	using Base = cocos2d::CCFadeTo;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(121, DefaultConv, cocos2d::CCFadeTo, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLabelBMFont> : ModifyBase<Modify<Derived, cocos2d::CCLabelBMFont>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLabelBMFont>>::ModifyBase;
	using Base = cocos2d::CCLabelBMFont;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(141, DefaultConv, cocos2d::CCLabelBMFont, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(142, DefaultConv, cocos2d::CCLabelBMFont, limitLabelWidth)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(143, DefaultConv, cocos2d::CCLabelBMFont, setScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(144, DefaultConv, cocos2d::CCLabelBMFont, setString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(145, DefaultConv, cocos2d::CCLabelBMFont, setAnchorPoint)
	}
};

template<class Derived>
struct Modify<Derived, BoomListView> : ModifyBase<Modify<Derived, BoomListView>> {
	using ModifyBase<Modify<Derived, BoomListView>>::ModifyBase;
	using Base = BoomListView;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(684, DefaultConv, BoomListView, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(685, DefaultConv, BoomListView, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(686, DefaultConv, BoomListView, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(687, DefaultConv, BoomListView, setupList)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(688, DefaultConv, BoomListView, TableViewWillDisplayCellForRowAtIndexPath)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(689, DefaultConv, BoomListView, cellHeightForRowAtIndexPath)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(691, DefaultConv, BoomListView, numberOfRowsInSection)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(692, DefaultConv, BoomListView, numberOfSectionsInTableView)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(693, DefaultConv, BoomListView, cellForRowAtIndexPath)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(694, DefaultConv, BoomListView, TableViewCommitCellEditingStyleForRowAtIndexPath)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(695, DefaultConv, BoomListView, TableViewWillReloadCellForRowAtIndexPath)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(696, DefaultConv, BoomListView, getListCell)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(697, DefaultConv, BoomListView, loadCell)
	}
};

template<class Derived>
struct Modify<Derived, CCTextInputNode> : ModifyBase<Modify<Derived, CCTextInputNode>> {
	using ModifyBase<Modify<Derived, CCTextInputNode>>::ModifyBase;
	using Base = CCTextInputNode;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(812, DefaultConv, CCTextInputNode, setString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(817, DefaultConv, CCTextInputNode, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(818, DefaultConv, CCTextInputNode, refreshLabel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(819, DefaultConv, CCTextInputNode, updateLabel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(820, DefaultConv, CCTextInputNode, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(821, DefaultConv, CCTextInputNode, visit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(822, DefaultConv, CCTextInputNode, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(823, DefaultConv, CCTextInputNode, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(824, DefaultConv, CCTextInputNode, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(825, DefaultConv, CCTextInputNode, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(826, DefaultConv, CCTextInputNode, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(827, DefaultConv, CCTextInputNode, onClickTrackNode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(828, DefaultConv, CCTextInputNode, keyboardWillShow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(829, DefaultConv, CCTextInputNode, keyboardWillHide)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(830, DefaultConv, CCTextInputNode, onTextFieldInsertText)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(831, DefaultConv, CCTextInputNode, onTextFieldAttachWithIME)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(832, DefaultConv, CCTextInputNode, onTextFieldDetachWithIME)
	}
};

template<class Derived>
struct Modify<Derived, GJUserCell> : ModifyBase<Modify<Derived, GJUserCell>> {
	using ModifyBase<Modify<Derived, GJUserCell>>::ModifyBase;
	using Base = GJUserCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteFrame> : ModifyBase<Modify<Derived, cocos2d::CCSpriteFrame>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteFrame>>::ModifyBase;
	using Base = cocos2d::CCSpriteFrame;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(515, DefaultConv, cocos2d::CCSpriteFrame, createWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(516, DefaultConv, cocos2d::CCSpriteFrame, createWithTexture)
	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsObject> : ModifyBase<Modify<Derived, LevelSettingsObject>> {
	using ModifyBase<Modify<Derived, LevelSettingsObject>>::ModifyBase;
	using Base = LevelSettingsObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1712, DefaultConv, LevelSettingsObject, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1713, DefaultConv, LevelSettingsObject, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1714, DefaultConv, LevelSettingsObject, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1715, DefaultConv, LevelSettingsObject, objectFromDict)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1716, DefaultConv, LevelSettingsObject, objectFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1717, DefaultConv, LevelSettingsObject, setupColorsFromLegacyMode)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTexture2D> : ModifyBase<Modify<Derived, cocos2d::CCTexture2D>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTexture2D>>::ModifyBase;
	using Base = cocos2d::CCTexture2D;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(534, DefaultConv, cocos2d::CCTexture2D, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(535, DefaultConv, cocos2d::CCTexture2D, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(536, DefaultConv, cocos2d::CCTexture2D, getContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(537, DefaultConv, cocos2d::CCTexture2D, getMaxS)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(538, DefaultConv, cocos2d::CCTexture2D, getMaxT)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(539, DefaultConv, cocos2d::CCTexture2D, getName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(540, DefaultConv, cocos2d::CCTexture2D, getPixelFormat)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(541, DefaultConv, cocos2d::CCTexture2D, getPixelsHigh)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(542, DefaultConv, cocos2d::CCTexture2D, getPixelsWide)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(543, DefaultConv, cocos2d::CCTexture2D, getShaderProgram)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(544, DefaultConv, cocos2d::CCTexture2D, initPremultipliedATextureWithImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(545, DefaultConv, cocos2d::CCTexture2D, initWithData)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(546, DefaultConv, cocos2d::CCTexture2D, setAliasTexParameters)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(547, DefaultConv, cocos2d::CCTexture2D, setAntiAliasTexParameters)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(548, DefaultConv, cocos2d::CCTexture2D, setMaxS)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(549, DefaultConv, cocos2d::CCTexture2D, setMaxT)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(550, DefaultConv, cocos2d::CCTexture2D, setShaderProgram)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(551, DefaultConv, cocos2d::CCTexture2D, initWithImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(552, DefaultConv, cocos2d::CCTexture2D, setTexParameters)
	}
};

template<class Derived>
struct Modify<Derived, UploadPopupDelegate> : ModifyBase<Modify<Derived, UploadPopupDelegate>> {
	using ModifyBase<Modify<Derived, UploadPopupDelegate>>::ModifyBase;
	using Base = UploadPopupDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTargetedTouchHandler> : ModifyBase<Modify<Derived, cocos2d::CCTargetedTouchHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTargetedTouchHandler>>::ModifyBase;
	using Base = cocos2d::CCTargetedTouchHandler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(531, DefaultConv, cocos2d::CCTargetedTouchHandler, handlerWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(532, DefaultConv, cocos2d::CCTargetedTouchHandler, initWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(533, DefaultConv, cocos2d::CCTargetedTouchHandler, destructor)
	}
};

template<class Derived>
struct Modify<Derived, ColorSelectDelegate> : ModifyBase<Modify<Derived, ColorSelectDelegate>> {
	using ModifyBase<Modify<Derived, ColorSelectDelegate>>::ModifyBase;
	using Base = ColorSelectDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, FLAlertLayer> : ModifyBase<Modify<Derived, FLAlertLayer>> {
	using ModifyBase<Modify<Derived, FLAlertLayer>>::ModifyBase;
	using Base = FLAlertLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1029, DefaultConv, FLAlertLayer, onEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1030, DefaultConv, FLAlertLayer, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1031, DefaultConv, FLAlertLayer, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1032, DefaultConv, FLAlertLayer, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1033, DefaultConv, FLAlertLayer, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1034, DefaultConv, FLAlertLayer, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1035, DefaultConv, FLAlertLayer, keyBackClicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1036, DefaultConv, FLAlertLayer, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1037, DefaultConv, FLAlertLayer, show)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1038, DefaultConv, FLAlertLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1039, DefaultConv, FLAlertLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1040, DefaultConv, FLAlertLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1041, DefaultConv, FLAlertLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1042, DefaultConv, FLAlertLayer, onBtn1)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1043, DefaultConv, FLAlertLayer, onBtn2)
	}
};

template<class Derived>
struct Modify<Derived, GameToolbox> : ModifyBase<Modify<Derived, GameToolbox>> {
	using ModifyBase<Modify<Derived, GameToolbox>>::ModifyBase;
	using Base = GameToolbox;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1569, DefaultConv, GameToolbox, createToggleButton)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteBatchNode> : ModifyBase<Modify<Derived, cocos2d::CCSpriteBatchNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteBatchNode>>::ModifyBase;
	using Base = cocos2d::CCSpriteBatchNode;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(511, DefaultConv, cocos2d::CCSpriteBatchNode, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(512, DefaultConv, cocos2d::CCSpriteBatchNode, createWithTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(513, DefaultConv, cocos2d::CCSpriteBatchNode, getUsedAtlasCapacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(514, DefaultConv, cocos2d::CCSpriteBatchNode, increaseAtlasCapacity)
	}
};

template<class Derived>
struct Modify<Derived, AnimatedShopKeeper> : ModifyBase<Modify<Derived, AnimatedShopKeeper>> {
	using ModifyBase<Modify<Derived, AnimatedShopKeeper>>::ModifyBase;
	using Base = AnimatedShopKeeper;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, BoomScrollLayer> : ModifyBase<Modify<Derived, BoomScrollLayer>> {
	using ModifyBase<Modify<Derived, BoomScrollLayer>>::ModifyBase;
	using Base = BoomScrollLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(698, DefaultConv, BoomScrollLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSequence> : ModifyBase<Modify<Derived, cocos2d::CCSequence>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSequence>>::ModifyBase;
	using Base = cocos2d::CCSequence;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(442, DefaultConv, cocos2d::CCSequence, createWithVariableList)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScene> : ModifyBase<Modify<Derived, cocos2d::CCScene>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScene>>::ModifyBase;
	using Base = cocos2d::CCScene;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(436, DefaultConv, cocos2d::CCScene, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(437, DefaultConv, cocos2d::CCScene, getHighestChildZ)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScaleTo> : ModifyBase<Modify<Derived, cocos2d::CCScaleTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScaleTo>>::ModifyBase;
	using Base = cocos2d::CCScaleTo;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(434, DefaultConv, cocos2d::CCScaleTo, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(435, DefaultConv, cocos2d::CCScaleTo, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCRepeatForever> : ModifyBase<Modify<Derived, cocos2d::CCRepeatForever>> {
	using ModifyBase<Modify<Derived, cocos2d::CCRepeatForever>>::ModifyBase;
	using Base = cocos2d::CCRepeatForever;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(432, DefaultConv, cocos2d::CCRepeatForever, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCParticleSystemQuad> : ModifyBase<Modify<Derived, cocos2d::CCParticleSystemQuad>> {
	using ModifyBase<Modify<Derived, cocos2d::CCParticleSystemQuad>>::ModifyBase;
	using Base = cocos2d::CCParticleSystemQuad;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(425, DefaultConv, cocos2d::CCParticleSystemQuad, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCParticleSystem> : ModifyBase<Modify<Derived, cocos2d::CCParticleSystem>> {
	using ModifyBase<Modify<Derived, cocos2d::CCParticleSystem>>::ModifyBase;
	using Base = cocos2d::CCParticleSystem;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(422, DefaultConv, cocos2d::CCParticleSystem, resetSystem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(423, DefaultConv, cocos2d::CCParticleSystem, resumeSystem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(424, DefaultConv, cocos2d::CCParticleSystem, stopSystem)
	}
};

template<class Derived>
struct Modify<Derived, SetupCollisionTriggerPopup> : ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>> {
	using ModifyBase<Modify<Derived, SetupCollisionTriggerPopup>>::ModifyBase;
	using Base = SetupCollisionTriggerPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2150, DefaultConv, SetupCollisionTriggerPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2151, DefaultConv, SetupCollisionTriggerPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2152, DefaultConv, SetupCollisionTriggerPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2153, DefaultConv, SetupCollisionTriggerPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, CustomSongWidget> : ModifyBase<Modify<Derived, CustomSongWidget>> {
	using ModifyBase<Modify<Derived, CustomSongWidget>>::ModifyBase;
	using Base = CustomSongWidget;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TriggerEffectDelegate> : ModifyBase<Modify<Derived, TriggerEffectDelegate>> {
	using ModifyBase<Modify<Derived, TriggerEffectDelegate>>::ModifyBase;
	using Base = TriggerEffectDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, TeleportPortalObject> : ModifyBase<Modify<Derived, TeleportPortalObject>> {
	using ModifyBase<Modify<Derived, TeleportPortalObject>>::ModifyBase;
	using Base = TeleportPortalObject;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, CCScrollLayerExtDelegate> : ModifyBase<Modify<Derived, CCScrollLayerExtDelegate>> {
	using ModifyBase<Modify<Derived, CCScrollLayerExtDelegate>>::ModifyBase;
	using Base = CCScrollLayerExtDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMoveTo> : ModifyBase<Modify<Derived, cocos2d::CCMoveTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMoveTo>>::ModifyBase;
	using Base = cocos2d::CCMoveTo;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(280, DefaultConv, cocos2d::CCMoveTo, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayer> : ModifyBase<Modify<Derived, cocos2d::CCLayer>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayer>>::ModifyBase;
	using Base = cocos2d::CCLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(150, DefaultConv, cocos2d::CCLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(151, DefaultConv, cocos2d::CCLayer, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(152, DefaultConv, cocos2d::CCLayer, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(153, DefaultConv, cocos2d::CCLayer, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(154, DefaultConv, cocos2d::CCLayer, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(155, DefaultConv, cocos2d::CCLayer, ccTouchesBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(156, DefaultConv, cocos2d::CCLayer, ccTouchesCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(157, DefaultConv, cocos2d::CCLayer, ccTouchesEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(158, DefaultConv, cocos2d::CCLayer, ccTouchesMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(159, DefaultConv, cocos2d::CCLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(160, DefaultConv, cocos2d::CCLayer, didAccelerate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(161, DefaultConv, cocos2d::CCLayer, getTouchMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(162, DefaultConv, cocos2d::CCLayer, getTouchPriority)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(163, DefaultConv, cocos2d::CCLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(164, DefaultConv, cocos2d::CCLayer, isAccelerometerEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(165, DefaultConv, cocos2d::CCLayer, isKeyboardEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(166, DefaultConv, cocos2d::CCLayer, isKeypadEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(167, DefaultConv, cocos2d::CCLayer, isMouseEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(168, DefaultConv, cocos2d::CCLayer, isTouchEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(169, DefaultConv, cocos2d::CCLayer, keyBackClicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(170, DefaultConv, cocos2d::CCLayer, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(171, DefaultConv, cocos2d::CCLayer, keyMenuClicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(172, DefaultConv, cocos2d::CCLayer, onEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(173, DefaultConv, cocos2d::CCLayer, onEnterTransitionDidFinish)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(174, DefaultConv, cocos2d::CCLayer, onExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(175, DefaultConv, cocos2d::CCLayer, registerScriptTouchHandler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(176, DefaultConv, cocos2d::CCLayer, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(177, DefaultConv, cocos2d::CCLayer, setAccelerometerEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(178, DefaultConv, cocos2d::CCLayer, setAccelerometerInterval)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(179, DefaultConv, cocos2d::CCLayer, setKeyboardEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(180, DefaultConv, cocos2d::CCLayer, setKeypadEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(181, DefaultConv, cocos2d::CCLayer, setMouseEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(182, DefaultConv, cocos2d::CCLayer, setTouchEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(183, DefaultConv, cocos2d::CCLayer, setTouchMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(184, DefaultConv, cocos2d::CCLayer, setTouchPriority)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(185, DefaultConv, cocos2d::CCLayer, unregisterScriptTouchHandler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(186, DefaultConv, cocos2d::CCLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, GJSpecialColorSelect> : ModifyBase<Modify<Derived, GJSpecialColorSelect>> {
	using ModifyBase<Modify<Derived, GJSpecialColorSelect>>::ModifyBase;
	using Base = GJSpecialColorSelect;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1304, DefaultConv, GJSpecialColorSelect, textForColorIdx)
	}
};

template<class Derived>
struct Modify<Derived, GJAccountDelegate> : ModifyBase<Modify<Derived, GJAccountDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountDelegate>>::ModifyBase;
	using Base = GJAccountDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMoveBy> : ModifyBase<Modify<Derived, cocos2d::CCMoveBy>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMoveBy>>::ModifyBase;
	using Base = cocos2d::CCMoveBy;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(279, DefaultConv, cocos2d::CCMoveBy, create)
	}
};

template<class Derived>
struct Modify<Derived, HSVWidgetPopupDelegate> : ModifyBase<Modify<Derived, HSVWidgetPopupDelegate>> {
	using ModifyBase<Modify<Derived, HSVWidgetPopupDelegate>>::ModifyBase;
	using Base = HSVWidgetPopupDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemSprite> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemSprite>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemSprite>>::ModifyBase;
	using Base = cocos2d::CCMenuItemSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(256, DefaultConv, cocos2d::CCMenuItemSprite, selected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(257, DefaultConv, cocos2d::CCMenuItemSprite, unselected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(258, DefaultConv, cocos2d::CCMenuItemSprite, setEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(259, DefaultConv, cocos2d::CCMenuItemSprite, getNormalImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(260, DefaultConv, cocos2d::CCMenuItemSprite, setNormalImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(261, DefaultConv, cocos2d::CCMenuItemSprite, getSelectedImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(262, DefaultConv, cocos2d::CCMenuItemSprite, setSelectedImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(263, DefaultConv, cocos2d::CCMenuItemSprite, getDisabledImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(264, DefaultConv, cocos2d::CCMenuItemSprite, setDisabledImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(265, DefaultConv, cocos2d::CCMenuItemSprite, updateImagesVisibility)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(266, DefaultConv, cocos2d::CCMenuItemSprite, initWithNormalSprite)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(267, DefaultConv, cocos2d::CCMenuItemSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(268, DefaultConv, cocos2d::CCMenuItemSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(269, DefaultConv, cocos2d::CCMenuItemSprite, create)
	}
};

template<class Derived>
struct Modify<Derived, SetupTouchTogglePopup> : ModifyBase<Modify<Derived, SetupTouchTogglePopup>> {
	using ModifyBase<Modify<Derived, SetupTouchTogglePopup>>::ModifyBase;
	using Base = SetupTouchTogglePopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2191, DefaultConv, SetupTouchTogglePopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2192, DefaultConv, SetupTouchTogglePopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2193, DefaultConv, SetupTouchTogglePopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2194, DefaultConv, SetupTouchTogglePopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCFileUtils> : ModifyBase<Modify<Derived, cocos2d::CCFileUtils>> {
	using ModifyBase<Modify<Derived, cocos2d::CCFileUtils>>::ModifyBase;
	using Base = cocos2d::CCFileUtils;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(122, DefaultConv, cocos2d::CCFileUtils, sharedFileUtils)
	}
};

template<class Derived>
struct Modify<Derived, GJRewardDelegate> : ModifyBase<Modify<Derived, GJRewardDelegate>> {
	using ModifyBase<Modify<Derived, GJRewardDelegate>>::ModifyBase;
	using Base = GJRewardDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNode> : ModifyBase<Modify<Derived, cocos2d::CCNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNode>>::ModifyBase;
	using Base = cocos2d::CCNode;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(281, DefaultConv, cocos2d::CCNode, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(282, DefaultConv, cocos2d::CCNode, _setZOrder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(283, DefaultConv, cocos2d::CCNode, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(284, DefaultConv, cocos2d::CCNode, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(285, DefaultConv, cocos2d::CCNode, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(286, DefaultConv, cocos2d::CCNode, addComponent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(287, DefaultConv, cocos2d::CCNode, cleanup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(288, DefaultConv, cocos2d::CCNode, convertToNodeSpace)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(289, DefaultConv, cocos2d::CCNode, convertToWorldSpace)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(290, DefaultConv, cocos2d::CCNode, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(291, DefaultConv, cocos2d::CCNode, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(292, DefaultConv, cocos2d::CCNode, getActionByTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(293, DefaultConv, cocos2d::CCNode, getActionManager)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(294, DefaultConv, cocos2d::CCNode, getAnchorPoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(295, DefaultConv, cocos2d::CCNode, getAnchorPointInPoints)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(296, DefaultConv, cocos2d::CCNode, getCamera)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(297, DefaultConv, cocos2d::CCNode, getChildByTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(298, DefaultConv, cocos2d::CCNode, getChildren)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(299, DefaultConv, cocos2d::CCNode, getChildrenCount)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(300, DefaultConv, cocos2d::CCNode, getContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(301, DefaultConv, cocos2d::CCNode, getGLServerState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(302, DefaultConv, cocos2d::CCNode, getGrid)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(303, DefaultConv, cocos2d::CCNode, getOrderOfArrival)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(304, DefaultConv, cocos2d::CCNode, getParent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(305, DefaultConv, cocos2d::CCNode, getPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(306, DefaultConv, cocos2d::CCNode, getPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(307, DefaultConv, cocos2d::CCNode, getPositionX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(308, DefaultConv, cocos2d::CCNode, getPositionY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(309, DefaultConv, cocos2d::CCNode, getRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(310, DefaultConv, cocos2d::CCNode, getRotationX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(311, DefaultConv, cocos2d::CCNode, getRotationY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(312, DefaultConv, cocos2d::CCNode, getScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(313, DefaultConv, cocos2d::CCNode, getScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(314, DefaultConv, cocos2d::CCNode, getScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(315, DefaultConv, cocos2d::CCNode, getScaledContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(316, DefaultConv, cocos2d::CCNode, getScheduler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(317, DefaultConv, cocos2d::CCNode, getShaderProgram)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(318, DefaultConv, cocos2d::CCNode, getSkewX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(319, DefaultConv, cocos2d::CCNode, getSkewY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(320, DefaultConv, cocos2d::CCNode, getUserData)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(321, DefaultConv, cocos2d::CCNode, getUserObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(322, DefaultConv, cocos2d::CCNode, getVertexZ)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(323, DefaultConv, cocos2d::CCNode, getZOrder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(324, DefaultConv, cocos2d::CCNode, ignoreAnchorPointForPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(325, DefaultConv, cocos2d::CCNode, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(326, DefaultConv, cocos2d::CCNode, isIgnoreAnchorPointForPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(327, DefaultConv, cocos2d::CCNode, isRunning)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(328, DefaultConv, cocos2d::CCNode, isVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(329, DefaultConv, cocos2d::CCNode, nodeToParentTransform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(330, DefaultConv, cocos2d::CCNode, nodeToWorldTransform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(331, DefaultConv, cocos2d::CCNode, onEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(332, DefaultConv, cocos2d::CCNode, onEnterTransitionDidFinish)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(333, DefaultConv, cocos2d::CCNode, onExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(334, DefaultConv, cocos2d::CCNode, onExitTransitionDidStart)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(335, DefaultConv, cocos2d::CCNode, parentToNodeTransform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(336, DefaultConv, cocos2d::CCNode, pauseSchedulerAndActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(337, DefaultConv, cocos2d::CCNode, registerScriptHandler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(338, DefaultConv, cocos2d::CCNode, removeAllChildren)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(339, DefaultConv, cocos2d::CCNode, removeAllChildrenWithCleanup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(340, DefaultConv, cocos2d::CCNode, removeAllComponents)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(341, DefaultConv, cocos2d::CCNode, removeChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(342, DefaultConv, cocos2d::CCNode, removeChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(343, DefaultConv, cocos2d::CCNode, removeChildByTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(344, DefaultConv, cocos2d::CCNode, removeChildByTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(345, DefaultConv, cocos2d::CCNode, removeComponent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(346, DefaultConv, cocos2d::CCNode, removeComponent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(347, DefaultConv, cocos2d::CCNode, removeFromParent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(348, DefaultConv, cocos2d::CCNode, removeFromParentAndCleanup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(349, DefaultConv, cocos2d::CCNode, removeMeAndCleanup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(350, DefaultConv, cocos2d::CCNode, reorderChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(351, DefaultConv, cocos2d::CCNode, resumeSchedulerAndActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(352, DefaultConv, cocos2d::CCNode, runAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(353, DefaultConv, cocos2d::CCNode, schedule)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(354, DefaultConv, cocos2d::CCNode, schedule)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(355, DefaultConv, cocos2d::CCNode, scheduleUpdate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(356, DefaultConv, cocos2d::CCNode, setActionManager)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(357, DefaultConv, cocos2d::CCNode, setAnchorPoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(358, DefaultConv, cocos2d::CCNode, setContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(359, DefaultConv, cocos2d::CCNode, setGLServerState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(360, DefaultConv, cocos2d::CCNode, setGrid)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(361, DefaultConv, cocos2d::CCNode, setOrderOfArrival)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(362, DefaultConv, cocos2d::CCNode, setParent)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(363, DefaultConv, cocos2d::CCNode, setPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(364, DefaultConv, cocos2d::CCNode, setPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(365, DefaultConv, cocos2d::CCNode, setPositionX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(366, DefaultConv, cocos2d::CCNode, setPositionY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(367, DefaultConv, cocos2d::CCNode, setRotation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(368, DefaultConv, cocos2d::CCNode, setRotationX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(369, DefaultConv, cocos2d::CCNode, setRotationY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(370, DefaultConv, cocos2d::CCNode, setScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(371, DefaultConv, cocos2d::CCNode, setScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(372, DefaultConv, cocos2d::CCNode, setScaleX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(373, DefaultConv, cocos2d::CCNode, setScaleY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(374, DefaultConv, cocos2d::CCNode, setScheduler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(375, DefaultConv, cocos2d::CCNode, setShaderProgram)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(376, DefaultConv, cocos2d::CCNode, setSkewX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(377, DefaultConv, cocos2d::CCNode, setSkewY)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(378, DefaultConv, cocos2d::CCNode, setUserData)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(379, DefaultConv, cocos2d::CCNode, setUserObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(380, DefaultConv, cocos2d::CCNode, setVertexZ)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(381, DefaultConv, cocos2d::CCNode, setVisible)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(382, DefaultConv, cocos2d::CCNode, setZOrder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(383, DefaultConv, cocos2d::CCNode, sortAllChildren)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(384, DefaultConv, cocos2d::CCNode, stopActionByTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(385, DefaultConv, cocos2d::CCNode, stopAllActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(386, DefaultConv, cocos2d::CCNode, unregisterScriptHandler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(387, DefaultConv, cocos2d::CCNode, unschedule)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(388, DefaultConv, cocos2d::CCNode, unscheduleAllSelectors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(389, DefaultConv, cocos2d::CCNode, unscheduleUpdate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(390, DefaultConv, cocos2d::CCNode, update)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(391, DefaultConv, cocos2d::CCNode, updateTransform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(392, DefaultConv, cocos2d::CCNode, updateTweenAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(393, DefaultConv, cocos2d::CCNode, visit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(394, DefaultConv, cocos2d::CCNode, worldToNodeTransform)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(395, DefaultConv, cocos2d::CCNode, destructor)
	}
};

template<class Derived>
struct Modify<Derived, EditorOptionsLayer> : ModifyBase<Modify<Derived, EditorOptionsLayer>> {
	using ModifyBase<Modify<Derived, EditorOptionsLayer>>::ModifyBase;
	using Base = EditorOptionsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(915, DefaultConv, EditorOptionsLayer, onButtonsPerRow)
	}
};

template<class Derived>
struct Modify<Derived, CCAnimatedSprite> : ModifyBase<Modify<Derived, CCAnimatedSprite>> {
	using ModifyBase<Modify<Derived, CCAnimatedSprite>>::ModifyBase;
	using Base = CCAnimatedSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(709, DefaultConv, CCAnimatedSprite, runAnimation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(710, DefaultConv, CCAnimatedSprite, tweenToAnimation)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCObject> : ModifyBase<Modify<Derived, cocos2d::CCObject>> {
	using ModifyBase<Modify<Derived, cocos2d::CCObject>>::ModifyBase;
	using Base = cocos2d::CCObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(411, DefaultConv, cocos2d::CCObject, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(412, DefaultConv, cocos2d::CCObject, acceptVisitor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(413, DefaultConv, cocos2d::CCObject, autorelease)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(414, DefaultConv, cocos2d::CCObject, canEncode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(415, DefaultConv, cocos2d::CCObject, encodeWithCoder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(416, DefaultConv, cocos2d::CCObject, getTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(417, DefaultConv, cocos2d::CCObject, isEqual)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(418, DefaultConv, cocos2d::CCObject, release)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(419, DefaultConv, cocos2d::CCObject, retain)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(420, DefaultConv, cocos2d::CCObject, setTag)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(421, DefaultConv, cocos2d::CCObject, destructor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCScheduler> : ModifyBase<Modify<Derived, cocos2d::CCScheduler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCScheduler>>::ModifyBase;
	using Base = cocos2d::CCScheduler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(438, DefaultConv, cocos2d::CCScheduler, scheduleSelector)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(439, DefaultConv, cocos2d::CCScheduler, scheduleUpdateForTarget)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(440, DefaultConv, cocos2d::CCScheduler, unscheduleAllForTarget)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(441, DefaultConv, cocos2d::CCScheduler, update)
	}
};

template<class Derived>
struct Modify<Derived, HardStreak> : ModifyBase<Modify<Derived, HardStreak>> {
	using ModifyBase<Modify<Derived, HardStreak>>::ModifyBase;
	using Base = HardStreak;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1577, DefaultConv, HardStreak, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1578, DefaultConv, HardStreak, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1579, DefaultConv, HardStreak, addPoint)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1580, DefaultConv, HardStreak, clearBehindXPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1581, DefaultConv, HardStreak, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1582, DefaultConv, HardStreak, firstSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1583, DefaultConv, HardStreak, normalizeAngle)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1584, DefaultConv, HardStreak, quadCornerOffset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1585, DefaultConv, HardStreak, reset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1586, DefaultConv, HardStreak, resumeStroke)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1587, DefaultConv, HardStreak, stopStroke)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1588, DefaultConv, HardStreak, updateStroke)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCAnimate> : ModifyBase<Modify<Derived, cocos2d::CCAnimate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCAnimate>>::ModifyBase;
	using Base = cocos2d::CCAnimate;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(3, DefaultConv, cocos2d::CCAnimate, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLabelTTF> : ModifyBase<Modify<Derived, cocos2d::CCLabelTTF>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLabelTTF>>::ModifyBase;
	using Base = cocos2d::CCLabelTTF;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(146, DefaultConv, cocos2d::CCLabelTTF, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(147, DefaultConv, cocos2d::CCLabelTTF, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(148, DefaultConv, cocos2d::CCLabelTTF, updateTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(149, DefaultConv, cocos2d::CCLabelTTF, setString)
	}
};

template<class Derived>
struct Modify<Derived, GJRequestCell> : ModifyBase<Modify<Derived, GJRequestCell>> {
	using ModifyBase<Modify<Derived, GJRequestCell>>::ModifyBase;
	using Base = GJRequestCell;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenu> : ModifyBase<Modify<Derived, cocos2d::CCMenu>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenu>>::ModifyBase;
	using Base = cocos2d::CCMenu;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(215, DefaultConv, cocos2d::CCMenu, alignItemsHorizontallyWithPadding)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(216, DefaultConv, cocos2d::CCMenu, alignItemsVerticallyWithPadding)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(217, DefaultConv, cocos2d::CCMenu, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(218, DefaultConv, cocos2d::CCMenu, createWithArray)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(219, DefaultConv, cocos2d::CCMenu, createWithItem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(220, DefaultConv, cocos2d::CCMenu, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(221, DefaultConv, cocos2d::CCMenu, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(222, DefaultConv, cocos2d::CCMenu, addChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(223, DefaultConv, cocos2d::CCMenu, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(224, DefaultConv, cocos2d::CCMenu, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(225, DefaultConv, cocos2d::CCMenu, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(226, DefaultConv, cocos2d::CCMenu, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(227, DefaultConv, cocos2d::CCMenu, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(228, DefaultConv, cocos2d::CCMenu, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(229, DefaultConv, cocos2d::CCMenu, onExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(230, DefaultConv, cocos2d::CCMenu, removeChild)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(231, DefaultConv, cocos2d::CCMenu, initWithArray)
	}
};

template<class Derived>
struct Modify<Derived, FMODSound> : ModifyBase<Modify<Derived, FMODSound>> {
	using ModifyBase<Modify<Derived, FMODSound>>::ModifyBase;
	using Base = FMODSound;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, SetGroupIDLayer> : ModifyBase<Modify<Derived, SetGroupIDLayer>> {
	using ModifyBase<Modify<Derived, SetGroupIDLayer>>::ModifyBase;
	using Base = SetGroupIDLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2132, DefaultConv, SetGroupIDLayer, onNextGroupID1)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2133, DefaultConv, SetGroupIDLayer, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2134, DefaultConv, SetGroupIDLayer, updateGroupIDLabel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2135, DefaultConv, SetGroupIDLayer, destructor)
	}
};

template<class Derived>
struct Modify<Derived, EffectGameObject> : ModifyBase<Modify<Derived, EffectGameObject>> {
	using ModifyBase<Modify<Derived, EffectGameObject>>::ModifyBase;
	using Base = EffectGameObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1021, DefaultConv, EffectGameObject, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1022, DefaultConv, EffectGameObject, getTargetColorIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1023, DefaultConv, EffectGameObject, triggerObject)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseInOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseInOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseInOut>>::ModifyBase;
	using Base = cocos2d::CCEaseInOut;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(100, DefaultConv, cocos2d::CCEaseInOut, create)
	}
};

template<class Derived>
struct Modify<Derived, GJGroundLayer> : ModifyBase<Modify<Derived, GJGroundLayer>> {
	using ModifyBase<Modify<Derived, GJGroundLayer>>::ModifyBase;
	using Base = GJGroundLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerRGBA> : ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerRGBA>>::ModifyBase;
	using Base = cocos2d::CCLayerRGBA;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(200, DefaultConv, cocos2d::CCLayerRGBA, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(201, DefaultConv, cocos2d::CCLayerRGBA, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(202, DefaultConv, cocos2d::CCLayerRGBA, getOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(203, DefaultConv, cocos2d::CCLayerRGBA, getDisplayedOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(204, DefaultConv, cocos2d::CCLayerRGBA, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(205, DefaultConv, cocos2d::CCLayerRGBA, updateDisplayedOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(206, DefaultConv, cocos2d::CCLayerRGBA, isCascadeOpacityEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(207, DefaultConv, cocos2d::CCLayerRGBA, setCascadeOpacityEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(208, DefaultConv, cocos2d::CCLayerRGBA, getColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(209, DefaultConv, cocos2d::CCLayerRGBA, getDisplayedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(210, DefaultConv, cocos2d::CCLayerRGBA, setColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(211, DefaultConv, cocos2d::CCLayerRGBA, updateDisplayedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(212, DefaultConv, cocos2d::CCLayerRGBA, isCascadeColorEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(213, DefaultConv, cocos2d::CCLayerRGBA, setCascadeColorEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(214, DefaultConv, cocos2d::CCLayerRGBA, destructor)
	}
};

template<class Derived>
struct Modify<Derived, UploadActionDelegate> : ModifyBase<Modify<Derived, UploadActionDelegate>> {
	using ModifyBase<Modify<Derived, UploadActionDelegate>>::ModifyBase;
	using Base = UploadActionDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelManagerDelegate> : ModifyBase<Modify<Derived, LevelManagerDelegate>> {
	using ModifyBase<Modify<Derived, LevelManagerDelegate>>::ModifyBase;
	using Base = LevelManagerDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTouch> : ModifyBase<Modify<Derived, cocos2d::CCTouch>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTouch>>::ModifyBase;
	using Base = cocos2d::CCTouch;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(557, DefaultConv, cocos2d::CCTouch, getDelta)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(558, DefaultConv, cocos2d::CCTouch, getLocationInView)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(559, DefaultConv, cocos2d::CCTouch, getPreviousLocationInView)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(560, DefaultConv, cocos2d::CCTouch, getLocation)
	}
};

template<class Derived>
struct Modify<Derived, DialogLayer> : ModifyBase<Modify<Derived, DialogLayer>> {
	using ModifyBase<Modify<Derived, DialogLayer>>::ModifyBase;
	using Base = DialogLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(890, DefaultConv, DialogLayer, createDialogLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(893, DefaultConv, DialogLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(894, DefaultConv, DialogLayer, onEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(895, DefaultConv, DialogLayer, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(896, DefaultConv, DialogLayer, ccTouchMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(897, DefaultConv, DialogLayer, ccTouchEnded)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(898, DefaultConv, DialogLayer, ccTouchCancelled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(899, DefaultConv, DialogLayer, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(900, DefaultConv, DialogLayer, keyBackClicked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(901, DefaultConv, DialogLayer, keyDown)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(902, DefaultConv, DialogLayer, fadeInTextFinished)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCLayerColor> : ModifyBase<Modify<Derived, cocos2d::CCLayerColor>> {
	using ModifyBase<Modify<Derived, cocos2d::CCLayerColor>>::ModifyBase;
	using Base = cocos2d::CCLayerColor;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(187, DefaultConv, cocos2d::CCLayerColor, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(188, DefaultConv, cocos2d::CCLayerColor, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(189, DefaultConv, cocos2d::CCLayerColor, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(190, DefaultConv, cocos2d::CCLayerColor, getBlendFunc)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(191, DefaultConv, cocos2d::CCLayerColor, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(192, DefaultConv, cocos2d::CCLayerColor, initWithColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(193, DefaultConv, cocos2d::CCLayerColor, initWithColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(194, DefaultConv, cocos2d::CCLayerColor, setBlendFunc)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(195, DefaultConv, cocos2d::CCLayerColor, setColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(196, DefaultConv, cocos2d::CCLayerColor, setContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(197, DefaultConv, cocos2d::CCLayerColor, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(198, DefaultConv, cocos2d::CCLayerColor, updateColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(199, DefaultConv, cocos2d::CCLayerColor, destructor)
	}
};

template<class Derived>
struct Modify<Derived, GJCommentListLayer> : ModifyBase<Modify<Derived, GJCommentListLayer>> {
	using ModifyBase<Modify<Derived, GJCommentListLayer>>::ModifyBase;
	using Base = GJCommentListLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1134, DefaultConv, GJCommentListLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1135, DefaultConv, GJCommentListLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCNodeRGBA> : ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>> {
	using ModifyBase<Modify<Derived, cocos2d::CCNodeRGBA>>::ModifyBase;
	using Base = cocos2d::CCNodeRGBA;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(396, DefaultConv, cocos2d::CCNodeRGBA, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(397, DefaultConv, cocos2d::CCNodeRGBA, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(398, DefaultConv, cocos2d::CCNodeRGBA, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(399, DefaultConv, cocos2d::CCNodeRGBA, getOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(400, DefaultConv, cocos2d::CCNodeRGBA, getDisplayedOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(401, DefaultConv, cocos2d::CCNodeRGBA, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(402, DefaultConv, cocos2d::CCNodeRGBA, updateDisplayedOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(403, DefaultConv, cocos2d::CCNodeRGBA, isCascadeOpacityEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(404, DefaultConv, cocos2d::CCNodeRGBA, setCascadeOpacityEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(405, DefaultConv, cocos2d::CCNodeRGBA, getColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(406, DefaultConv, cocos2d::CCNodeRGBA, getDisplayedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(407, DefaultConv, cocos2d::CCNodeRGBA, setColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(408, DefaultConv, cocos2d::CCNodeRGBA, updateDisplayedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(409, DefaultConv, cocos2d::CCNodeRGBA, isCascadeColorEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(410, DefaultConv, cocos2d::CCNodeRGBA, setCascadeColorEnabled)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeyboardHandler> : ModifyBase<Modify<Derived, cocos2d::CCKeyboardHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeyboardHandler>>::ModifyBase;
	using Base = cocos2d::CCKeyboardHandler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(134, DefaultConv, cocos2d::CCKeyboardHandler, handlerWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(135, DefaultConv, cocos2d::CCKeyboardHandler, initWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(136, DefaultConv, cocos2d::CCKeyboardHandler, destructor)
	}
};

template<class Derived>
struct Modify<Derived, GaragePage> : ModifyBase<Modify<Derived, GaragePage>> {
	using ModifyBase<Modify<Derived, GaragePage>>::ModifyBase;
	using Base = GaragePage;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1575, DefaultConv, GaragePage, init)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMouseDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCMouseDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMouseDispatcher>>::ModifyBase;
	using Base = cocos2d::CCMouseDispatcher;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCSpriteFrameCache> : ModifyBase<Modify<Derived, cocos2d::CCSpriteFrameCache>> {
	using ModifyBase<Modify<Derived, cocos2d::CCSpriteFrameCache>>::ModifyBase;
	using Base = cocos2d::CCSpriteFrameCache;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(517, DefaultConv, cocos2d::CCSpriteFrameCache, addSpriteFramesWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(518, DefaultConv, cocos2d::CCSpriteFrameCache, sharedSpriteFrameCache)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(519, DefaultConv, cocos2d::CCSpriteFrameCache, spriteFrameByName)
	}
};

template<class Derived>
struct Modify<Derived, GJAccountManager> : ModifyBase<Modify<Derived, GJAccountManager>> {
	using ModifyBase<Modify<Derived, GJAccountManager>>::ModifyBase;
	using Base = GJAccountManager;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LevelEditorLayer> : ModifyBase<Modify<Derived, LevelEditorLayer>> {
	using ModifyBase<Modify<Derived, LevelEditorLayer>>::ModifyBase;
	using Base = LevelEditorLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1626, DefaultConv, LevelEditorLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1627, DefaultConv, LevelEditorLayer, update)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1628, DefaultConv, LevelEditorLayer, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1629, DefaultConv, LevelEditorLayer, updateColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1630, DefaultConv, LevelEditorLayer, flipGravity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1631, DefaultConv, LevelEditorLayer, calculateColorValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1632, DefaultConv, LevelEditorLayer, addToGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1633, DefaultConv, LevelEditorLayer, removeFromGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1634, DefaultConv, LevelEditorLayer, timeForXPos)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1635, DefaultConv, LevelEditorLayer, xPosForTime)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1636, DefaultConv, LevelEditorLayer, levelSettingsUpdated)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1637, DefaultConv, LevelEditorLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1638, DefaultConv, LevelEditorLayer, activateTriggerEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1639, DefaultConv, LevelEditorLayer, addObjectFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1640, DefaultConv, LevelEditorLayer, addSpecial)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1641, DefaultConv, LevelEditorLayer, addToRedoList)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1642, DefaultConv, LevelEditorLayer, addToUndoList)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1643, DefaultConv, LevelEditorLayer, animateInDualGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1644, DefaultConv, LevelEditorLayer, checkCollisions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1645, DefaultConv, LevelEditorLayer, createBackground)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1646, DefaultConv, LevelEditorLayer, createGroundLayer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1647, DefaultConv, LevelEditorLayer, createObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1648, DefaultConv, LevelEditorLayer, createObjectsFromSetup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1649, DefaultConv, LevelEditorLayer, createObjectsFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1650, DefaultConv, LevelEditorLayer, getLastObjectX)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1651, DefaultConv, LevelEditorLayer, getLevelString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1652, DefaultConv, LevelEditorLayer, getNextColorChannel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1653, DefaultConv, LevelEditorLayer, getNextFreeBlockID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1654, DefaultConv, LevelEditorLayer, getNextFreeGroupID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1655, DefaultConv, LevelEditorLayer, getNextFreeItemID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1656, DefaultConv, LevelEditorLayer, getObjectRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1657, DefaultConv, LevelEditorLayer, getRelativeOffset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1658, DefaultConv, LevelEditorLayer, handleAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1659, DefaultConv, LevelEditorLayer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1660, DefaultConv, LevelEditorLayer, objectAtPosition)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1661, DefaultConv, LevelEditorLayer, objectMoved)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1662, DefaultConv, LevelEditorLayer, objectsInRect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1663, DefaultConv, LevelEditorLayer, onPlaytest)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1664, DefaultConv, LevelEditorLayer, onStopPlaytest)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1666, DefaultConv, LevelEditorLayer, playMusic)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1667, DefaultConv, LevelEditorLayer, recreateGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1668, DefaultConv, LevelEditorLayer, redoLastAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1669, DefaultConv, LevelEditorLayer, removeAllObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1670, DefaultConv, LevelEditorLayer, removeAllObjectsOfType)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1671, DefaultConv, LevelEditorLayer, removeObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1672, DefaultConv, LevelEditorLayer, removeSpecial)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1673, DefaultConv, LevelEditorLayer, resetMovingObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1674, DefaultConv, LevelEditorLayer, resetObjectVector)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1675, DefaultConv, LevelEditorLayer, resetToggledGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1676, DefaultConv, LevelEditorLayer, resetToggledGroupsAndObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1677, DefaultConv, LevelEditorLayer, resetUnusedColorChannels)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1678, DefaultConv, LevelEditorLayer, rotationForSlopeNearObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1679, DefaultConv, LevelEditorLayer, runColorEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1680, DefaultConv, LevelEditorLayer, setupLevelStart)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1681, DefaultConv, LevelEditorLayer, sortStickyGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1682, DefaultConv, LevelEditorLayer, stopTriggersInGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1683, DefaultConv, LevelEditorLayer, toggleDualMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1684, DefaultConv, LevelEditorLayer, toggleGroupPreview)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1685, DefaultConv, LevelEditorLayer, transferDefaultColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1686, DefaultConv, LevelEditorLayer, undoLastAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1687, DefaultConv, LevelEditorLayer, updateBGAndGColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1688, DefaultConv, LevelEditorLayer, updateBlendValues)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1689, DefaultConv, LevelEditorLayer, updateDualGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1690, DefaultConv, LevelEditorLayer, updateEditorMode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1691, DefaultConv, LevelEditorLayer, updateGameObjectsNew)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1692, DefaultConv, LevelEditorLayer, updateGround)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1693, DefaultConv, LevelEditorLayer, updateGroundWidth)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1694, DefaultConv, LevelEditorLayer, updateOptions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1695, DefaultConv, LevelEditorLayer, updateToggledGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1696, DefaultConv, LevelEditorLayer, updateVisibility)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCIMEDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCIMEDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCIMEDispatcher>>::ModifyBase;
	using Base = cocos2d::CCIMEDispatcher;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(126, DefaultConv, cocos2d::CCIMEDispatcher, sharedDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(127, DefaultConv, cocos2d::CCIMEDispatcher, addDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(128, DefaultConv, cocos2d::CCIMEDispatcher, removeDelegate)
	}
};

template<class Derived>
struct Modify<Derived, UserInfoDelegate> : ModifyBase<Modify<Derived, UserInfoDelegate>> {
	using ModifyBase<Modify<Derived, UserInfoDelegate>>::ModifyBase;
	using Base = UserInfoDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, Slider> : ModifyBase<Modify<Derived, Slider>> {
	using ModifyBase<Modify<Derived, Slider>>::ModifyBase;
	using Base = Slider;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2208, DefaultConv, Slider, getValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2209, DefaultConv, Slider, updateBar)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2210, DefaultConv, Slider, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseIn> : ModifyBase<Modify<Derived, cocos2d::CCEaseIn>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseIn>>::ModifyBase;
	using Base = cocos2d::CCEaseIn;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(99, DefaultConv, cocos2d::CCEaseIn, create)
	}
};

template<class Derived>
struct Modify<Derived, SetItemIDLayer> : ModifyBase<Modify<Derived, SetItemIDLayer>> {
	using ModifyBase<Modify<Derived, SetItemIDLayer>>::ModifyBase;
	using Base = SetItemIDLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2141, DefaultConv, SetItemIDLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCEaseElasticOut> : ModifyBase<Modify<Derived, cocos2d::CCEaseElasticOut>> {
	using ModifyBase<Modify<Derived, cocos2d::CCEaseElasticOut>>::ModifyBase;
	using Base = cocos2d::CCEaseElasticOut;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(98, DefaultConv, cocos2d::CCEaseElasticOut, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDirector> : ModifyBase<Modify<Derived, cocos2d::CCDirector>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDirector>>::ModifyBase;
	using Base = cocos2d::CCDirector;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(57, DefaultConv, cocos2d::CCDirector, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(58, DefaultConv, cocos2d::CCDirector, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(59, DefaultConv, cocos2d::CCDirector, getScheduler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(60, DefaultConv, cocos2d::CCDirector, setScheduler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(61, DefaultConv, cocos2d::CCDirector, getActionManager)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(62, DefaultConv, cocos2d::CCDirector, setActionManager)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(63, DefaultConv, cocos2d::CCDirector, getTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(64, DefaultConv, cocos2d::CCDirector, setTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(65, DefaultConv, cocos2d::CCDirector, getKeypadDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(66, DefaultConv, cocos2d::CCDirector, setKeypadDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(67, DefaultConv, cocos2d::CCDirector, getKeyboardDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(68, DefaultConv, cocos2d::CCDirector, setKeyboardDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(69, DefaultConv, cocos2d::CCDirector, getMouseDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(70, DefaultConv, cocos2d::CCDirector, setMouseDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(71, DefaultConv, cocos2d::CCDirector, getAccelerometer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(72, DefaultConv, cocos2d::CCDirector, setAccelerometer)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(73, DefaultConv, cocos2d::CCDirector, getDeltaTime)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(74, DefaultConv, cocos2d::CCDirector, getSceneDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(75, DefaultConv, cocos2d::CCDirector, setSceneDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(76, DefaultConv, cocos2d::CCDirector, getWinSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(77, DefaultConv, cocos2d::CCDirector, pushScene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(78, DefaultConv, cocos2d::CCDirector, replaceScene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(79, DefaultConv, cocos2d::CCDirector, resetSmoothFixCounter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(80, DefaultConv, cocos2d::CCDirector, sharedDirector)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(81, DefaultConv, cocos2d::CCDirector, calculateDeltaTime)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(82, DefaultConv, cocos2d::CCDirector, calculateMPF)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(83, DefaultConv, cocos2d::CCDirector, convertToGL)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(84, DefaultConv, cocos2d::CCDirector, drawScene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(85, DefaultConv, cocos2d::CCDirector, setNextScene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(86, DefaultConv, cocos2d::CCDirector, showStats)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(87, DefaultConv, cocos2d::CCDirector, updateContentScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(88, DefaultConv, cocos2d::CCDirector, popSceneWithTransition)
	}
};

template<class Derived>
struct Modify<Derived, ProfilePage> : ModifyBase<Modify<Derived, ProfilePage>> {
	using ModifyBase<Modify<Derived, ProfilePage>>::ModifyBase;
	using Base = ProfilePage;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2120, DefaultConv, ProfilePage, create)
	}
};

template<class Derived>
struct Modify<Derived, GameSoundManager> : ModifyBase<Modify<Derived, GameSoundManager>> {
	using ModifyBase<Modify<Derived, GameSoundManager>>::ModifyBase;
	using Base = GameSoundManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1541, DefaultConv, GameSoundManager, disableMetering)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1542, DefaultConv, GameSoundManager, enableMetering)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1543, DefaultConv, GameSoundManager, getMeteringValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1544, DefaultConv, GameSoundManager, playBackgroundMusic)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1545, DefaultConv, GameSoundManager, playEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1546, DefaultConv, GameSoundManager, stopBackgroundMusic)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1547, DefaultConv, GameSoundManager, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1548, DefaultConv, GameSoundManager, sharedManager)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCIMEDelegate> : ModifyBase<Modify<Derived, cocos2d::CCIMEDelegate>> {
	using ModifyBase<Modify<Derived, cocos2d::CCIMEDelegate>>::ModifyBase;
	using Base = cocos2d::CCIMEDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(124, DefaultConv, cocos2d::CCIMEDelegate, attachWithIME)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(125, DefaultConv, cocos2d::CCIMEDelegate, detachWithIME)
	}
};

template<class Derived>
struct Modify<Derived, CCMenuItemSpriteExtra> : ModifyBase<Modify<Derived, CCMenuItemSpriteExtra>> {
	using ModifyBase<Modify<Derived, CCMenuItemSpriteExtra>>::ModifyBase;
	using Base = CCMenuItemSpriteExtra;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(745, DefaultConv, CCMenuItemSpriteExtra, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(746, DefaultConv, CCMenuItemSpriteExtra, setSizeMult)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(747, DefaultConv, CCMenuItemSpriteExtra, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(749, DefaultConv, CCMenuItemSpriteExtra, init)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCArray> : ModifyBase<Modify<Derived, cocos2d::CCArray>> {
	using ModifyBase<Modify<Derived, cocos2d::CCArray>>::ModifyBase;
	using Base = cocos2d::CCArray;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(11, DefaultConv, cocos2d::CCArray, addObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(12, DefaultConv, cocos2d::CCArray, addObjectNew)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(13, DefaultConv, cocos2d::CCArray, addObjectsFromArray)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(14, DefaultConv, cocos2d::CCArray, containsObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(15, DefaultConv, cocos2d::CCArray, count)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(16, DefaultConv, cocos2d::CCArray, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(17, DefaultConv, cocos2d::CCArray, createWithObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(18, DefaultConv, cocos2d::CCArray, fastRemoveObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(19, DefaultConv, cocos2d::CCArray, fastRemoveObjectAtIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(20, DefaultConv, cocos2d::CCArray, fastRemoveObjectAtIndexNew)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(21, DefaultConv, cocos2d::CCArray, lastObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(22, DefaultConv, cocos2d::CCArray, objectAtIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(23, DefaultConv, cocos2d::CCArray, removeAllObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(24, DefaultConv, cocos2d::CCArray, removeLastObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(25, DefaultConv, cocos2d::CCArray, removeObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(26, DefaultConv, cocos2d::CCArray, removeObjectAtIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(27, DefaultConv, cocos2d::CCArray, stringAtIndex)
	}
};

template<class Derived>
struct Modify<Derived, ButtonSprite> : ModifyBase<Modify<Derived, ButtonSprite>> {
	using ModifyBase<Modify<Derived, ButtonSprite>>::ModifyBase;
	using Base = ButtonSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(701, DefaultConv, ButtonSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(703, DefaultConv, ButtonSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(704, DefaultConv, ButtonSprite, updateBGImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(705, DefaultConv, ButtonSprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(708, DefaultConv, ButtonSprite, setColor)
	}
};

template<class Derived>
struct Modify<Derived, CCLightFlash> : ModifyBase<Modify<Derived, CCLightFlash>> {
	using ModifyBase<Modify<Derived, CCLightFlash>>::ModifyBase;
	using Base = CCLightFlash;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(739, DefaultConv, CCLightFlash, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(740, DefaultConv, CCLightFlash, playEffect)
	}
};

template<class Derived>
struct Modify<Derived, TouchToggleAction> : ModifyBase<Modify<Derived, TouchToggleAction>> {
	using ModifyBase<Modify<Derived, TouchToggleAction>>::ModifyBase;
	using Base = TouchToggleAction;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2256, DefaultConv, TouchToggleAction, createFromString)
	}
};

template<class Derived>
struct Modify<Derived, ColorActionSprite> : ModifyBase<Modify<Derived, ColorActionSprite>> {
	using ModifyBase<Modify<Derived, ColorActionSprite>>::ModifyBase;
	using Base = ColorActionSprite;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDictionary> : ModifyBase<Modify<Derived, cocos2d::CCDictionary>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDictionary>>::ModifyBase;
	using Base = cocos2d::CCDictionary;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(46, DefaultConv, cocos2d::CCDictionary, allKeys)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(47, DefaultConv, cocos2d::CCDictionary, count)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(48, DefaultConv, cocos2d::CCDictionary, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(49, DefaultConv, cocos2d::CCDictionary, objectForKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(50, DefaultConv, cocos2d::CCDictionary, objectForKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(51, DefaultConv, cocos2d::CCDictionary, removeAllObjects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(52, DefaultConv, cocos2d::CCDictionary, removeObjectForKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(53, DefaultConv, cocos2d::CCDictionary, setObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(54, DefaultConv, cocos2d::CCDictionary, setObject)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(55, DefaultConv, cocos2d::CCDictionary, valueForKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(56, DefaultConv, cocos2d::CCDictionary, valueForKey)
	}
};

template<class Derived>
struct Modify<Derived, GJChallengeItem> : ModifyBase<Modify<Derived, GJChallengeItem>> {
	using ModifyBase<Modify<Derived, GJChallengeItem>>::ModifyBase;
	using Base = GJChallengeItem;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, AudioEffectsLayer> : ModifyBase<Modify<Derived, AudioEffectsLayer>> {
	using ModifyBase<Modify<Derived, AudioEffectsLayer>>::ModifyBase;
	using Base = AudioEffectsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(681, DefaultConv, AudioEffectsLayer, audioStep)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(682, DefaultConv, AudioEffectsLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(683, DefaultConv, AudioEffectsLayer, resetAudioVars)
	}
};

template<class Derived>
struct Modify<Derived, GJItemIcon> : ModifyBase<Modify<Derived, GJItemIcon>> {
	using ModifyBase<Modify<Derived, GJItemIcon>>::ModifyBase;
	using Base = GJItemIcon;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1273, DefaultConv, GJItemIcon, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCPoolManager> : ModifyBase<Modify<Derived, cocos2d::CCPoolManager>> {
	using ModifyBase<Modify<Derived, cocos2d::CCPoolManager>>::ModifyBase;
	using Base = cocos2d::CCPoolManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(426, DefaultConv, cocos2d::CCPoolManager, pop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(427, DefaultConv, cocos2d::CCPoolManager, sharedPoolManager)
	}
};

template<class Derived>
struct Modify<Derived, VideoOptionsLayer> : ModifyBase<Modify<Derived, VideoOptionsLayer>> {
	using ModifyBase<Modify<Derived, VideoOptionsLayer>>::ModifyBase;
	using Base = VideoOptionsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, PauseLayer> : ModifyBase<Modify<Derived, PauseLayer>> {
	using ModifyBase<Modify<Derived, PauseLayer>>::ModifyBase;
	using Base = PauseLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1804, DefaultConv, PauseLayer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1805, DefaultConv, PauseLayer, onEdit)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItem> : ModifyBase<Modify<Derived, cocos2d::CCMenuItem>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItem>>::ModifyBase;
	using Base = cocos2d::CCMenuItem;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(235, DefaultConv, cocos2d::CCMenuItem, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(236, DefaultConv, cocos2d::CCMenuItem, activate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(237, DefaultConv, cocos2d::CCMenuItem, selected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(238, DefaultConv, cocos2d::CCMenuItem, unselected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(239, DefaultConv, cocos2d::CCMenuItem, registerScriptTapHandler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(240, DefaultConv, cocos2d::CCMenuItem, unregisterScriptTapHandler)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(241, DefaultConv, cocos2d::CCMenuItem, isEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(242, DefaultConv, cocos2d::CCMenuItem, setEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(243, DefaultConv, cocos2d::CCMenuItem, isSelected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(244, DefaultConv, cocos2d::CCMenuItem, setTarget)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(245, DefaultConv, cocos2d::CCMenuItem, rect)
	}
};

template<class Derived>
struct Modify<Derived, GJListLayer> : ModifyBase<Modify<Derived, GJListLayer>> {
	using ModifyBase<Modify<Derived, GJListLayer>>::ModifyBase;
	using Base = GJListLayer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1275, DefaultConv, GJListLayer, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1276, DefaultConv, GJListLayer, create)
	}
};

template<class Derived>
struct Modify<Derived, GJSpiderSprite> : ModifyBase<Modify<Derived, GJSpiderSprite>> {
	using ModifyBase<Modify<Derived, GJSpiderSprite>>::ModifyBase;
	using Base = GJSpiderSprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1306, DefaultConv, GJSpiderSprite, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1307, DefaultConv, GJSpiderSprite, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1308, DefaultConv, GJSpiderSprite, create)
	}
};

template<class Derived>
struct Modify<Derived, GJScaleControl> : ModifyBase<Modify<Derived, GJScaleControl>> {
	using ModifyBase<Modify<Derived, GJScaleControl>>::ModifyBase;
	using Base = GJScaleControl;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJEffectManager> : ModifyBase<Modify<Derived, GJEffectManager>> {
	using ModifyBase<Modify<Derived, GJEffectManager>>::ModifyBase;
	using Base = GJEffectManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1156, DefaultConv, GJEffectManager, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1157, DefaultConv, GJEffectManager, activeColorForIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1158, DefaultConv, GJEffectManager, activeOpacityForIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1159, DefaultConv, GJEffectManager, addAllInheritedColorActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1160, DefaultConv, GJEffectManager, addGroupPulseEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1161, DefaultConv, GJEffectManager, calculateBaseActiveColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1162, DefaultConv, GJEffectManager, calculateInheritedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1163, DefaultConv, GJEffectManager, calculateLightBGColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1164, DefaultConv, GJEffectManager, colorActionChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1165, DefaultConv, GJEffectManager, colorExists)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1166, DefaultConv, GJEffectManager, colorForEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1167, DefaultConv, GJEffectManager, colorForGroupID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1168, DefaultConv, GJEffectManager, colorForIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1169, DefaultConv, GJEffectManager, colorForPulseEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1170, DefaultConv, GJEffectManager, countChangedForItem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1171, DefaultConv, GJEffectManager, countForItem)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1172, DefaultConv, GJEffectManager, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1173, DefaultConv, GJEffectManager, createFollowCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1174, DefaultConv, GJEffectManager, createMoveCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1175, DefaultConv, GJEffectManager, createPlayerFollowCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1176, DefaultConv, GJEffectManager, createRotateCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1177, DefaultConv, GJEffectManager, getAllColorActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1178, DefaultConv, GJEffectManager, getAllColorSprites)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1179, DefaultConv, GJEffectManager, getColorAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1180, DefaultConv, GJEffectManager, getColorSprite)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1181, DefaultConv, GJEffectManager, getCurrentStateString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1182, DefaultConv, GJEffectManager, getLoadedMoveOffset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1183, DefaultConv, GJEffectManager, getMixedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1184, DefaultConv, GJEffectManager, getOpacityActionForGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1185, DefaultConv, GJEffectManager, getSaveString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1186, DefaultConv, GJEffectManager, handleObjectCollision)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1187, DefaultConv, GJEffectManager, hasActiveDualTouch)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1188, DefaultConv, GJEffectManager, hasBeenTriggered)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1189, DefaultConv, GJEffectManager, hasPulseEffectForGroupID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1190, DefaultConv, GJEffectManager, isGroupEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1191, DefaultConv, GJEffectManager, keyForGroupIDColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1192, DefaultConv, GJEffectManager, loadState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1193, DefaultConv, GJEffectManager, objectsCollided)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1194, DefaultConv, GJEffectManager, opacityForIndex)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1195, DefaultConv, GJEffectManager, opacityModForGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1196, DefaultConv, GJEffectManager, playerButton)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1197, DefaultConv, GJEffectManager, playerDied)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1198, DefaultConv, GJEffectManager, postCollisionCheck)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1199, DefaultConv, GJEffectManager, preCollisionCheck)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1200, DefaultConv, GJEffectManager, prepareMoveActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1201, DefaultConv, GJEffectManager, processColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1202, DefaultConv, GJEffectManager, processCopyColorPulseActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1203, DefaultConv, GJEffectManager, processInheritedColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1204, DefaultConv, GJEffectManager, processPulseActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1205, DefaultConv, GJEffectManager, registerCollisionTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1206, DefaultConv, GJEffectManager, removeAllPulseActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1207, DefaultConv, GJEffectManager, removeColorAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1208, DefaultConv, GJEffectManager, reset)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1209, DefaultConv, GJEffectManager, resetColorCache)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1210, DefaultConv, GJEffectManager, resetEffects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1211, DefaultConv, GJEffectManager, resetMoveActions)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1212, DefaultConv, GJEffectManager, resetToggledGroups)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1213, DefaultConv, GJEffectManager, resetTriggeredIDs)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1214, DefaultConv, GJEffectManager, runCountTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1215, DefaultConv, GJEffectManager, runDeathTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1216, DefaultConv, GJEffectManager, runOpacityActionOnGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1217, DefaultConv, GJEffectManager, runPulseEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1218, DefaultConv, GJEffectManager, runTouchTriggerCommand)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1219, DefaultConv, GJEffectManager, setColorAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1220, DefaultConv, GJEffectManager, setFollowing)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1221, DefaultConv, GJEffectManager, setupFromString)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1222, DefaultConv, GJEffectManager, shouldBlend)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1223, DefaultConv, GJEffectManager, spawnGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1224, DefaultConv, GJEffectManager, stopActionsForTrigger)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1225, DefaultConv, GJEffectManager, stopMoveActionsForGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1226, DefaultConv, GJEffectManager, storeTriggeredID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1227, DefaultConv, GJEffectManager, toggleGroup)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1228, DefaultConv, GJEffectManager, traverseInheritanceChain)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1229, DefaultConv, GJEffectManager, updateActiveOpacityEffects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1230, DefaultConv, GJEffectManager, updateColorAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1231, DefaultConv, GJEffectManager, updateColorEffects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1232, DefaultConv, GJEffectManager, updateColors)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1233, DefaultConv, GJEffectManager, updateEffects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1234, DefaultConv, GJEffectManager, updateOpacityAction)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1235, DefaultConv, GJEffectManager, updateOpacityEffects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1236, DefaultConv, GJEffectManager, updatePulseEffects)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1237, DefaultConv, GJEffectManager, updateSpawnTriggers)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1238, DefaultConv, GJEffectManager, wasFollowing)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1239, DefaultConv, GJEffectManager, wouldCreateLoop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1240, DefaultConv, GJEffectManager, destructor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCTextureCache> : ModifyBase<Modify<Derived, cocos2d::CCTextureCache>> {
	using ModifyBase<Modify<Derived, cocos2d::CCTextureCache>>::ModifyBase;
	using Base = cocos2d::CCTextureCache;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(553, DefaultConv, cocos2d::CCTextureCache, addImage)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(554, DefaultConv, cocos2d::CCTextureCache, sharedTextureCache)
	}
};

template<class Derived>
struct Modify<Derived, LevelSelectLayer> : ModifyBase<Modify<Derived, LevelSelectLayer>> {
	using ModifyBase<Modify<Derived, LevelSelectLayer>>::ModifyBase;
	using Base = LevelSelectLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDrawNode> : ModifyBase<Modify<Derived, cocos2d::CCDrawNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDrawNode>>::ModifyBase;
	using Base = cocos2d::CCDrawNode;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(89, DefaultConv, cocos2d::CCDrawNode, clear)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(90, DefaultConv, cocos2d::CCDrawNode, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(91, DefaultConv, cocos2d::CCDrawNode, drawPolygon)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(92, DefaultConv, cocos2d::CCDrawNode, drawSegment)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(93, DefaultConv, cocos2d::CCDrawNode, getBlendFunc)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(94, DefaultConv, cocos2d::CCDrawNode, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(95, DefaultConv, cocos2d::CCDrawNode, setBlendFunc)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(96, DefaultConv, cocos2d::CCDrawNode, draw)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(97, DefaultConv, cocos2d::CCDrawNode, destructor)
	}
};

template<class Derived>
struct Modify<Derived, SetupOpacityPopup> : ModifyBase<Modify<Derived, SetupOpacityPopup>> {
	using ModifyBase<Modify<Derived, SetupOpacityPopup>>::ModifyBase;
	using Base = SetupOpacityPopup;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2171, DefaultConv, SetupOpacityPopup, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2172, DefaultConv, SetupOpacityPopup, onTargetIDArrow)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2173, DefaultConv, SetupOpacityPopup, textChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2174, DefaultConv, SetupOpacityPopup, updateTargetID)
	}
};

template<class Derived>
struct Modify<Derived, GJAccountBackupDelegate> : ModifyBase<Modify<Derived, GJAccountBackupDelegate>> {
	using ModifyBase<Modify<Derived, GJAccountBackupDelegate>>::ModifyBase;
	using Base = GJAccountBackupDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCImage> : ModifyBase<Modify<Derived, cocos2d::CCImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCImage>>::ModifyBase;
	using Base = cocos2d::CCImage;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(129, DefaultConv, cocos2d::CCImage, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(130, DefaultConv, cocos2d::CCImage, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(131, DefaultConv, cocos2d::CCImage, initWithImageData)
	}
};

template<class Derived>
struct Modify<Derived, LevelSettingsLayer> : ModifyBase<Modify<Derived, LevelSettingsLayer>> {
	using ModifyBase<Modify<Derived, LevelSettingsLayer>>::ModifyBase;
	using Base = LevelSettingsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GJRotationControlDelegate> : ModifyBase<Modify<Derived, GJRotationControlDelegate>> {
	using ModifyBase<Modify<Derived, GJRotationControlDelegate>>::ModifyBase;
	using Base = GJRotationControlDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCCallFuncO> : ModifyBase<Modify<Derived, cocos2d::CCCallFuncO>> {
	using ModifyBase<Modify<Derived, cocos2d::CCCallFuncO>>::ModifyBase;
	using Base = cocos2d::CCCallFuncO;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(31, DefaultConv, cocos2d::CCCallFuncO, create)
	}
};

template<class Derived>
struct Modify<Derived, ColorSelectPopup> : ModifyBase<Modify<Derived, ColorSelectPopup>> {
	using ModifyBase<Modify<Derived, ColorSelectPopup>>::ModifyBase;
	using Base = ColorSelectPopup;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeypadHandler> : ModifyBase<Modify<Derived, cocos2d::CCKeypadHandler>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeypadHandler>>::ModifyBase;
	using Base = cocos2d::CCKeypadHandler;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(137, DefaultConv, cocos2d::CCKeypadHandler, handlerWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(138, DefaultConv, cocos2d::CCKeypadHandler, initWithDelegate)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(139, DefaultConv, cocos2d::CCKeypadHandler, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(140, DefaultConv, cocos2d::CCKeypadHandler, getDelegate)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCScale9Sprite> : ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCScale9Sprite>>::ModifyBase;
	using Base = cocos2d::extension::CCScale9Sprite;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(596, DefaultConv, cocos2d::extension::CCScale9Sprite, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(597, DefaultConv, cocos2d::extension::CCScale9Sprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(598, DefaultConv, cocos2d::extension::CCScale9Sprite, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(599, DefaultConv, cocos2d::extension::CCScale9Sprite, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(600, DefaultConv, cocos2d::extension::CCScale9Sprite, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(601, DefaultConv, cocos2d::extension::CCScale9Sprite, setContentSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(602, DefaultConv, cocos2d::extension::CCScale9Sprite, visit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(603, DefaultConv, cocos2d::extension::CCScale9Sprite, getOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(604, DefaultConv, cocos2d::extension::CCScale9Sprite, setOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(605, DefaultConv, cocos2d::extension::CCScale9Sprite, updateDisplayedOpacity)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(606, DefaultConv, cocos2d::extension::CCScale9Sprite, getColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(607, DefaultConv, cocos2d::extension::CCScale9Sprite, setColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(608, DefaultConv, cocos2d::extension::CCScale9Sprite, updateDisplayedColor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(609, DefaultConv, cocos2d::extension::CCScale9Sprite, setOpacityModifyRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(610, DefaultConv, cocos2d::extension::CCScale9Sprite, isOpacityModifyRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(611, DefaultConv, cocos2d::extension::CCScale9Sprite, getPreferredSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(612, DefaultConv, cocos2d::extension::CCScale9Sprite, setPreferredSize)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(613, DefaultConv, cocos2d::extension::CCScale9Sprite, getCapInsets)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(614, DefaultConv, cocos2d::extension::CCScale9Sprite, setCapInsets)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(615, DefaultConv, cocos2d::extension::CCScale9Sprite, getInsetLeft)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(616, DefaultConv, cocos2d::extension::CCScale9Sprite, setInsetLeft)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(617, DefaultConv, cocos2d::extension::CCScale9Sprite, getInsetTop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(618, DefaultConv, cocos2d::extension::CCScale9Sprite, setInsetTop)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(619, DefaultConv, cocos2d::extension::CCScale9Sprite, getInsetRight)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(620, DefaultConv, cocos2d::extension::CCScale9Sprite, setInsetRight)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(621, DefaultConv, cocos2d::extension::CCScale9Sprite, getInsetBottom)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(622, DefaultConv, cocos2d::extension::CCScale9Sprite, setInsetBottom)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(623, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithBatchNode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(624, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithBatchNode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(625, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(626, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(627, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(628, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(629, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(630, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithSpriteFrame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(631, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(632, DefaultConv, cocos2d::extension::CCScale9Sprite, initWithSpriteFrameName)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(633, DefaultConv, cocos2d::extension::CCScale9Sprite, updateWithBatchNode)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(634, DefaultConv, cocos2d::extension::CCScale9Sprite, setSpriteFrame)
	}
};

template<class Derived>
struct Modify<Derived, DailyLevelPage> : ModifyBase<Modify<Derived, DailyLevelPage>> {
	using ModifyBase<Modify<Derived, DailyLevelPage>>::ModifyBase;
	using Base = DailyLevelPage;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCHide> : ModifyBase<Modify<Derived, cocos2d::CCHide>> {
	using ModifyBase<Modify<Derived, cocos2d::CCHide>>::ModifyBase;
	using Base = cocos2d::CCHide;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(123, DefaultConv, cocos2d::CCHide, create)
	}
};

template<class Derived>
struct Modify<Derived, GJComment> : ModifyBase<Modify<Derived, GJComment>> {
	using ModifyBase<Modify<Derived, GJComment>>::ModifyBase;
	using Base = GJComment;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1131, DefaultConv, GJComment, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1132, DefaultConv, GJComment, init)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCMenuItemImage> : ModifyBase<Modify<Derived, cocos2d::CCMenuItemImage>> {
	using ModifyBase<Modify<Derived, cocos2d::CCMenuItemImage>>::ModifyBase;
	using Base = cocos2d::CCMenuItemImage;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(246, DefaultConv, cocos2d::CCMenuItemImage, init)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCKeyboardDispatcher> : ModifyBase<Modify<Derived, cocos2d::CCKeyboardDispatcher>> {
	using ModifyBase<Modify<Derived, cocos2d::CCKeyboardDispatcher>>::ModifyBase;
	using Base = cocos2d::CCKeyboardDispatcher;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(132, DefaultConv, cocos2d::CCKeyboardDispatcher, dispatchKeyboardMSG)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(133, DefaultConv, cocos2d::CCKeyboardDispatcher, keyToString)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCBMFontConfiguration> : ModifyBase<Modify<Derived, cocos2d::CCBMFontConfiguration>> {
	using ModifyBase<Modify<Derived, cocos2d::CCBMFontConfiguration>>::ModifyBase;
	using Base = cocos2d::CCBMFontConfiguration;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(29, DefaultConv, cocos2d::CCBMFontConfiguration, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControl> : ModifyBase<Modify<Derived, cocos2d::extension::CCControl>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControl>>::ModifyBase;
	using Base = cocos2d::extension::CCControl;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(570, DefaultConv, cocos2d::extension::CCControl, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(571, DefaultConv, cocos2d::extension::CCControl, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(572, DefaultConv, cocos2d::extension::CCControl, sendActionsForControlEvents)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(573, DefaultConv, cocos2d::extension::CCControl, registerWithTouchDispatcher)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(574, DefaultConv, cocos2d::extension::CCControl, setOpacityModifyRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(575, DefaultConv, cocos2d::extension::CCControl, onExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(576, DefaultConv, cocos2d::extension::CCControl, isTouchInside)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(577, DefaultConv, cocos2d::extension::CCControl, setEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(578, DefaultConv, cocos2d::extension::CCControl, onEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(579, DefaultConv, cocos2d::extension::CCControl, isEnabled)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(580, DefaultConv, cocos2d::extension::CCControl, setSelected)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(581, DefaultConv, cocos2d::extension::CCControl, isOpacityModifyRGB)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(582, DefaultConv, cocos2d::extension::CCControl, setHighlighted)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(583, DefaultConv, cocos2d::extension::CCControl, needsLayout)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(584, DefaultConv, cocos2d::extension::CCControl, getTouchLocation)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(585, DefaultConv, cocos2d::extension::CCControl, isHighlighted)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(586, DefaultConv, cocos2d::extension::CCControl, addTargetWithActionForControlEvents)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(587, DefaultConv, cocos2d::extension::CCControl, removeTargetWithActionForControlEvents)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(588, DefaultConv, cocos2d::extension::CCControl, isSelected)
	}
};

template<class Derived>
struct Modify<Derived, HSVWidgetPopup> : ModifyBase<Modify<Derived, HSVWidgetPopup>> {
	using ModifyBase<Modify<Derived, HSVWidgetPopup>>::ModifyBase;
	using Base = HSVWidgetPopup;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::extension::CCControlColourPicker> : ModifyBase<Modify<Derived, cocos2d::extension::CCControlColourPicker>> {
	using ModifyBase<Modify<Derived, cocos2d::extension::CCControlColourPicker>>::ModifyBase;
	using Base = cocos2d::extension::CCControlColourPicker;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(589, DefaultConv, cocos2d::extension::CCControlColourPicker, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(590, DefaultConv, cocos2d::extension::CCControlColourPicker, setColorValue)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(591, DefaultConv, cocos2d::extension::CCControlColourPicker, ccTouchBegan)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(592, DefaultConv, cocos2d::extension::CCControlColourPicker, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(593, DefaultConv, cocos2d::extension::CCControlColourPicker, colourPicker)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCBezierTo> : ModifyBase<Modify<Derived, cocos2d::CCBezierTo>> {
	using ModifyBase<Modify<Derived, cocos2d::CCBezierTo>>::ModifyBase;
	using Base = cocos2d::CCBezierTo;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(28, DefaultConv, cocos2d::CCBezierTo, create)
	}
};

template<class Derived>
struct Modify<Derived, CCNodeContainer> : ModifyBase<Modify<Derived, CCNodeContainer>> {
	using ModifyBase<Modify<Derived, CCNodeContainer>>::ModifyBase;
	using Base = CCNodeContainer;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(771, DefaultConv, CCNodeContainer, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(772, DefaultConv, CCNodeContainer, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(773, DefaultConv, CCNodeContainer, visit)
	}
};

template<class Derived>
struct Modify<Derived, CCAnimateFrameCache> : ModifyBase<Modify<Derived, CCAnimateFrameCache>> {
	using ModifyBase<Modify<Derived, CCAnimateFrameCache>>::ModifyBase;
	using Base = CCAnimateFrameCache;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, KeybindingsLayer> : ModifyBase<Modify<Derived, KeybindingsLayer>> {
	using ModifyBase<Modify<Derived, KeybindingsLayer>>::ModifyBase;
	using Base = KeybindingsLayer;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, GameManager> : ModifyBase<Modify<Derived, GameManager>> {
	using ModifyBase<Modify<Derived, GameManager>>::ModifyBase;
	using Base = GameManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1383, DefaultConv, GameManager, accountStatusChanged)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1384, DefaultConv, GameManager, colorForIdx)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1385, DefaultConv, GameManager, didExitPlayscene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1386, DefaultConv, GameManager, doQuickSave)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1387, DefaultConv, GameManager, fadeInMusic)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1388, DefaultConv, GameManager, getBGTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1389, DefaultConv, GameManager, getFontFile)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1390, DefaultConv, GameManager, getGameVariable)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1391, DefaultConv, GameManager, getIntGameVariable)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1392, DefaultConv, GameManager, getUGV)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1393, DefaultConv, GameManager, loadDeathEffect)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1394, DefaultConv, GameManager, loadFont)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1395, DefaultConv, GameManager, reloadAll)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1396, DefaultConv, GameManager, reloadAllStep2)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1397, DefaultConv, GameManager, reloadAllStep5)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1398, DefaultConv, GameManager, reportPercentageForLevel)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1399, DefaultConv, GameManager, setGameVariable)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1400, DefaultConv, GameManager, setIntGameVariable)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1401, DefaultConv, GameManager, setUGV)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1402, DefaultConv, GameManager, sharedState)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1403, DefaultConv, GameManager, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1404, DefaultConv, GameManager, getGTexture)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1405, DefaultConv, GameManager, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1406, DefaultConv, GameManager, reportAchievementWithID)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1407, DefaultConv, GameManager, resolutionForKey)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1408, DefaultConv, GameManager, update)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1409, DefaultConv, GameManager, isColorUnlocked)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1410, DefaultConv, GameManager, isIconUnlocked)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCClippingNode> : ModifyBase<Modify<Derived, cocos2d::CCClippingNode>> {
	using ModifyBase<Modify<Derived, cocos2d::CCClippingNode>>::ModifyBase;
	using Base = cocos2d::CCClippingNode;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(32, DefaultConv, cocos2d::CCClippingNode, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(33, DefaultConv, cocos2d::CCClippingNode, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(34, DefaultConv, cocos2d::CCClippingNode, getAlphaThreshold)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(35, DefaultConv, cocos2d::CCClippingNode, getStencil)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(36, DefaultConv, cocos2d::CCClippingNode, isInverted)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(37, DefaultConv, cocos2d::CCClippingNode, onEnter)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(38, DefaultConv, cocos2d::CCClippingNode, onEnterTransitionDidFinish)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(39, DefaultConv, cocos2d::CCClippingNode, onExit)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(40, DefaultConv, cocos2d::CCClippingNode, onExitTransitionDidStart)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(41, DefaultConv, cocos2d::CCClippingNode, setAlphaThreshold)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(42, DefaultConv, cocos2d::CCClippingNode, setInverted)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(43, DefaultConv, cocos2d::CCClippingNode, setStencil)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(44, DefaultConv, cocos2d::CCClippingNode, visit)
	}
};

template<class Derived>
struct Modify<Derived, CustomListView> : ModifyBase<Modify<Derived, CustomListView>> {
	using ModifyBase<Modify<Derived, CustomListView>>::ModifyBase;
	using Base = CustomListView;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(870, DefaultConv, CustomListView, create)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(871, DefaultConv, CustomListView, getListCell)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(872, DefaultConv, CustomListView, loadCell)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(873, DefaultConv, CustomListView, setupList)
	}
};

template<class Derived>
struct Modify<Derived, SongInfoObject> : ModifyBase<Modify<Derived, SongInfoObject>> {
	using ModifyBase<Modify<Derived, SongInfoObject>>::ModifyBase;
	using Base = SongInfoObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2217, DefaultConv, SongInfoObject, destructor)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2218, DefaultConv, SongInfoObject, encodeWithCoder)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2219, DefaultConv, SongInfoObject, canEncode)
	}
};

template<class Derived>
struct Modify<Derived, AppDelegate> : ModifyBase<Modify<Derived, AppDelegate>> {
	using ModifyBase<Modify<Derived, AppDelegate>>::ModifyBase;
	using Base = AppDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(667, DefaultConv, AppDelegate, bgScale)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(668, DefaultConv, AppDelegate, applicationDidFinishLaunching)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(669, DefaultConv, AppDelegate, applicationDidEnterBackground)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(670, DefaultConv, AppDelegate, applicationWillEnterForeground)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(671, DefaultConv, AppDelegate, applicationWillBecomeActive)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(672, DefaultConv, AppDelegate, applicationWillResignActive)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(673, DefaultConv, AppDelegate, trySaveGame)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(674, DefaultConv, AppDelegate, willSwitchToScene)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(675, DefaultConv, AppDelegate, get)
	}
};

template<class Derived>
struct Modify<Derived, LevelDownloadDelegate> : ModifyBase<Modify<Derived, LevelDownloadDelegate>> {
	using ModifyBase<Modify<Derived, LevelDownloadDelegate>>::ModifyBase;
	using Base = LevelDownloadDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCDelayTime> : ModifyBase<Modify<Derived, cocos2d::CCDelayTime>> {
	using ModifyBase<Modify<Derived, cocos2d::CCDelayTime>>::ModifyBase;
	using Base = cocos2d::CCDelayTime;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(45, DefaultConv, cocos2d::CCDelayTime, create)
	}
};

template<class Derived>
struct Modify<Derived, LevelCommentDelegate> : ModifyBase<Modify<Derived, LevelCommentDelegate>> {
	using ModifyBase<Modify<Derived, LevelCommentDelegate>>::ModifyBase;
	using Base = LevelCommentDelegate;
	static void apply() {
		using namespace sapphire::core::meta;

	}
};

template<class Derived>
struct Modify<Derived, LabelGameObject> : ModifyBase<Modify<Derived, LabelGameObject>> {
	using ModifyBase<Modify<Derived, LabelGameObject>>::ModifyBase;
	using Base = LabelGameObject;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1603, DefaultConv, LabelGameObject, init)
		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(1604, DefaultConv, LabelGameObject, setObjectColor)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCCallFunc> : ModifyBase<Modify<Derived, cocos2d::CCCallFunc>> {
	using ModifyBase<Modify<Derived, cocos2d::CCCallFunc>>::ModifyBase;
	using Base = cocos2d::CCCallFunc;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(30, DefaultConv, cocos2d::CCCallFunc, create)
	}
};

template<class Derived>
struct Modify<Derived, cocos2d::CCActionManager> : ModifyBase<Modify<Derived, cocos2d::CCActionManager>> {
	using ModifyBase<Modify<Derived, cocos2d::CCActionManager>>::ModifyBase;
	using Base = cocos2d::CCActionManager;
	static void apply() {
		using namespace sapphire::core::meta;

		SAPPHIRE_APPLY_MODIFY_FOR_FUNCTION(2, DefaultConv, cocos2d::CCActionManager, addAction)
	}
};
