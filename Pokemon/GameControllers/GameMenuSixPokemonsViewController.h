//
//  GameMenuSixPokemonViewController.h
//  Pokemon
//
//  Created by Kaijie Yu on 3/9/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "GameMenuSixPokemonsUnitView.h"

@interface GameMenuSixPokemonsViewController : UIViewController <GameMenuSixPokemonsUnitViewDelegate>
{
  BOOL isSelectedPokemonInfoViewOpening_;
}

@property (nonatomic, assign) BOOL isSelectedPokemonInfoViewOpening;

- (void)initWithSixPokemons;
- (void)loadSixPokemons;
- (void)unloadSixPokemons;
- (void)unloadSelcetedPokemonInfoView;

@end