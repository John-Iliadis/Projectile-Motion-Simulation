//
// Created by Gianni on 2/03/2024.
//

#ifndef PROJECTILEMOTIONSIM_TEXT_HPP
#define PROJECTILEMOTIONSIM_TEXT_HPP

#include <string>
#include <glm/glm.hpp>


class FontAtlas;

// A text object used for rendering
struct Text
{
    const FontAtlas* font_atlas = nullptr;
    std::string string;
    glm::vec2 position;
    glm::vec4 color;

    Text()
            : font_atlas()
            , string()
            , position()
            , color(1)
    {
    }
};


struct TextVertex
{
    glm::vec2 position;
    glm::vec2 texture_coordinates;
    glm::vec4 color;
    uint32_t texture_unit_index;  // specifies the texture font atlas

    TextVertex()
        : position()
        , texture_coordinates()
        , color(1)
        , texture_unit_index()
    {
    }
};


#endif //PROJECTILEMOTIONSIM_TEXT_HPP
