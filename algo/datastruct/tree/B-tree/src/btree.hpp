//     btree.hpp, B-tree implemented in C++
//     Copyright (C) 2010, Liu Xinyu (liuxinyu95@gmail.com)

//     This program is free software: you can redistribute it and/or modify
//     it under the terms of the GNU General Public License as published by
//     the Free Software Foundation, either version 3 of the License, or
//     (at your option) any later version.

//     This program is distributed in the hope that it will be useful,
//     but WITHOUT ANY WARRANTY; without even the implied warranty of
//     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//     GNU General Public License for more details.

//     You should have received a copy of the GNU General Public License
//     along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef _B_TREE_
#define _B_TREE_

#include <iostream>
#include <list>

// t: minimum degree of B-tree
template<class K, int t>
struct BTree{
  BTree(){
    
  }

  ~BTree(){
    for_each(children.begin(), children.end(), 
  }

  std::list<K> keys;
  std::list<BTree*> children;
};
