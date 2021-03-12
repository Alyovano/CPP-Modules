/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alyovano <alyovano@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 17:50:54 by alyovano          #+#    #+#             */
/*   Updated: 2021/03/12 11:51:12 by alyovano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 	ponyOnTheStack() {
	Pony pony_stack;
	pony_stack.name("Stacky");
	pony_stack.color("Bleu");
}

void 	ponyOnTheHeap() {
	Pony *pony_heap = new Pony;
	pony_heap->name("Heapy");
	pony_heap->color("Rouge");
	delete pony_heap;
}

int		main() {
	ponyOnTheStack();
	ponyOnTheHeap();
}