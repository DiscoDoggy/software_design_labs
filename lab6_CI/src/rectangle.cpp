#include "../header/rectangle.hpp"
       Rectangle::Rectangle(int w,int h) {
                width = w;
                height = h;
        }

        void Rectangle::set_width(int w) {
                width = w;
        }
        void Rectangle::set_height(int h) {
                height = h;
        }

        int Rectangle::getWidth() {
                return width;
        }

        int Rectangle::getHeight() {
                return height;
        }

        int Rectangle::area() {
                if (width < 0 || height < 0) {
                        return -1;
                }

                return width * height;
        }

        int Rectangle::perimeter() {
                if (width < 0 || height < 0) {
                        return -1;
                }

                return (2 * width) + (2 * height);
        }
