#pragma once

#include "glm/glm.hpp"
#include "Impaction/Core/Core.h"
#include "Impaction/Renderer/Texture.h"

namespace impct
{
    class SubTexture2D
    {
    public:
        explicit SubTexture2D(const Ref<Texture2D>& texture, const glm::vec2& min, const glm::vec2& max);

        [[nodiscard]] inline Ref<Texture2D> GetTexture() const { return m_Texture; }
        [[nodiscard]] inline const glm::vec2* GetTextCoords() const { return m_TextCoords; }

        static Ref<SubTexture2D> CreateFromCoords(const Ref<Texture2D>& texture, const glm::vec2& coords, const glm::vec2& cellSize, const glm::vec2& spriteSize = {1, 1} );

    private:
        Ref<Texture2D> m_Texture;
        glm::vec2 m_TextCoords[4];
    };
}