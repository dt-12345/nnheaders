/**
 * @file ResModel.h
 * @brief Resource model.
 */

#pragma once

#include <nn/gfx/gfx_Types.h>
#include <nn/types.h>

namespace nn {
namespace g3d2 {
class ResMaterial;

typedef void* TextureRef;

class ResModel {
public:
    u64 BindTexture(nn::g3d2::TextureRef (*)(char const*, void*), void*);
    void ForceBindTexture(nn::g3d2::TextureRef const&, char const*);
    void ReleaseTexture();
    void Setup(gfx::Device*);
    void Cleanup(gfx::Device*);
    void Reset();
    void Reset(u32);
    nn::g3d2::ResMaterial* FindMaterial(char const* materialName) const;

    u8 _0[0x70];
};
}  // namespace g3d2
}  // namespace nn
