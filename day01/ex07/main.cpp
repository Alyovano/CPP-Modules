/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aly <aly@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 14:53:37 by aly               #+#    #+#             */
/*   Updated: 2021/03/31 20:45:14 by aly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

/* 
** Argv[1] Nom du fichier |Argv[2] S1 | Argv[3] S2 
** ifstream ouvre le fichier s'il existe
** ofstream l'ouvre et le creer s'il n'existe pas
*/

int main(int argc, char **argv)
{
	if (argc != 4)
		return error(1);

	std::string const filename(argv[1]);
	std::string const s1(argv[2]);
	std::string const s2(argv[3]);
	std::string new_filename = filename + ".replace";

	if (s1.length() == 0 || s2.length() == 0)
		return s1.length() == 0 ? error(5) : error(6);
	if (!s1.compare(s2) && !s2.compare(s1))
		return error(3);

	std::ifstream my_file(argv[1]);

	if (my_file.good() == false)
		return error(2);

	std::string 			content;
	std::ostringstream		ss;
	ss << my_file.rdbuf();
	content = ss.str();

    size_t 			start_pos = 0;
	size_t 			i = 0;
	while (content.find(s1) != content.npos)
		content.replace(content.find(s1), s1.length(), s2);
	std::ofstream my_file_replace;
	my_file_replace.open(new_filename);

	my_file_replace << content << std::endl;
	my_file.close();
	my_file_replace.close();
	return 0;
}
