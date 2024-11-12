#pragma once

#include <RE/Bethesda/Actor.h>
#include <RE/Bethesda/BSFixedString.h>
#include <RE/Bethesda/TESBoundObjects.h>
#include <RE/Bethesda/bhkPickData.h>
#include <RE/NetImmerse/NiAVObject.h>
#include <RE/NetImmerse/NiPoint3.h>
#include <REL/Relocation.h>

namespace RE
{
	namespace BSUtilities
	{
		inline NiAVObject* GetObjectByName(NiAVObject* root, const BSFixedString& name, bool tryInternal, bool dontAttach)
		{
			using func_t = decltype(&GetObjectByName);
			REL::Relocation<func_t> func{ REL::ID(843650) };
			return func(root, name, tryInternal, dontAttach);
		}
	}

	namespace CombatUtilities
	{
		inline bool CalculateProjectileTrajectory(const NiPoint3& a_position, const NiPoint3& a_velocity, float a_gravity, const NiPoint3& a_targetPosition, float a_x, NiPoint3& a_out)
		{
			using func_t = decltype(&CalculateProjectileTrajectory);
			REL::Relocation<func_t> func{ REL::ID(1575156) };
			return func(a_position, a_velocity, a_gravity, a_targetPosition, a_x, a_out);
		}

		inline bool CalculateProjectileLOS(Actor* a, BGSProjectile* proj, float speed, const NiPoint3& launchPos, const NiPoint3& targetPos, NiPoint3* hitPos, TESObjectREFR** collidee, float* dist)
		{
			typedef bool func_t(Actor*, BGSProjectile*, float, const NiPoint3&, const NiPoint3&, NiPoint3*, TESObjectREFR**, float*);
			REL::Relocation<func_t> func{ REL::ID(798616) };
			return func(a, proj, speed, launchPos, targetPos, hitPos, collidee, dist);
		}

		inline bool CalculateProjectileLOS(Actor* a_actor, BGSProjectile* a_projectile, bhkPickData& a_pickData)
		{
			typedef bool func_t(Actor*, BGSProjectile*, bhkPickData&);
			REL::Relocation<func_t> func{ REL::ID(55339) };
			return func(a_actor, a_projectile, a_pickData);
		}

		inline bool IsActorUsingUnarmed(Actor* a_actor)
		{
			using func_t = decltype(&IsActorUsingUnarmed);
			REL::Relocation<func_t> func{ REL::ID(1483696) };
			return func(a_actor);
		}

		static REL::Relocation<float> fWorldGravity{ REL::ID(1378547) };
	};

	namespace AnimationSystemUtils
	{
		inline bool WillEventChangeState(const TESObjectREFR& ref, const BSFixedString& evn)
		{
			using func_t = decltype(&WillEventChangeState);
			REL::Relocation<func_t> func{ REL::ID(35074) };
			return func(ref, evn);
		}
	}

	namespace BGSAnimationSystemUtils
	{
		inline bool InitializeActorInstant(Actor& a, bool b)
		{
			using func_t = decltype(&InitializeActorInstant);
			REL::Relocation<func_t> func{ REL::ID(672857) };
			return func(a, b);
		}

		struct ActiveSyncInfo
		{
			BSTObjectArena<BSTTuple<BSFixedString, float>> otherSyncInfo;
			float currentAnimTime;
			float animSpeedMult;
			float totalAnimTime;
		};

		inline bool GetActiveSyncInfo(const IAnimationGraphManagerHolder* a_graphHolder, ActiveSyncInfo& a_infoOut)
		{
			using func_t = decltype(&GetActiveSyncInfo);
			REL::Relocation<func_t> func{ REL::ID(1349978) };
			return func(a_graphHolder, a_infoOut);
		}

		inline bool IsActiveGraphInTransition(const TESObjectREFR* a_refr)
		{
			using func_t = decltype(&IsActiveGraphInTransition);
			REL::Relocation<func_t> func{ REL::ID(839650) };
			return func(a_refr);
		}
	};

	namespace PerkUtilities
	{
		inline void RemoveGrenadeTrajectory()
		{
			using func_t = decltype(&RemoveGrenadeTrajectory);
			REL::Relocation<func_t> func{ REL::ID(672186) };
			return func();
		}
	}

	namespace MiscStatManager
	{
		inline bool QueryStat(BSFixedString* a_statName, int* a_statValue)
		{
			using func_t = decltype(&QueryStat);
			REL::Relocation<func_t> func{ REL::ID(1315743) };
			return func(a_statName, a_statValue);
		}
	}

	namespace ScreenShot
	{
		enum TextureFileFormat : __int32
		{
			TEXTURE_FILE_FORMAT_BMP = 0x0,
			TEXTURE_FILE_FORMAT_JPG = 0x1,
			TEXTURE_FILE_FORMAT_TGA = 0x2,
			TEXTURE_FILE_FORMAT_PNG = 0x3,
			TEXTURE_FILE_FORMAT_DDS = 0x4,
			TEXTURE_FILE_FORMAT_PPM = 0x5,
			TEXTURE_FILE_FORMAT_DIB = 0x6,
			TEXTURE_FILE_FORMAT_HDR = 0x7,
			TEXTURE_FILE_FORMAT_PFM = 0x8,
		};

		inline void TakeScreenShot(char* a_source, enum TextureFileFormat a_format, int a_renderTargetID)
		{
			using func_t = decltype(&TakeScreenShot);
			REL::Relocation<func_t> func{ REL::ID(919230) };
			return func(a_source, a_format, a_renderTargetID);
		}
	}
}
