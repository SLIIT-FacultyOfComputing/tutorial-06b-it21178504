class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       void setLength(double l);
       void setwidth(double w);
       void setHeight(double h);
       // write prototypes of getters for length, width and height
       int getLength();
       int getWidth();
       int getHeight();

       int calcVolume();
};
