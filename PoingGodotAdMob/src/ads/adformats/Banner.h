// MIT License
//
// Copyright (c) 2023-present Poing Studios
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#ifndef Banner_h
#define Banner_h
#import "../PoingGodotAdMobAdView.h"
#import "app_delegate.h"

@import GoogleMobileAds;

@interface Banner : NSObject <GADBannerViewDelegate>

@property (nonatomic, strong) GADBannerView *bannerView;
@property (nonatomic, strong) NSNumber *UID;
@property (nonatomic, strong) NSNumber *adPosition;
@property (nonatomic) BOOL isHidden;
@property (nonatomic, strong) ViewController *rootController;

- (instancetype)initWithUID:(int)UID adViewDictionary:(Dictionary)adViewDictionary;
- (void)loadAd;
- (void)destroy;
- (void)hide;
- (void)show;
- (int)getWidth;
- (int)getHeight;
- (int)getWidthInPixels;
- (int)getHeightInPixels;

@end

#endif /* Banner_h */
