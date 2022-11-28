#include "../vector.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int>    v;
    ft::vector<int>    vft;

    for (int i = 0; i < 6; i++)
    {
        v.push_back(i);
        vft.push_back(i);
    }

    for (int i = 0; i < (int)vft.size(); i++)
    {
        std::cout << " STD    v[" << i << "] = " << v[i] << " C = " << v.capacity() << " S = " << v.size() << std::endl;
        std::cout << "  FT    v[" << i << "] = " << vft[i] << " C = " << vft.capacity() << " S = " << vft.size() << std::endl << std::endl;
    }
    // while (1);
        
    std::cout << "--------------------------------------------------------------------------------" << std::endl;

    std::vector<int>::iterator it = v.insert(v.begin(), 9);
    ft::vector<int>::iterator itft = vft.insert(vft.begin(), 9);
    it = v.insert(v.begin(), 9);
    itft = vft.insert(vft.begin(), 9);
    it = v.insert(v.begin(), 9);
    itft = vft.insert(vft.begin(), 9);
    it = v.insert(v.begin(), 9);
    itft = vft.insert(vft.begin(), 9);
    it = v.insert(v.begin(), 9);
    itft = vft.insert(vft.begin(), 9);

    std::cout << " STD    *it = " << *it << std::endl;
    std::cout << "  FT    *it = " << *itft << std::endl;
    
    for (int i = 0; i < (int)v.size(); i++)
    {
        std::cout << " STD    v[" << i << "] = " << v[i] << " C = " << v.capacity() << " S = " << v.size() << std::endl;
        std::cout << "  FT    v[" << i << "] = " << vft[i] << " C = " << vft.capacity() << " S = " << vft.size() << std::endl << std::endl;
    }
    while (1);
    
}