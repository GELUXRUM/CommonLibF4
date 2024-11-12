#pragma once

#include "RE/NetImmerse/NiAVObject.h"
#include "RE/NetImmerse/NiPoint3.h"


namespace RE
{
	class BSISoundOutputModel;

	class BSSoundHandle
	{
	public:
		~BSSoundHandle() noexcept {}  // NOLINT(modernize-use-equals-default)

		void ClearFollowedObject()
		{
			using func_t = decltype(&BSSoundHandle::ClearFollowedObject);
			REL::Relocation<func_t> func{ REL::ID(208569) };
			return func(this);
		}

		void CloneState(std::uint32_t a_unk1, std::uint32_t a_unk2)
		{
			using func_t = decltype(&BSSoundHandle::CloneState);
			REL::Relocation<func_t> func{ REL::ID(778812) };
			return func(this, a_unk1, a_unk2);
		}

		bool FadeInPlay(std::uint16_t a_milliseconds)
		{
			using func_t = decltype(&BSSoundHandle::FadeInPlay);
			REL::Relocation<func_t> func{ REL::ID(353528) };
			return func(this, a_milliseconds);
		}

		bool FadeOutAndRelease(std::uint16_t a_milliseconds)
		{
			using func_t = decltype(&BSSoundHandle::FadeOutAndRelease);
			REL::Relocation<func_t> func{ REL::ID(260328) };
			return func(this, a_milliseconds);
		}

		bool FadeTo(std::uint16_t a_volume, std::uint16_t a_milliseconds)
		{
			using func_t = decltype(&BSSoundHandle::FadeTo);
			REL::Relocation<func_t> func{ REL::ID(446556) };
			return func(this, a_volume, a_milliseconds);
		}

		bool FadeVolume(std::uint16_t a_unk1, std::uint16_t a_unk2, std::uint16_t a_unk3)
		{
			using func_t = decltype(&BSSoundHandle::FadeVolume);
			REL::Relocation<func_t> func{ REL::ID(1033816) };
			return func(this, a_unk1, a_unk2, a_unk3);
		}

		std::uint64_t GetDuration()
		{
			using func_t = decltype(&BSSoundHandle::GetDuration);
			REL::Relocation<func_t> func{ REL::ID(1192939) };
			return func(this);
		}

		std::int64_t GetLoopType()
		{
			using func_t = decltype(&BSSoundHandle::GetLoopType);
			REL::Relocation<func_t> func{ REL::ID(622751) };
			return func(this);
		}

		std::int32_t GetPlaybackPosition()
		{
			using func_t = decltype(&BSSoundHandle::GetPlaybackPosition);
			REL::Relocation<func_t> func{ REL::ID(115053) };
			return func(this);
		}

		std::int32_t GetSoundType()
		{
			using func_t = decltype(&BSSoundHandle::GetSoundType);
			REL::Relocation<func_t> func{ REL::ID(888638) };
			return func(this);
		}

		double GetVolume()
		{
			using func_t = decltype(&BSSoundHandle::GetVolume);
			REL::Relocation<func_t> func{ REL::ID(688691) };
			return func(this);
		}

		bool IsEnvelopeLoop()
		{
			using func_t = decltype(&BSSoundHandle::IsEnvelopeLoop);
			REL::Relocation<func_t> func{ REL::ID(529498) };
			return func(this);
		}

		bool IsPaused()
		{
			using func_t = decltype(&BSSoundHandle::IsPaused);
			REL::Relocation<func_t> func{ REL::ID(543387) };
			return func(this);
		}

		bool IsPlaying()
		{
			using func_t = decltype(&BSSoundHandle::IsPlaying);
			REL::Relocation<func_t> func{ REL::ID(1514207) };
			return func(this);
		}

		bool IsReady()
		{
			using func_t = decltype(&BSSoundHandle::IsReady);
			REL::Relocation<func_t> func{ REL::ID(926805) };
			return func(this);
		}

		bool IsValid()
		{
			using func_t = decltype(&BSSoundHandle::IsValid);
			REL::Relocation<func_t> func{ REL::ID(1154607) };
			return func(this);
		}

		bool NonForwardingRelease(bool a_unk)
		{
			using func_t = decltype(&BSSoundHandle::NonForwardingRelease);
			REL::Relocation<func_t> func{ REL::ID(978752) };
			return func(this, a_unk);
		}

		bool Pause()
		{
			using func_t = decltype(&BSSoundHandle::Pause);
			REL::Relocation<func_t> func{ REL::ID(1168427) };
			return func(this);
		}

		bool Play()
		{
			using func_t = decltype(&BSSoundHandle::Play);
			REL::Relocation<func_t> func{ REL::ID(384073) };
			return func(this);
		}

		bool PlayAfter(std::uint64_t a_milliseconds)
		{
			using func_t = decltype(&BSSoundHandle::PlayAfter);
			REL::Relocation<func_t> func{ REL::ID(557072) };
			return func(this, a_milliseconds);
		}

		bool Release(bool a_unk)
		{
			using func_t = decltype(&BSSoundHandle::Release);
			REL::Relocation<func_t> func{ REL::ID(1511135) };
			return func(this, a_unk);
		}

		void Seek(std::uint64_t a_milliseconds)
		{
			using func_t = decltype(&BSSoundHandle::Seek);
			REL::Relocation<func_t> func{ REL::ID(1524823) };
			return func(this, a_milliseconds);
		}

		bool SetBeamEnd(NiPoint3& a_unk)
		{
			using func_t = decltype(&BSSoundHandle::SetBeamEnd);
			REL::Relocation<func_t> func{ REL::ID(567778) };
			return func(this, a_unk);
		}

		void SetFollowsListener(bool a_follows)
		{
			using func_t = decltype(&BSSoundHandle::SetFollowsListener);
			REL::Relocation<func_t> func{ REL::ID(1431146) };
			return func(this, a_follows);
		}

		bool SetFrequency(float a_frequency)
		{
			using func_t = decltype(&BSSoundHandle::SetFrequency);
			REL::Relocation<func_t> func{ REL::ID(940583) };
			return func(this, a_frequency);
		}

		bool SetFrequencyVariance(std::uint8_t a_variance)
		{
			using func_t = decltype(&BSSoundHandle::SetFrequencyVariance);
			REL::Relocation<func_t> func{ REL::ID(1552262) };
			return func(this, a_variance);
		}

		void SetObjectToFollow(NiAVObject* a_object)
		{
			using func_t = decltype(&BSSoundHandle::SetObjectToFollow);
			REL::Relocation<func_t> func{ REL::ID(1179144) };
			return func(this, a_object);
		}

		void SetOutputModel(BSISoundOutputModel* a_outputModel)
		{
			using func_t = decltype(&BSSoundHandle::SetOutputModel);
			REL::Relocation<func_t> func{ REL::ID(170407) };
			return func(this, a_outputModel);
		}

		bool SetPosition(NiPoint3& a_position)
		{
			using func_t = decltype(&BSSoundHandle::SetPosition);
			REL::Relocation<func_t> func{ REL::ID(1538508) };
			return func(this, a_position);
		}

		void SetPriority(std::uint8_t a_priority)
		{
			using func_t = decltype(&BSSoundHandle::SetPriority);
			REL::Relocation<func_t> func{ REL::ID(605963) };
			return func(this, a_priority);
		}

		void SetReverbIndex(std::uint8_t a_index)
		{
			using func_t = decltype(&BSSoundHandle::SetReverbIndex);
			REL::Relocation<func_t> func{ REL::ID(515611) };
			return func(this, a_index);
		}

		bool SetStaticAttenuation(std::uint16_t a_staticAttenuation)
		{
			using func_t = decltype(&BSSoundHandle::SetStaticAttenuation);
			REL::Relocation<func_t> func{ REL::ID(581557) };
			return func(this, a_staticAttenuation);
		}

		bool SetVolume(float a_volume)
		{
			using func_t = decltype(&BSSoundHandle::SetVolume);
			REL::Relocation<func_t> func{ REL::ID(422259) };
			return func(this, a_volume);
		}

		bool Stop()
		{
			using func_t = decltype(&BSSoundHandle::Stop);
			REL::Relocation<func_t> func{ REL::ID(1340948) };
			return func(this);
		}

		// members
		std::uint32_t soundID;  // 0
		bool assumeSuccess;     // 4
		std::int8_t state;      // 5
	};
	static_assert(sizeof(BSSoundHandle) == 0x8);
}
