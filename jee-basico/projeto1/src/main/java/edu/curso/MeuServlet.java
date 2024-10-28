package edu.curso;

import java.io.IOException;

import javax.servlet.Servlet;
import javax.servlet.ServletConfig;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.annotation.WebServlet;
@WebServlet("/PrimeiroServlet")
public class MeuServlet implements Servlet {
	
	private ServletConfig config;
	
	@Override
	public void destroy() {
		System.out.println("Servlet Destruido");
	}

	@Override
	public ServletConfig getServletConfig() {
		return this.config;
	}

	@Override
	public String getServletInfo() {
		return "MeuPrimeiro Servlet";
	}

	@Override
	public void init(ServletConfig config) throws ServletException {
		this.config = config;
		System.out.println("Init do servlet executado ...");
	}

	@Override
	public void service(ServletRequest req, ServletResponse resp) throws ServletException, IOException {
		System.out.println("Servlet executado ...");
		String nome=req.getParameter("NOME");
		String profissao=req.getParameter("PROFISSAO");
		resp.getWriter().printf("""
			<html>
				<body>
					<h1>Boa tarde %s eu sou o servlet do Pedro</h1>
					<h2>Seja bem vindo %s</h2>
					<h2>Em que posso ajuda-lo ?</h2>
				</body>
			</html>
				""", nome, profissao);
	}
}
