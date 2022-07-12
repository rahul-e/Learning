class MyColor():

    def __init__(self):
        self.red = 50
        self.green = 75
        self.blue = 100
    
    # Use __getattr__ to dynamically return a value
    def __getattr__(self, attr): # attr is parameter being passed requesting the attribute

        if attr == "rgbcolor":
            return(self.red,self.green,self.blue)
        else:
            #print(self.red)
            raise AttributeError

    # Use __setattr__ to allow the user to have the ability to set values for the colors

    def __setattr__(self, attr, val):
        
        if attr == "rgbcolor":
            self.red = val[0]
            self.green = val[1]
            self.blue = val[2]
            super().__setattr__(attr, val)
        else:
            super(MyColor, self).__setattr__(attr, val)

    def __dir__(self):
        return("red", "green", "blue", "rgbcolor")
        

    
def main():

    rgb=MyColor()
    rgb.rgbcolor = [20, 21, 22]
    print("For rgbcolor in attribute, value of blue is", rgb.blue)

    rgb=MyColor()
    print("For blue in attribute, value of blue is", rgb.blue)


if __name__ == "__main__":
    
    main()